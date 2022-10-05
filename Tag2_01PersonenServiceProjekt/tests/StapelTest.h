#pragma once
#include "gtest/gtest.h"
#include "../source/stapel.h"
#include "../source/StapelException.h"



class StapelTest:public testing::Test
{
protected:
	stapel object_under_test; // jeder Test hat eine neue frische Instanz
};

