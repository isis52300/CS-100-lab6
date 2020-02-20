#ifndef __DECORATOR_TEST_HPP__
#define __DECORATOR_TEST_HPP__

#include <stdlib.h>

#include "gtest/gtest.h"

#include "ceil.hpp"
#include "op.hpp"

TEST(CeilTest, CeilEvaluate) {
    Op* onePointFive = new Op(1.5);
    Ceil* round = new Ceil(onePointFive);
    EXPECT_EQ(round->evaluate(), 2);
}



#endif //__RDECORATOR_TEST_HPP__

