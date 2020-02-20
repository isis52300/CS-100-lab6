#ifndef __DECORATOR_TEST_HPP__
#define __DECORATOR_TEST_HPP__

#include <stdlib.h>

#include "gtest/gtest.h"

#include "ceil.hpp"
#include "abs.hpp"
#include "paren.hpp"
#include "op.hpp"

TEST(CeilTest, CeilEvaluate) {
    Op* onePointFive = new Op(1.5);
    Ceil* round = new Ceil(onePointFive);
    EXPECT_EQ(round->evaluate(), 2);
}

TEST(AbsTest, AbsEvaluate) {
	Op* negFive = new Op(-5);
	Abs* abs = new Abs(negFive);
	EXPECT_EQ(abs->evaluate(), 5);
}

TEST(ParenTest, ParenStringify) {
	Op* five = new Op(5);
	Paren* paren = new Paren(five);
	EXPECT_EQ(paren->stringify(), "(5.000000)");
}

TEST(CeilAndAbsTest, CeilAndAbsEvaluate) {
	Op* negTwoPointSix = new Op(-2.6);
	Abs* abs = new Abs(negTwoPointSix);
	Ceil* ceil = new Ceil(abs);
	EXPECT_EQ(ceil->evaluate(), 3);
}


#endif //__RDECORATOR_TEST_HPP__

