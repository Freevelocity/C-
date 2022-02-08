    #include <iostream>
    #include <vector>
    #include <string>
    #include <numeric>
    #include <array>
    #include <math.h>
    #include <sstream>
    #include <algorithm>

    using namespace std;






    int main()
    {
        string s;
        getline(cin,s);
        vector<int> r;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '1')
            {
                r.push_back(1);
            }
            if(s[i] == '2')
            {
                r.push_back(2);
            }
            if(s[i] == '3')
            {
                r.push_back(3);
            }
        }

        sort(r.begin(), r.end());
        for(int k = 0; k < r.size(); k++)
        {
            if( k  < r.size() -1)
            {
                cout << r[k] << "+";
            }
            else
                cout << r[k];
        }

    }
