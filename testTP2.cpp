#include <gtest/gtest.h>
#include "Calculator.h"

TEST(testFactoriel, zeroValue) { //TEST(TestCaseName , TestName)
    EXPECT_EQ(1,factorielle(0));
}

TEST(testFacoriel, valStandard) {
    EXPECT_EQ(1,factorielle(1));
    EXPECT_EQ(120,factorielle(5));
    
}

