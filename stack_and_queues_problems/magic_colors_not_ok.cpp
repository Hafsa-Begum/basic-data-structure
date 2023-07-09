#include <bits/stdc++.h>

using namespace std;

// RB = P
// RG = Y
// BG = C
// PPPYPYCCC
// PYPYC
int main()
{
   // Write your code here

   int query;
   cin >> query;

   while (query--)
   {

      int size;
      cin >> size;
      queue<char> q;
      queue<char> newQ;

      while (size--)
      {
         char x;
         cin >> x;
         q.push(x);
      }

      while (!q.empty())
      {
         char val = q.front();
         q.pop();

         if (q.empty())
         {
            newQ.push(val);
         }
         else{
            char current = q.front();
            if ((current == 'R' && val == 'G') || (current == 'G' && val == 'R'))
            {
               q.pop();
               // newQ.push('Y');
               if(!newQ.empty() && newQ.front() == 'Y'){
                        newQ.pop();
                }
                else{
                    newQ.push('Y');
                }
            }

            else if ((current == 'R' && val == 'B') || (current == 'B' && val == 'R'))
            {
               q.pop();
               // newQ.push('P');
               if(!newQ.empty() && newQ.front() == 'P'){
                        newQ.pop();
                }
                else{
                    newQ.push('P');
                }
            }

            else if ((current == 'G' && val == 'B') || (current == 'B' && val == 'G'))
            {
               q.pop();
               // newQ.push('C');
               if(!newQ.empty() && newQ.front() == 'C'){
                        newQ.pop();
                }
                else{
                    newQ.push('C');
                }
            }
            else if(current == val){   
               q.pop();
            }
            else
            {
               newQ.push(val);
            }
         }
      }

      while (!newQ.empty())
      {
         cout << valnewQ.front();
         newQ.pop();
      }
      cout << endl;
   }

   return 0;
}
