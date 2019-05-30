#ifndef MYFUNCTEST_H
#define MYFUNCTEST_H

#include <gtest/gtest.h>

extern "C" {
#include "functions.h"
}

TEST(calculate, num0){
    ASSERT_EQ(calculate(0, 5), 5);
    ASSERT_EQ(calculate(5, 0), 5);
    ASSERT_EQ(calculate(5, 5), 10);
}
#endif // MYFUNCTEST_H
