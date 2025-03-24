#include <gtest/gtest.h>
#include "codeTp2/Calculator.h"

Calculator calc;

TEST(testFactoriel, zeroValue) { 
    EXPECT_EQ(0,calc.factorielle(0));
}

TEST(testFacoriel, valStandard) {
    EXPECT_EQ(1,calc.factorielle(1));
    EXPECT_EQ(120,calc.factorielle(5));
    EXPECT_EQ(120,calc.factorielle(4));
    ASSERT_EQ(120,calc.factorielle(6)); 
}

