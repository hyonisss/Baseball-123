#include <gtest/gtest.h>
#include "./baseball.cpp"

TEST(BaseballGame, ThrowExceptionWhenInputLengthIsUnmatched)
{
    Baseball game;
    EXPECT_THROW(game.guess(string("12")), length_error);
}

TEST(BaseballGame, ThrowExceptionWhenInvalidChar)
{
    Baseball game;
    try
    {
        game.guess(string("12s"));
        FAIL();
    }
    catch (exception e)
    {
        // PASS
    }
    // EXPECT_THROW(game.guess(string("12s")), invalid_argument);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}