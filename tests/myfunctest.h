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

TEST(myfuncTest, greather2) {
    ASSERT_EQ(myfunc(10, 10, 10).flag, 0);
    ASSERT_EQ(myfunc(10, 9, 8).flag, 0);
}

TEST(myfuncTest, negative) {
    ASSERT_EQ(myfunc(-1, -5, -3).flag, 2);
}

#endif // MYFUNCTEST_H
