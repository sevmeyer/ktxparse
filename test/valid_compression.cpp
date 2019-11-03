#include <catch2/catch.hpp>
#include <GL/gl.h>

#include "helpers.hpp"


// glInternalFormat is hardcoded because the respective
// OpenGL constants might not be available on a given platform.


TEST_CASE("ktxtest/ktx/valid/compression/format_astc_12x12_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_astc_12x12_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x93BD,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x93BD,64,64,1,0x93BD,0x0000,576,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,1,0x93BD,32,32,1,0x93BD,0x0000,144,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,2,0x93BD,16,16,1,0x93BD,0x0000, 64,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,3,0x93BD, 8, 8,1,0x93BD,0x0000, 16,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,4,0x93BD, 4, 4,1,0x93BD,0x0000, 16,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,5,0x93BD, 2, 2,1,0x93BD,0x0000, 16,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,6,0x93BD, 1, 1,1,0x93BD,0x0000, 16,0xFC,0xFD,0xFF,0xFF} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_astc_4x4_srgb.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_astc_4x4_srgb.ktx", {
		GL_TEXTURE_2D,2,7,0x93D0,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x93D0,64,64,1,0x93D0,0x0000,4096,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,1,0x93D0,32,32,1,0x93D0,0x0000,1024,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,2,0x93D0,16,16,1,0x93D0,0x0000, 256,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,3,0x93D0, 8, 8,1,0x93D0,0x0000,  64,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,4,0x93D0, 4, 4,1,0x93D0,0x0000,  16,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,5,0x93D0, 2, 2,1,0x93D0,0x0000,  16,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,6,0x93D0, 1, 1,1,0x93D0,0x0000,  16,0xFC,0xFD,0xFF,0xFF} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_astc_4x4x3_srgb.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_astc_4x4x3_srgb.ktx", {
		GL_TEXTURE_3D,3,5,0x93E2,24,24,24,false,true,false, {
			{GL_TEXTURE_3D,0,0x93E2,24,24,24,0x93E2,0x0000,4608,0x92,0x04,0x01,0x1C},
			{GL_TEXTURE_3D,1,0x93E2,12,12,12,0x93E2,0x0000, 576,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_3D,2,0x93E2, 6, 6, 6,0x93E2,0x0000, 128,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_3D,3,0x93E2, 3, 3, 3,0x93E2,0x0000,  16,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_3D,4,0x93E2, 1, 1, 1,0x93E2,0x0000,  16,0xFC,0xFD,0xFF,0xFF} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_astc_6x6x6_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_astc_6x6x6_unorm.ktx", {
		GL_TEXTURE_3D,3,5,0x93C9,24,24,24,false,true,false, {
			{GL_TEXTURE_3D,0,0x93C9,24,24,24,0x93C9,0x0000,1024,0x11,0x2C,0xA8,0x01},
			{GL_TEXTURE_3D,1,0x93C9,12,12,12,0x93C9,0x0000, 128,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_3D,2,0x93C9, 6, 6, 6,0x93C9,0x0000,  16,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_3D,3,0x93C9, 3, 3, 3,0x93C9,0x0000,  16,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_3D,4,0x93C9, 1, 1, 1,0x93C9,0x0000,  16,0xFC,0xFD,0xFF,0xFF} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_astc_8x5_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_astc_8x5_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x93B5,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x93B5,64,64,1,0x93B5,0x0000,1664,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,1,0x93B5,32,32,1,0x93B5,0x0000, 448,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,2,0x93B5,16,16,1,0x93B5,0x0000, 128,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,3,0x93B5, 8, 8,1,0x93B5,0x0000,  32,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,4,0x93B5, 4, 4,1,0x93B5,0x0000,  16,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,5,0x93B5, 2, 2,1,0x93B5,0x0000,  16,0xFC,0xFD,0xFF,0xFF},
			{GL_TEXTURE_2D,6,0x93B5, 1, 1,1,0x93B5,0x0000,  16,0xFC,0xFD,0xFF,0xFF} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_bc1_rgb_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_bc1_rgb_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x83F0,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x83F0,64,64,1,0x83F0,0x0000,2048,0x00,0x00,0x00,0x00},
			{GL_TEXTURE_2D,1,0x83F0,32,32,1,0x83F0,0x0000, 512,0xA2,0xF8,0x62,0xF8},
			{GL_TEXTURE_2D,2,0x83F0,16,16,1,0x83F0,0x0000, 128,0xE4,0xFF,0xE4,0xFF},
			{GL_TEXTURE_2D,3,0x83F0, 8, 8,1,0x83F0,0x0000,  32,0xE7,0x3F,0xE5,0x2F},
			{GL_TEXTURE_2D,4,0x83F0, 4, 4,1,0x83F0,0x0000,   8,0xFF,0x4F,0xFF,0x3F},
			{GL_TEXTURE_2D,5,0x83F0, 2, 2,1,0x83F0,0x0000,   8,0xBF,0x5A,0xBF,0x4A},
			{GL_TEXTURE_2D,6,0x83F0, 1, 1,1,0x83F0,0x0000,   8,0x5F,0xFB,0x1F,0xFB} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_bc1_rgba_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_bc1_rgba_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x83F1,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x83F1,64,64,1,0x83F1,0x0000,2048,0x00,0x00,0x00,0x00},
			{GL_TEXTURE_2D,1,0x83F1,32,32,1,0x83F1,0x0000, 512,0xA2,0xF8,0x62,0xF8},
			{GL_TEXTURE_2D,2,0x83F1,16,16,1,0x83F1,0x0000, 128,0xE4,0xFF,0xE4,0xFF},
			{GL_TEXTURE_2D,3,0x83F1, 8, 8,1,0x83F1,0x0000,  32,0xE7,0x3F,0xE5,0x2F},
			{GL_TEXTURE_2D,4,0x83F1, 4, 4,1,0x83F1,0x0000,   8,0xFF,0x4F,0xFF,0x3F},
			{GL_TEXTURE_2D,5,0x83F1, 2, 2,1,0x83F1,0x0000,   8,0xBF,0x5A,0xBF,0x4A},
			{GL_TEXTURE_2D,6,0x83F1, 1, 1,1,0x83F1,0x0000,   8,0x5F,0xFB,0x1F,0xFB} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_bc2_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_bc2_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x83F2,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x83F2,64,64,1,0x83F2,0x0000,4096,0xFF,0xFF,0xFF,0xFF},
			{GL_TEXTURE_2D,1,0x83F2,32,32,1,0x83F2,0x0000,1024,0xFF,0xFF,0xFF,0xFF},
			{GL_TEXTURE_2D,2,0x83F2,16,16,1,0x83F2,0x0000, 256,0xFF,0xFF,0xFF,0xFF},
			{GL_TEXTURE_2D,3,0x83F2, 8, 8,1,0x83F2,0x0000,  64,0xFF,0xFF,0xFF,0xFF},
			{GL_TEXTURE_2D,4,0x83F2, 4, 4,1,0x83F2,0x0000,  16,0xFF,0xFF,0xFF,0xFF},
			{GL_TEXTURE_2D,5,0x83F2, 2, 2,1,0x83F2,0x0000,  16,0xFF,0xFF,0xFF,0xFF},
			{GL_TEXTURE_2D,6,0x83F2, 1, 1,1,0x83F2,0x0000,  16,0xFF,0xFF,0xFF,0xFF} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_bc3_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_bc3_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x83F3,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x83F3,64,64,1,0x83F3,0x0000,4096,0x00,0xFF,0x49,0x92},
			{GL_TEXTURE_2D,1,0x83F3,32,32,1,0x83F3,0x0000,1024,0x00,0xFF,0x49,0x92},
			{GL_TEXTURE_2D,2,0x83F3,16,16,1,0x83F3,0x0000, 256,0x00,0xFF,0x49,0x92},
			{GL_TEXTURE_2D,3,0x83F3, 8, 8,1,0x83F3,0x0000,  64,0x00,0xFF,0x49,0x92},
			{GL_TEXTURE_2D,4,0x83F3, 4, 4,1,0x83F3,0x0000,  16,0x00,0xFF,0x49,0x92},
			{GL_TEXTURE_2D,5,0x83F3, 2, 2,1,0x83F3,0x0000,  16,0x00,0xFF,0x49,0x92},
			{GL_TEXTURE_2D,6,0x83F3, 1, 1,1,0x83F3,0x0000,  16,0x00,0xFF,0x49,0x92} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_bc4_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_bc4_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x8DBB,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x8DBB,64,64,1,0x8DBB,0x0000,2048,0x01,0x00,0x49,0x92},
			{GL_TEXTURE_2D,1,0x8DBB,32,32,1,0x8DBB,0x0000, 512,0x12,0x11,0x49,0x92},
			{GL_TEXTURE_2D,2,0x8DBB,16,16,1,0x8DBB,0x0000, 128,0x23,0x22,0x49,0x92},
			{GL_TEXTURE_2D,3,0x8DBB, 8, 8,1,0x8DBB,0x0000,  32,0x34,0x33,0x49,0x92},
			{GL_TEXTURE_2D,4,0x8DBB, 4, 4,1,0x8DBB,0x0000,   8,0x45,0x44,0x49,0x92},
			{GL_TEXTURE_2D,5,0x8DBB, 2, 2,1,0x8DBB,0x0000,   8,0x56,0x55,0x49,0x92},
			{GL_TEXTURE_2D,6,0x8DBB, 1, 1,1,0x8DBB,0x0000,   8,0x67,0x66,0x49,0x92} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_bc5_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_bc5_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x8DBD,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x8DBD,64,64,1,0x8DBD,0x0000,4096,0x01,0x00,0x49,0x92},
			{GL_TEXTURE_2D,1,0x8DBD,32,32,1,0x8DBD,0x0000,1024,0x12,0x11,0x49,0x92},
			{GL_TEXTURE_2D,2,0x8DBD,16,16,1,0x8DBD,0x0000, 256,0x23,0x22,0x49,0x92},
			{GL_TEXTURE_2D,3,0x8DBD, 8, 8,1,0x8DBD,0x0000,  64,0x34,0x33,0x49,0x92},
			{GL_TEXTURE_2D,4,0x8DBD, 4, 4,1,0x8DBD,0x0000,  16,0x45,0x44,0x49,0x92},
			{GL_TEXTURE_2D,5,0x8DBD, 2, 2,1,0x8DBD,0x0000,  16,0x56,0x55,0x49,0x92},
			{GL_TEXTURE_2D,6,0x8DBD, 1, 1,1,0x8DBD,0x0000,  16,0x67,0x66,0x49,0x92} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_bc6h_ufloat.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_bc6h_ufloat.ktx", {
		GL_TEXTURE_2D,2,7,0x8E8F,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x8E8F,64,64,1,0x8E8F,0x0000,4096,0x00,0x00,0x00,0x00},
			{GL_TEXTURE_2D,1,0x8E8F,32,32,1,0x8E8F,0x0000,1024,0xE0,0xBD,0xB6,0xDA},
			{GL_TEXTURE_2D,2,0x8E8F,16,16,1,0x8E8F,0x0000, 256,0xE0,0xBD,0xF7,0x1C},
			{GL_TEXTURE_2D,3,0x8E8F, 8, 8,1,0x8E8F,0x0000,  64,0x02,0x68,0xEF,0x81},
			{GL_TEXTURE_2D,4,0x8E8F, 4, 4,1,0x8E8F,0x0000,  16,0xE0,0xB5,0xF7,0xDE},
			{GL_TEXTURE_2D,5,0x8E8F, 2, 2,1,0x8E8F,0x0000,  16,0x00,0x37,0xDC,0xDE},
			{GL_TEXTURE_2D,6,0x8E8F, 1, 1,1,0x8E8F,0x0000,  16,0xE0,0xBD,0xE0,0xDE} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_bc7_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_bc7_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x8E8C,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x8E8C,64,64,1,0x8E8C,0x0000,4096,0x08,0x00,0xFE,0x80},
			{GL_TEXTURE_2D,1,0x8E8C,32,32,1,0x8E8C,0x0000,1024,0xC0,0xFF,0x1F,0x20},
			{GL_TEXTURE_2D,2,0x8E8C,16,16,1,0x8E8C,0x0000, 256,0xC0,0xFF,0xFF,0xFF},
			{GL_TEXTURE_2D,3,0x8E8C, 8, 8,1,0x8E8C,0x0000,  64,0x40,0x80,0xED,0xFF},
			{GL_TEXTURE_2D,4,0x8E8C, 4, 4,1,0x8E8C,0x0000,  16,0x40,0x00,0xF2,0xFF},
			{GL_TEXTURE_2D,5,0x8E8C, 2, 2,1,0x8E8C,0x0000,  16,0x40,0x80,0x16,0xA0},
			{GL_TEXTURE_2D,6,0x8E8C, 1, 1,1,0x8E8C,0x0000,  16,0xC0,0xFF,0x1F,0xC0} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_eac_r11_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_eac_r11_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x9270,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x9270,64,64,1,0x9270,0x0000,2048,0x00,0x00,0x24,0x92},
			{GL_TEXTURE_2D,1,0x9270,32,32,1,0x9270,0x0000, 512,0x0F,0x01,0xFF,0xFF},
			{GL_TEXTURE_2D,2,0x9270,16,16,1,0x9270,0x0000, 128,0x21,0x00,0xB6,0xDB},
			{GL_TEXTURE_2D,3,0x9270, 8, 8,1,0x9270,0x0000,  32,0x32,0x00,0xB6,0xDB},
			{GL_TEXTURE_2D,4,0x9270, 4, 4,1,0x9270,0x0000,   8,0x42,0x00,0xFF,0xFF},
			{GL_TEXTURE_2D,5,0x9270, 2, 2,1,0x9270,0x0000,   8,0x53,0x00,0xFF,0xFF},
			{GL_TEXTURE_2D,6,0x9270, 1, 1,1,0x9270,0x0000,   8,0x65,0x02,0xDB,0x6D} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_eac_r11g11_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_eac_r11g11_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x9272,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x9272,64,64,1,0x9272,0x0000,4096,0x00,0x00,0x24,0x92},
			{GL_TEXTURE_2D,1,0x9272,32,32,1,0x9272,0x0000,1024,0x0F,0x01,0xFF,0xFF},
			{GL_TEXTURE_2D,2,0x9272,16,16,1,0x9272,0x0000, 256,0x21,0x00,0xB6,0xDB},
			{GL_TEXTURE_2D,3,0x9272, 8, 8,1,0x9272,0x0000,  64,0x32,0x00,0xB6,0xDB},
			{GL_TEXTURE_2D,4,0x9272, 4, 4,1,0x9272,0x0000,  16,0x42,0x00,0xFF,0xFF},
			{GL_TEXTURE_2D,5,0x9272, 2, 2,1,0x9272,0x0000,  16,0x53,0x00,0xFF,0xFF},
			{GL_TEXTURE_2D,6,0x9272, 1, 1,1,0x9272,0x0000,  16,0x65,0x02,0xDB,0x6D} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_etc1_r8g8b8_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_etc1_r8g8b8_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x8D64,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x8D64,64,64,1,0x8D64,0x0000,2048,0x00,0x00,0x00,0x02},
			{GL_TEXTURE_2D,1,0x8D64,32,32,1,0x8D64,0x0000, 512,0xEE,0x00,0x00,0x24},
			{GL_TEXTURE_2D,2,0x8D64,16,16,1,0x8D64,0x0000, 128,0xEE,0xEE,0x11,0x24},
			{GL_TEXTURE_2D,3,0x8D64, 8, 8,1,0x8D64,0x0000,  32,0x30,0xF8,0x30,0x02},
			{GL_TEXTURE_2D,4,0x8D64, 4, 4,1,0x8D64,0x0000,   8,0x40,0xF8,0xF8,0x02},
			{GL_TEXTURE_2D,5,0x8D64, 2, 2,1,0x8D64,0x0000,   8,0x44,0x44,0xEE,0x24},
			{GL_TEXTURE_2D,6,0x8D64, 1, 1,1,0x8D64,0x0000,   8,0xEE,0x55,0xEE,0x24} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_etc2_r8g8b8_srgb.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_etc2_r8g8b8_srgb.ktx", {
		GL_TEXTURE_2D,2,7,0x9275,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x9275,64,64,1,0x9275,0x0000,2048,0x00,0x00,0x00,0x02},
			{GL_TEXTURE_2D,1,0x9275,32,32,1,0x9275,0x0000, 512,0xE0,0x30,0x30,0xB7},
			{GL_TEXTURE_2D,2,0x9275,16,16,1,0x9275,0x0000, 128,0xFB,0xF6,0xFF,0x62},
			{GL_TEXTURE_2D,3,0x9275, 8, 8,1,0x9275,0x0000,  32,0x58,0xD8,0x58,0xDB},
			{GL_TEXTURE_2D,4,0x9275, 4, 4,1,0x9275,0x0000,   8,0x60,0xD0,0xD0,0x6F},
			{GL_TEXTURE_2D,5,0x9275, 2, 2,1,0x9275,0x0000,   8,0x4C,0xFB,0x4C,0xFA},
			{GL_TEXTURE_2D,6,0x9275, 1, 1,1,0x9275,0x0000,   8,0xFB,0xAF,0xFA,0xF2} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_etc2_r8g8b8a1_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_etc2_r8g8b8a1_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x9276,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x9276,64,64,1,0x9276,0x0000,2048,0x00,0x00,0x00,0x00},
			{GL_TEXTURE_2D,1,0x9276,32,32,1,0x9276,0x0000, 512,0xFB,0x11,0xF1,0x10},
			{GL_TEXTURE_2D,2,0x9276,16,16,1,0x9276,0x0000, 128,0xFB,0xF2,0xFF,0x20},
			{GL_TEXTURE_2D,3,0x9276, 8, 8,1,0x9276,0x0000,  32,0x07,0xF3,0x3F,0x30},
			{GL_TEXTURE_2D,4,0x9276, 4, 4,1,0x9276,0x0000,   8,0x0C,0xFF,0x4F,0xF0},
			{GL_TEXTURE_2D,5,0x9276, 2, 2,1,0x9276,0x0000,   8,0x0D,0x5F,0x55,0xF0},
			{GL_TEXTURE_2D,6,0x9276, 1, 1,1,0x9276,0x0000,   8,0xFB,0x6F,0xF6,0xF0} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_etc2_r8g8b8a8_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_etc2_r8g8b8a8_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x9278,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x9278,64,64,1,0x9278,0x0000,4096,0xFF,0x00,0x00,0x00},
			{GL_TEXTURE_2D,1,0x9278,32,32,1,0x9278,0x0000,1024,0xFF,0x00,0x00,0x00},
			{GL_TEXTURE_2D,2,0x9278,16,16,1,0x9278,0x0000, 256,0xFF,0x00,0x00,0x00},
			{GL_TEXTURE_2D,3,0x9278, 8, 8,1,0x9278,0x0000,  64,0xFF,0x00,0x00,0x00},
			{GL_TEXTURE_2D,4,0x9278, 4, 4,1,0x9278,0x0000,  16,0xFF,0x00,0x00,0x00},
			{GL_TEXTURE_2D,5,0x9278, 2, 2,1,0x9278,0x0000,  16,0xFF,0x00,0x00,0x00},
			{GL_TEXTURE_2D,6,0x9278, 1, 1,1,0x9278,0x0000,  16,0xFF,0x00,0x00,0x00} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_pvrtc1_2bpp_srgb.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_pvrtc1_2bpp_srgb.ktx", {
		GL_TEXTURE_2D,2,7,0x8A56,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x8A56,64,64,1,0x8A56,0x0000,1024,0x00,0x00,0x00,0x00},
			{GL_TEXTURE_2D,1,0x8A56,32,32,1,0x8A56,0x0000, 256,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,2,0x8A56,16,16,1,0x8A56,0x0000,  64,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,3,0x8A56, 8, 8,1,0x8A56,0x0000,  32,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,4,0x8A56, 4, 4,1,0x8A56,0x0000,  32,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,5,0x8A56, 2, 2,1,0x8A56,0x0000,  32,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,6,0x8A56, 1, 1,1,0x8A56,0x0000,  32,0xAA,0xAA,0xAA,0xAA} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_pvrtc1_4bpp_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_pvrtc1_4bpp_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x8C02,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x8C02,64,64,1,0x8C02,0x0000,2048,0x00,0x00,0x00,0x00},
			{GL_TEXTURE_2D,1,0x8C02,32,32,1,0x8C02,0x0000, 512,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,2,0x8C02,16,16,1,0x8C02,0x0000, 128,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,3,0x8C02, 8, 8,1,0x8C02,0x0000,  32,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,4,0x8C02, 4, 4,1,0x8C02,0x0000,  32,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,5,0x8C02, 2, 2,1,0x8C02,0x0000,  32,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,6,0x8C02, 1, 1,1,0x8C02,0x0000,  32,0xAA,0xAA,0xAA,0xAA} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_pvrtc2_2bpp_unorm.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_pvrtc2_2bpp_unorm.ktx", {
		GL_TEXTURE_2D,2,7,0x9137,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x9137,64,64,1,0x9137,0x0000,1024,0xAB,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,1,0x9137,32,32,1,0x9137,0x0000, 256,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,2,0x9137,16,16,1,0x9137,0x0000,  64,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,3,0x9137, 8, 8,1,0x9137,0x0000,  16,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,4,0x9137, 4, 4,1,0x9137,0x0000,   8,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,5,0x9137, 2, 2,1,0x9137,0x0000,   8,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,6,0x9137, 1, 1,1,0x9137,0x0000,   8,0xAA,0xAA,0xAA,0xAA} }});
}


TEST_CASE("ktxtest/ktx/valid/compression/format_pvrtc2_4bpp_srgb.ktx")
{
	testValid("ktxtest/ktx/valid/compression/format_pvrtc2_4bpp_srgb.ktx", {
		GL_TEXTURE_2D,2,7,0x93F1,64,64,1,false,true,false, {
			{GL_TEXTURE_2D,0,0x93F1,64,64,1,0x93F1,0x0000,2048,0xA0,0x20,0x00,0x00},
			{GL_TEXTURE_2D,1,0x93F1,32,32,1,0x93F1,0x0000, 512,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,2,0x93F1,16,16,1,0x93F1,0x0000, 128,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,3,0x93F1, 8, 8,1,0x93F1,0x0000,  32,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,4,0x93F1, 4, 4,1,0x93F1,0x0000,   8,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,5,0x93F1, 2, 2,1,0x93F1,0x0000,   8,0xAA,0xAA,0xAA,0xAA},
			{GL_TEXTURE_2D,6,0x93F1, 1, 1,1,0x93F1,0x0000,   8,0xAA,0xAA,0xAA,0xAA} }});
}
