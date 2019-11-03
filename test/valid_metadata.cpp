#include <catch2/catch.hpp>
#include <GL/gl.h>

#include "helpers.hpp"


// Currently, the parser ignores metadata. Therefore, these tests
// only make sure that the metadata block is skipped correctly.


TEST_CASE("ktxtest/ktx/valid/metadata/metadata_custom_binary.ktx")
{
	testValid("ktxtest/ktx/valid/metadata/metadata_custom_binary.ktx", {
		GL_TEXTURE_2D,2,1,GL_R8,64,64,1,false,false,false, {
			{GL_TEXTURE_2D,0,GL_R8,64,64,1,GL_RED,GL_UNSIGNED_BYTE,4096,0xCC,0xCC,0xCC,0xCC} }});
}


TEST_CASE("ktxtest/ktx/valid/metadata/metadata_custom_utf8.ktx")
{
	testValid("ktxtest/ktx/valid/metadata/metadata_custom_utf8.ktx", {
		GL_TEXTURE_2D,2,1,GL_R8,64,64,1,false,false,false, {
			{GL_TEXTURE_2D,0,GL_R8,64,64,1,GL_RED,GL_UNSIGNED_BYTE,4096,0xCC,0xCC,0xCC,0xCC} }});
}


TEST_CASE("ktxtest/ktx/valid/metadata/metadata_edgecase_key_duplicate.ktx")
{
	testValid("ktxtest/ktx/valid/metadata/metadata_edgecase_key_duplicate.ktx", {
		GL_TEXTURE_2D,2,1,GL_R8,64,64,1,false,false,false, {
			{GL_TEXTURE_2D,0,GL_R8,64,64,1,GL_RED,GL_UNSIGNED_BYTE,4096,0x00,0x00,0x00,0x00} }});
}


TEST_CASE("ktxtest/ktx/valid/metadata/metadata_edgecase_key_empty.ktx")
{
	testValid("ktxtest/ktx/valid/metadata/metadata_edgecase_key_empty.ktx", {
		GL_TEXTURE_2D,2,1,GL_R8,64,64,1,false,false,false, {
			{GL_TEXTURE_2D,0,GL_R8,64,64,1,GL_RED,GL_UNSIGNED_BYTE,4096,0xCC,0xCC,0xCC,0xCC} }});
}


TEST_CASE("ktxtest/ktx/valid/metadata/metadata_edgecase_key_unofficial.ktx")
{
	testValid("ktxtest/ktx/valid/metadata/metadata_edgecase_key_unofficial.ktx", {
		GL_TEXTURE_2D,2,1,GL_R8,64,64,1,false,false,false, {
			{GL_TEXTURE_2D,0,GL_R8,64,64,1,GL_RED,GL_UNSIGNED_BYTE,4096,0xCC,0xCC,0xCC,0xCC} }});
}


TEST_CASE("ktxtest/ktx/valid/metadata/metadata_ktxorient_lu.ktx")
{
	testValid("ktxtest/ktx/valid/metadata/metadata_ktxorient_lu.ktx", {
		GL_TEXTURE_2D,2,1,GL_R8,64,64,1,false,false,false, {
			{GL_TEXTURE_2D,0,GL_R8,64,64,1,GL_RED,GL_UNSIGNED_BYTE,4096,0xFF,0xFF,0xFF,0xFF} }});
}


TEST_CASE("ktxtest/ktx/valid/metadata/metadata_ktxorient_rd.ktx")
{
	testValid("ktxtest/ktx/valid/metadata/metadata_ktxorient_rd.ktx", {
		GL_TEXTURE_2D,2,1,GL_R8,64,64,1,false,false,false, {
			{GL_TEXTURE_2D,0,GL_R8,64,64,1,GL_RED,GL_UNSIGNED_BYTE,4096,0x00,0x00,0x00,0x00} }});
}


TEST_CASE("ktxtest/ktx/valid/metadata/metadata_ktxorient_rdi.ktx")
{
	testValid("ktxtest/ktx/valid/metadata/metadata_ktxorient_rdi.ktx", {
		GL_TEXTURE_3D,3,1,GL_R8,64,64,2,false,false,false, {
			{GL_TEXTURE_3D,0,GL_R8,64,64,2,GL_RED,GL_UNSIGNED_BYTE,8192,0x00,0x00,0x00,0x00} }});
}


TEST_CASE("ktxtest/ktx/valid/metadata/metadata_ktxorient_ru.ktx")
{
	testValid("ktxtest/ktx/valid/metadata/metadata_ktxorient_ru.ktx", {
		GL_TEXTURE_2D,2,1,GL_R8,64,64,1,false,false,false, {
			{GL_TEXTURE_2D,0,GL_R8,64,64,1,GL_RED,GL_UNSIGNED_BYTE,4096,0xFF,0xFF,0xFF,0xFF} }});
}


TEST_CASE("ktxtest/ktx/valid/metadata/metadata_ktxorient_ruo.ktx")
{
	testValid("ktxtest/ktx/valid/metadata/metadata_ktxorient_ruo.ktx", {
		GL_TEXTURE_3D,3,1,GL_R8,64,64,2,false,false,false, {
			{GL_TEXTURE_3D,0,GL_R8,64,64,2,GL_RED,GL_UNSIGNED_BYTE,8192,0x33,0x33,0x33,0x33} }});
}


TEST_CASE("ktxtest/ktx/valid/metadata/metadata_none.ktx")
{
	testValid("ktxtest/ktx/valid/metadata/metadata_none.ktx", {
		GL_TEXTURE_3D,3,1,GL_R8,64,64,2,false,false,false, {
			{GL_TEXTURE_3D,0,GL_R8,64,64,2,GL_RED,GL_UNSIGNED_BYTE,8192,0x00,0x00,0x00,0x00} }});
}
