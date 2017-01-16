#!lua

solution "darknet"
	configurations { "Debug", "Release" }

	project "darknet"
	kind "ConsoleApp"
	language "C"
	files { "src/*.h", "src/*.c" }

	configuration "Debug"
		defines { "_CRT_SECURE_NO_WARNINGS;EBUG" }
		flags { "Symbols" }

	configuration "Release"
		defines { "_CRT_SECURE_NO_WARNINGS;NDEBUG" }
		flags { "OptimizeSpeed" }

