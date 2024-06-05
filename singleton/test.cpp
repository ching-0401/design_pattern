#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <doctest/doctest.h>

#include "singleton.h"

TEST_CASE("test")
{
	auto& instance = design_pattern::Singleton::getInstance();
	CHECK( (&instance) != nullptr);
}