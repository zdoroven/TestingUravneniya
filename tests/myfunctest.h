#ifndef MYFUNCTEST_H
#define MYFUNCTEST_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}

TEST(myfuncTest, num0) {
    ASSERT_EQ(myfunc(3, 2, 1).flag, 0);
    ASSERT_EQ(myfunc(1, 1, 1).flag, 0);
}

TEST(myfuncTest, num1) {
    ASSERT_EQ(myfunc(0, 5, 5).flag, 1);

}

TEST(myfuncTest, num2) {
    ASSERT_EQ(myfunc(-1, -5, -3).flag, 2);
}

TEST(myfuncTest, num3) {
    ASSERT_EQ(myfunc(0, 0, 0).flag, 3);
}

TEST(myfuncTest, num4) {
    ASSERT_EQ(myfunc(1, -5, 6).x1, 2);
    ASSERT_EQ(myfunc(1, -5, 6).x2, 3);
}

TEST(myfuncTest, num5) {
    ASSERT_EQ(myfunc(2, 4, 2).flag, 1);
}

#endif // MYFUNCTEST_H
