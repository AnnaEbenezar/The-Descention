#include <iostream>
using namespace std;
int main()
{
    char user;          // recieve input from user "j k l "
    int score = 0;      // record all score of user
    int dialogtype[23]; // Dialogtype of story
    int count_Q = 0;    // count question
    for (int i = 0; i < dialogtype; i++)
    {
        if (dialogtype[i] > 0)
        {
            if (dialogtype[i] == 1)
            {
                //Question 1
                if (score == 0 && count_Q == 0)
                {
                    if (user == 'J')
                    {
                        score += 5;
                    }
                    else if (user == 'K')
                    {
                        score -= 5;
                    }
                    else
                    {
                        score += 3;
                    }
                }
            }
            //Question Trolly 1.1
            else if (count_Q == 1)
            {
                if (user == 'J')
                {
                    score -= 5;
                }
                else if (user == 'K')
                {
                    score += 3;
                }
            }
            //Question Trolly 1.2
            else if (count_Q == 2)
            {
                if (user == 'J')
                {
                    score -= 5;
                }
                else if (user == 'K')
                {
                    score += 3;
                }
            }
            //Question Justice 1.1
            else if (count_Q == 3)
            {
                if (user == 'J')
                {
                    score -= 0;
                }
                else if (user == 'K')
                {
                    score += 0;
                }
            }
            count_Q += 1
        }
    }
}