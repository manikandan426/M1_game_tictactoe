#include "unity.h"
#include "Tictactoe.h"


#define PROJECT_NAME    "TIC-TAC-TOE"


void setUp(){
    

}

void tearDown(){

}

void test_successWin()
{
    char arr[10]={'0','x','x','x','o','x','o','o','o','x'};
     TEST_ASSERT_EQUAL(1, checkwin(arr));
}
void test_successdraw()
{
    char arr[10]={'0','o','x','o','o','x','o','x','o','x'};
    TEST_ASSERT_EQUAL(0,checkwin(arr));
}
void test_Emptyboard()
{
    char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
    TEST_ASSERT_EQUAL(-1,checkwin(arr));
}
int main()
{
  UNITY_BEGIN();
  RUN_TEST(test_successflWin);
  RUN_TEST(test_successdraw);
  RUN_TEST(test_Emptyboard);
  return UNITY_END();
}
