#include <catch2/catch.hpp>
#include <GL/gl.h>

#include "helpers.hpp"


TEST_CASE("ktxtest/ktx/invalid/pixeldata/array_element_overflow.ktx")
{
	testInvalid("ktxtest/ktx/invalid/pixeldata/array_element_overflow.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/pixeldata/array_element_underflow.ktx")
{
	testInvalid("ktxtest/ktx/invalid/pixeldata/array_element_underflow.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/pixeldata/cubemap_face_underflow.ktx")
{
	testInvalid("ktxtest/ktx/invalid/pixeldata/cubemap_face_underflow.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/pixeldata/imagesize_missing_row_padding.ktx")
{
	testInvalid("ktxtest/ktx/invalid/pixeldata/imagesize_missing_row_padding.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/pixeldata/imagesize_overflows_file.ktx")
{
	testInvalid("ktxtest/ktx/invalid/pixeldata/imagesize_overflows_file.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/pixeldata/imagesize_overflows_format.ktx")
{
	testInvalid("ktxtest/ktx/invalid/pixeldata/imagesize_overflows_format.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/pixeldata/imagesize_underflows_file.ktx")
{
	// Because the leading bytes describe a correct texture, and the
	// trailing bytes can be safely ignored, the texture is accepted.
	testValid("ktxtest/ktx/invalid/pixeldata/imagesize_underflows_file.ktx", {
		GL_TEXTURE_2D,2,1,GL_R8,16,16,1,false,false,false, {
			{GL_TEXTURE_2D,0,GL_R8,16,16,1,GL_RED,GL_UNSIGNED_BYTE,256,0xFF,0xFF,0xFF,0xFF} }});
}


TEST_CASE("ktxtest/ktx/invalid/pixeldata/imagesize_underflows_format.ktx")
{
	testInvalid("ktxtest/ktx/invalid/pixeldata/imagesize_underflows_format.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/pixeldata/mipmap_level_overflow.ktx")
{
	// Because the leading levels describe a correct texture, and the
	// trailing levels can be safely ignored, the texture is accepted.
	testValid("ktxtest/ktx/invalid/pixeldata/mipmap_level_overflow.ktx", {
		GL_TEXTURE_2D,2,1,GL_R8,16,16,1,false,false,false, {
			{GL_TEXTURE_2D,0,GL_R8,16,16,1,GL_RED,GL_UNSIGNED_BYTE,256,0xFF,0xFF,0xFF,0xFF} }});
}


TEST_CASE("ktxtest/ktx/invalid/pixeldata/mipmap_level_underflow.ktx")
{
	testInvalid("ktxtest/ktx/invalid/pixeldata/mipmap_level_underflow.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/pixeldata/mipmap_order_reversed.ktx")
{
	testInvalid("ktxtest/ktx/invalid/pixeldata/mipmap_order_reversed.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/pixeldata/rows_unaligned.ktx")
{
	testInvalid("ktxtest/ktx/invalid/pixeldata/rows_unaligned.ktx");
}
