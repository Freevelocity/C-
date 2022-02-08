    #include <iostream>
    #include <vector>
    #include <string>
    #include <array>
    #include <math.h>
    #include <sstream>
    #include <algorithm>

    using namespace std;






    int main()
    {

        int t,c,f;
        cin >> t >> c;
        vector<int> r;
        for(int i = 0; i < t ; i++)
        {
            cin >> f;
            r.push_back(f);
            if(r[i]+c > 5)
            {
                r[i] = 10;
            }


        }
        r.erase(std::remove(r.begin(), r.end(), 10),r.end());
        sort(r.begin(),r.end());

        cout << (r.size()) / 3 ;

    }
