#pragma once
#include "gtest/gtest.h"
#include "../Tag1_01Stapel/stapel.h"
#include "../Tag1_01Stapel/StapelException.h"



class StapelTest:public testing::Test
{
protected:
	stapel object_under_test; // jeder Test hat eine neue frische Instanz
};

