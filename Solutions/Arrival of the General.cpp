    #include <iostream>
    #include <vector>
    #include <string>
    #include <math.h>
    #include <sstream>
    #include <algorithm>

    using namespace std;




    int main()
    {
        int c,x;
        cin >> c;
        vector<int> t;
        for(int i =0; i < c; i++)
        {
            cin >> x;
            t.push_back(x);

        }

        int max = *max_element(t.begin(), t.end());
        int min = *min_element(t.begin(), t.end());
        int minloc = 0;
        if( t[0] == max && t[t.size()-1] == min)
        {
            cout << 0;
            return 0;
        }
        for(int l = 0; l < t.size(); l++)
        {
            if (t[l] == min)
            {
                minloc = l;
            }

        }

        for(int j = 0; j < t.size(); j++)
        {
         if(t[j] == max)
         {
             int y = j;
             if(y > minloc)
             {
                 cout << ((y - 1) + (c - minloc) ) - 1;
                 break;
             }
             else
                 cout << (y - 1) + (c - minloc) ;
             break;
         }



    }




    }
