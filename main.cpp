#include <iostream>
using namespace std;
int main()
{
    char user;          // recieve input from user "j k l "
    int score = 0;      // record all score of user
    int dialogtype[23]; // Dialogtype of story
    int count_Q = 0;    // count question
    int count_L;        // counter for the lying section
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
                    score += 3;
                    if (user == 'J')
                    {
                        score +=1;
                    }
                    else if (user == 'K')
                    {
                        score +=0;
                    }                    
                }
                else if (user == 'K')
                {
                    score += 3;
                    if (user == 'J')
                    {
                        score +=1;
                    }
                    else if (user == 'K')
                    {
                        score += 5;
                    }                    
                }
                else if (user == 'L')
                {
                    score +=5;
                    if (user == 'J')
                    {
                        score +=1;
                    }
                    else if (user == 'K')
                    {
                        score +=0;
                    }
                }
            }
            
            //Question Justice 1.2
            else if (count_Q == 4)
            {
                if (user == 'J')
                {
                    score -= 5;
                }
                else if (user == 'K')
                {
                    score +=5;
                }                
            }
            
            //Question Justice 1.3
            else if (count_Q == 5)
            {
                if (user == 'J')
                {
                    score -=5;
                }
                else if (user == 'K')
                {
                    score +=5;
                }
                else if (user == 'L')
                {
                    score +=3;
                }                
            }
            else if (count_Q == 6)
            {
                if(user == 'J')
                {
                    score +=5;
                }
                else if (user == 'K')
                {
                    score -=5;
                }
                else if (user == 'L')
                {
                    score +=3;
                }
            }
            
            //Question Lying - Never Have I Ever
            //Lying 1.1 
            else if (count_Q == 7)
            {
                if (user == 'J')
                {
                    score -= 5;
                    count_L += 1;
                }
                else if (user == 'K')
                {
                    score += 5;
                }
            }
            
            //Lying 1.2
            else if (count_Q == 8)
            {
                if (user == 'J')
                {
                    score -= 5;
                    count_L += 1;
                }
                else if (user == 'K')
                {
                    score += 5;
                }
            }
            
            //Lying 1.3
            else if (count_Q == 9)
            {
                if (user == 'J')
                {
                    score -= 5;
                    count_L += 1;
                }
                else if (user == 'K')
                {
                    score += 5;
                }
            }
            
            //Lying 1.4
            else if (count_Q == 10)
            {
                if (user == 'J')
                {
                    score -= 5;
                    count_L += 1;
                }
                else if (user == 'K')
                {
                    score += 5;
                }
            }
            
            //Lying 1.5
            else if (count_Q == 11)
            {
                if (user == 'J')
                {
                    score -= 5;
                    count_L += 1;
                }
                else if (user == 'K')
                {
                    score += 5;
                }
            }
            
            //Lying 1.6
            else if (count_Q == 12)
            {
                if (user == 'J')
                {
                    score -= 5;
                    count_L += 1;
                }
                else if (user == 'K')
                {
                    score += 5;
                }
            }
            
            //Lying 1.7
            else if (count_Q == 13)
            {
                if (user == 'J')
                {
                    score -= 5;
                    count_L += 1;
                }
                else if (user == 'K')
                {
                    score += 5;
                }
            }

            //Lying 1.8
            else if (count_Q == 13)
            {
                if (user == 'J')
                {
                    score += 5;
                }
                else if (user == 'K')
                {
                    score = (5 * count_L);
                }
            }
            count_Q += 1;
        }
    }
}