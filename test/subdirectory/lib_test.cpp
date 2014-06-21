#include <gtest/gtest.h>
#include "subdirectory/lib.h"


class SomeTest : public testing::Test
{
protected:

    virtual void SetUp()
    {

    }

    virtual void TearDown()
    {

    }


};


TEST_F(SomeTest, TrueFalseTest)
{
    ASSERT_EQ(say_true(), true);
    ASSERT_EQ(say_false(), false);
}


int main (int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
