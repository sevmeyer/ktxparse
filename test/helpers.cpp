#include "helpers.hpp"

#include <catch2/catch.hpp>

#include <cstdint>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

#include "ktxparse/ktxparse.hpp"


std::vector<std::uint8_t> readBytes(const std::string& filename)
{
	std::ifstream stream{filename, std::ios::in | std::ios::binary};
	stream.exceptions(std::ifstream::badbit | std::ifstream::failbit);
	return {
		std::istreambuf_iterator<char>{stream},
		std::istreambuf_iterator<char>{}};
}


void testValid(const std::string& filename, TextureData expectedTex)
{
	const auto bytes{readBytes(filename)};
	const ktxparse::Texture parsedTex{bytes.data(), bytes.size()};

	REQUIRE(static_cast<bool>(parsedTex)   == true);
	REQUIRE(parsedTex.target               == expectedTex.target);
	REQUIRE(parsedTex.dimensions           == expectedTex.dimensions);
	REQUIRE(parsedTex.levels               == expectedTex.levels);
	REQUIRE(parsedTex.internalformat       == expectedTex.internalformat);
	REQUIRE(parsedTex.width                == expectedTex.width);
	REQUIRE(parsedTex.height               == expectedTex.height);
	REQUIRE(parsedTex.depth                == expectedTex.depth);
	REQUIRE(parsedTex.isByteSwapped        == expectedTex.isByteSwapped);
	REQUIRE(parsedTex.isCompressed         == expectedTex.isCompressed);
	REQUIRE(parsedTex.shouldGenerateMipmap == expectedTex.shouldGenerateMipmap);

	auto imgIter{parsedTex.begin()};
	auto endIter{parsedTex.end()};

	for (auto expectedImg : expectedTex.images)
	{
		REQUIRE(imgIter != endIter);
		const auto parsedImg{*imgIter};

		REQUIRE(parsedImg.target         == expectedImg.target);
		REQUIRE(parsedImg.level          == expectedImg.level);
		REQUIRE(parsedImg.internalformat == expectedImg.internalformat);
		REQUIRE(parsedImg.width          == expectedImg.width);
		REQUIRE(parsedImg.height         == expectedImg.height);
		REQUIRE(parsedImg.depth          == expectedImg.depth);
		REQUIRE(parsedImg.format         == expectedImg.format);
		REQUIRE(parsedImg.type           == expectedImg.type);
		REQUIRE(parsedImg.size           == expectedImg.size);
		REQUIRE(parsedImg.size           >= 4);
		REQUIRE(int(parsedImg.data[0])   == int(expectedImg.byte0));
		REQUIRE(int(parsedImg.data[1])   == int(expectedImg.byte1));
		REQUIRE(int(parsedImg.data[2])   == int(expectedImg.byte2));
		REQUIRE(int(parsedImg.data[3])   == int(expectedImg.byte3));

		++imgIter;
	}

	REQUIRE(imgIter == endIter);
}


void testInvalid(const std::string& filename)
{
	const auto bytes{readBytes(filename)};
	const ktxparse::Texture parsedTex{bytes.data(), bytes.size()};

	REQUIRE(static_cast<bool>(parsedTex) == false);
}
