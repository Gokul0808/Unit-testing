#include "box.h"
#include <gtest/gtest.h>
 
TEST(Box, EmptyConstructor)
{
    box b1;
    ASSERT_EQ(0.0, b1.get_length());
    ASSERT_EQ(0.0, b1.get_breadth());
    ASSERT_EQ(0.0, b1.get_height());
    ASSERT_EQ(0.0, b1.volume());
}
TEST(Box, ParamConstructor)
{
    box b1(10.0);
    ASSERT_EQ(10.0, b1.get_length());
    ASSERT_EQ(10.0, b1.get_breadth());
    ASSERT_EQ(10.0, b1.get_height());
    ASSERT_EQ(1000.0, b1.volume());
}
TEST(Box, ParamAllConstructor)
{
    box b1(10.0, 20.0, 30.0);
    ASSERT_EQ(10.0, b1.get_length());
    ASSERT_EQ(20.0, b1.get_breadth());
    ASSERT_EQ(30.0, b1.get_height());
    ASSERT_EQ(6000.0, b1.volume());
}
TEST(Box, CopyConstructor)
{
    box b1(10.0, 20.0, 30.0);
    box b2(b1);
    ASSERT_EQ(10.0, b1.get_length());
    ASSERT_EQ(20.0, b1.get_breadth());
    ASSERT_EQ(30.0, b1.get_height());
    ASSERT_EQ(6000.0, b1.volume());

    ASSERT_EQ(10.0, b2.get_length());
    ASSERT_EQ(20.0, b2.get_breadth());
    ASSERT_EQ(30.0, b2.get_height());
    ASSERT_EQ(6000.0, b2.volume());
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

