#ifndef CALCULATE_H
#define CALCULATE_H

#include <gtest/gtest.h>

extern "C" {
#include "functions.h"
}

TEST(calculate, num0){
    ASSERT_EQ(calculate(0, 5), 5);

}
TEST(calculate, num1){
    ASSERT_EQ(calculate(5, 0), 5);
}
TEST(calculate, num2){
    ASSERT_EQ(calculate(5, 5), 10);
}
#endif // CALCULATE_H
