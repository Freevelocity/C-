    #include <iostream>
    #include <string>
    #include <vector>
    #include <math.h>
    #include <map>
    #include <iomanip>
    #include <sstream>
    using namespace std;




    int main()
    {
     int c,j,t,cnt=0;
     cin >> c >> j;
     vector<int> k;

     for (int i = 0; i < c; i++)
     {
         cin >> t;
        k.push_back(t);
     }
     for(int q = 0; q < k.size(); q++)
     {
         if(k[q] >= k[j-1] && k[q] != 0)
         {
             cnt++;
         }

     }
     cout << cnt;
    }
