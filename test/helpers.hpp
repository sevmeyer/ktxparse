#pragma once

#include <cstdint>
#include <string>
#include <vector>


struct ImageData
{
	std::uint32_t target;
	std::int32_t  level;
	std::int32_t  internalformat;
	std::uint32_t width;
	std::uint32_t height;
	std::uint32_t depth;
	std::uint32_t format;
	std::uint32_t type;
	std::uint32_t size;
	std::uint8_t  byte0;
	std::uint8_t  byte1;
	std::uint8_t  byte2;
	std::uint8_t  byte3;
};


struct TextureData
{
	std::uint32_t target;
	std::uint32_t dimensions;
	std::uint32_t levels;
	std::uint32_t internalformat;
	std::uint32_t width;
	std::uint32_t height;
	std::uint32_t depth;

	bool isByteSwapped;
	bool isCompressed;
	bool shouldGenerateMipmap;

	std::vector<ImageData> images;
};


void testValid(const std::string& filename, TextureData expectedTex);
void testInvalid(const std::string& filename);
