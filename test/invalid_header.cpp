#include <catch2/catch.hpp>
#include <GL/gl.h>

#include "helpers.hpp"


TEST_CASE("ktxtest/ktx/invalid/header/compressed_glbaseinternalformat_invalid.ktx")
{
	// The parser ignores glBaseInternalFormat.
	testValid("ktxtest/ktx/invalid/header/compressed_glbaseinternalformat_invalid.ktx", {
		GL_TEXTURE_2D,2,1,0x83F1,16,16,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x83F1,16,16,1,0x83F1,0x0000,128,0x00,0xF8,0x00,0xF8} }});
}


TEST_CASE("ktxtest/ktx/invalid/header/compressed_glformat_not_0.ktx")
{
	testInvalid("ktxtest/ktx/invalid/header/compressed_glformat_not_0.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/header/compressed_gltype_not_0.ktx")
{
	testInvalid("ktxtest/ktx/invalid/header/compressed_gltype_not_0.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/header/compressed_gltypesize_not_1.ktx")
{
	// The parser determines glTypeSize independently.
	testValid("ktxtest/ktx/invalid/header/compressed_gltypesize_not_1.ktx", {
		GL_TEXTURE_2D,2,1,0x83F1,16,16,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x83F1,16,16,1,0x83F1,0x0000,128,0x00,0xF8,0x00,0xF8} }});
}


TEST_CASE("ktxtest/ktx/invalid/header/endianness_invalid.ktx")
{
	// The parser ignores any incorrect endianness marker.
	testValid("ktxtest/ktx/invalid/header/endianness_invalid.ktx", {
		GL_TEXTURE_2D,2,1,GL_R8,16,16,1,false,false,false, {
			{GL_TEXTURE_2D,0,GL_R8,16,16,1,GL_RED,GL_UNSIGNED_BYTE,256,0xFF,0xFF,0xFF,0xFF} }});
}


TEST_CASE("ktxtest/ktx/invalid/header/endianness_reversed.ktx")
{
	testInvalid("ktxtest/ktx/invalid/header/endianness_reversed.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/header/eof_at_0bytes.ktx")
{
	testInvalid("ktxtest/ktx/invalid/header/eof_at_0bytes.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/header/eof_at_31bytes.ktx")
{
	testInvalid("ktxtest/ktx/invalid/header/eof_at_31bytes.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/header/glbaseinternalformat_invalid.ktx")
{
	// The parser ignores glBaseInternalFormat.
	testValid("ktxtest/ktx/invalid/header/glbaseinternalformat_invalid.ktx", {
		GL_TEXTURE_2D,2,1,GL_R8,16,16,1,false,false,false, {
			{GL_TEXTURE_2D,0,GL_R8,16,16,1,GL_RED,GL_UNSIGNED_BYTE,256,0xFF,0xFF,0xFF,0xFF} }});
}


TEST_CASE("ktxtest/ktx/invalid/header/glformat_invalid.ktx")
{
	testInvalid("ktxtest/ktx/invalid/header/glformat_invalid.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/header/glinternalformat_invalid.ktx")
{
	testInvalid("ktxtest/ktx/invalid/header/glinternalformat_invalid.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/header/gltype_invalid.ktx")
{
	testInvalid("ktxtest/ktx/invalid/header/gltype_invalid.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/header/gltypesize_invalid.ktx")
{
	// The parser determines glTypeSize independently.
	testValid("ktxtest/ktx/invalid/header/gltypesize_invalid.ktx", {
		GL_TEXTURE_2D,2,1,GL_R8,16,16,1,false,false,false, {
			{GL_TEXTURE_2D,0,GL_R8,16,16,1,GL_RED,GL_UNSIGNED_BYTE,256,0xFF,0xFF,0xFF,0xFF} }});
}


TEST_CASE("ktxtest/ktx/invalid/header/identifier_invalid.ktx")
{
	testInvalid("ktxtest/ktx/invalid/header/identifier_invalid.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/header/identifier_newline_collapsed.ktx")
{
	testInvalid("ktxtest/ktx/invalid/header/identifier_newline_collapsed.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/header/identifier_newline_expanded.ktx")
{
	testInvalid("ktxtest/ktx/invalid/header/identifier_newline_expanded.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/header/size_2d_width_0.ktx")
{
	testInvalid("ktxtest/ktx/invalid/header/size_2d_width_0.ktx");
}


TEST_CASE("ktxtest/ktx/invalid/header/size_3d_height_0.ktx")
{
	testInvalid("ktxtest/ktx/invalid/header/size_3d_height_0.ktx");
}
