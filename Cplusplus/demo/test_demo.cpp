#include <gtest/gtest.h>
#include "demo.h"


TEST(Demo, division)
{
    int n1 = 10, n2 = 20;
    ASSERT_EQ(0.5, division(n1, n2));
    
    ASSERT_EQ(2, division(n2, n1));

    ASSERT_EQ(2, division(n2, n1));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}