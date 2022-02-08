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
        int a;
        vector<int> r;
        vector<int> b;
        for(int i = 0; i < 4; i++)
        {
            cin >> a;
            r.push_back(a);

        }
        sort(r.begin(), r.end());
        for(int j = 0 ; j < r.size() -1; j++)
        {
            cout << r[r.size() -1] - r[j] << " ";
        }




    }
