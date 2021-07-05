#include "Complex.h"
#include <gtest/gtest.h>

TEST(Complex, EmptyConstructor)
{
    Complex C1;
    ASSERT_EQ(0, C1.get_real());
    ASSERT_EQ(0, C1.get_img());
}

TEST(Complex, ParameterisedConstructor)
{
    Complex C1(10);
    ASSERT_EQ(10, C1.get_real());
    ASSERT_EQ(10, C1.get_img());

    Complex C2(10, 20);
    ASSERT_EQ(10, C2.get_real());
    ASSERT_EQ(20, C2.get_img());
}

TEST(Complex, CopyConstructor)
{
    Complex C1(10);
    Complex C2(C1);
    ASSERT_EQ(10, C2.get_real());
    ASSERT_EQ(10, C2.get_img());
}

TEST(Complex, Operatorplus)
{
    Complex C1(10);
    Complex C2(10);

/*  
    How can the operators be used
    C1 + C2
    C3 = C1 + C2
    C4 = C1 + C2 + C3
*/
    Complex C3 = C1 + C2;
    ASSERT_EQ(20, C3.get_real());
    ASSERT_EQ(20, C3.get_img());
}

TEST(Complex, OperatorComparision)
{
    Complex C1(10);
    Complex C2(10);
    ASSERT_EQ(true, C1 == C2);
}

TEST(Complex, OperatorPreincrement)
{
    Complex C1(10);
    ++C1;
    ASSERT_EQ(11, C1.get_real());
    ASSERT_EQ(11, C1.get_img());

    Complex C2(2);
    C2 = ++C1;
    ASSERT_EQ(12, C2.get_real());
    ASSERT_EQ(12, C2.get_img());

    ASSERT_EQ(12, C1.get_real());
    ASSERT_EQ(12, C1.get_img());
}

TEST(Complex, OperatorPostincrement)
{
    Complex C1(10);
    C1++;
    ASSERT_EQ(11, C1.get_real());
    ASSERT_EQ(11, C1.get_img());

    Complex C2(2);
    C2 = C1++;
    ASSERT_EQ(11, C2.get_real());
    ASSERT_EQ(11, C2.get_img());

    ASSERT_EQ(12, C1.get_real());
    ASSERT_EQ(12, C1.get_img());
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}