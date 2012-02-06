/*
 * TFoo.cpp
 *
 *  Created on: Feb 6, 2012
 *      Author: pz325
 */


#include "src/Foo.h"
#include "gtest/gtest.h"

TEST(TFoo, Positive)
{
	ASSERT_EQ(6, add_foo(2, 4));
}
