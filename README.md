ktxparse
========

A simple [KTX] texture parser for OpenGL, implemented in C++

- Only depends on the standard library
- Does not allocate or modify memory
- Does not throw exceptions
- Validates image formats and sizes
- Single lightweight header
- Hassle-free [Boost Software License]


Limitations
-----------

- Key-value metadata is ignored
- No support for legacy [OESCPT] palette formats
- No support for exotic core formats
  `GL_RGBA2`, `GL_RGB4`, `GL_RGB5`, 
  `GL_RGB10`, `GL_RGB12`, `GL_RGBA12`


Example
-------

```cpp
GLuint loadKTX(const uint8_t* data, size_t size)
{
  ktxparse::Texture ktx{data, size};

  if (!ktx)
    return 0;

  GLuint name{0};
  glGenTextures(1, &name);
  glBindTexture(ktx.target, name);

  glTexParameteri(ktx.target, GL_TEXTURE_BASE_LEVEL, 0);
  glTexParameteri(ktx.target, GL_TEXTURE_MAX_LEVEL, ktx.levels - 1);

  switch (ktx.dimensions)
  {
    case 1:
      glTexStorage1D(
        ktx.target, ktx.levels, ktx.internalformat, ktx.width);
      for (auto img : ktx)
        if (ktx.isCompressed)
          glCompressedTexSubImage1D(
            img.target, img.level, 0, img.width,
            img.format, img.size, img.data);
        else
          glTexSubImage1D(
            img.target, img.level, 0, img.width,
            img.format, img.type, img.data);
      break;

    case 2:
      glTexStorage2D(
        ktx.target, ktx.levels, ktx.internalformat,
        ktx.width,  ktx.height);
      for (auto img : ktx)
        if (ktx.isCompressed)
          glCompressedTexSubImage2D(
            img.target, img.level, 0, 0, img.width,
            img.height, img.format, img.size, img.data);
        else
          glTexSubImage2D(
            img.target, img.level, 0, 0, img.width,
            img.height, img.format, img.type, img.data);
      break;

    case 3:
      glTexStorage3D(
        ktx.target, ktx.levels, ktx.internalformat,
        ktx.width,  ktx.height, ktx.depth);
      for (auto img : ktx)
        if (ktx.isCompressed)
          glCompressedTexSubImage3D(
            img.target, img.level, 0, 0, 0, img.width,
            img.height, img.depth, img.format, img.size, img.data);
        else
          glTexSubImage3D(
            img.target, img.level, 0, 0, 0, img.width,
            img.height, img.depth, img.format, img.type, img.data);
      break;
  }
  
  return name;
}
```


Interface
---------

The Texture constructor initializes arguments for functions
like [glTexImage], [glTexStorage], and [glTexSubImage].
The arguments have the same name and type as documented by OpenGL.

The constructor may fail if the input is incorrect.
In that case, the object is left in an undefined state.
Before using a Texture object, make sure that it
returns `true` when converted to `bool`.

```cpp
struct Texture
{
  uint32_t target;
  uint32_t dimensions;       // For gl*D()
  uint32_t levels;           // Ignores shouldGenerateMipmap
  uint32_t internalformat;
  uint32_t width;
  uint32_t height;
  uint32_t depth;

  bool isByteSwapped;        // For GL_UNPACK_SWAP_BYTES
  bool isCompressed;         // For glCompressed*()
  bool shouldGenerateMipmap; // For glGenerateMipmap()

  // Parses data from memory.
  // Can handle nullptr.
  Texture(const uint8_t* data, size_t size) 

  // Checks if the construction was successful.
  // Alterations to public members are ignored.
  explicit operator bool() const

  ImageIterator begin() const
  ImageIterator end()   const
};
```

A Texture provides standard `begin` and `end` functions,
to iterate through the images in a ranged-based for loop.
The iterator constructs Image objects and returns them by value.

```cpp
struct Image
{
  uint32_t target;
  int32_t  level;
  int32_t  internalformat;
  uint32_t width;
  uint32_t height;
  uint32_t depth;
  uint32_t format;
  uint32_t type;
  uint32_t size;
  const uint8_t* data;
};
```


Install
-------

This is a header-only library. Simply add the
header from the `include` directory to your project.

The unit tests can be compiled and run with:

    mkdir build
    cd build
    cmake ..
    make
    ./test/ktxparse-test



[KTX]: https://www.khronos.org/opengles/sdk/tools/KTX/file_format_spec/
[Boost Software License]: https://www.boost.org/users/license.html
[glTexImage]: https://www.khronos.org/opengl/wiki/GLAPI/glTexImage2D
[glTexStorage]: https://www.khronos.org/opengl/wiki/GLAPI/glTexStorage2D
[glTexSubImage]: https://www.khronos.org/opengl/wiki/GLAPI/glTexSubImage2D
[OESCPT]: https://www.khronos.org/registry/OpenGL/extensions/OES/OES_compressed_paletted_texture.txt
