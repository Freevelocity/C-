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
        int n,h,ni,cnt=0;
        cin >> n >> h;
        vector<int> r;
        for(int i = 0; i < n; i++)
        {

            cin >> ni;
            r.push_back(ni);

        }

        for(int j = 0; j < r.size(); j++)
        {
            if(r[j] <= h)
            {
                cnt++;
            }
            else
                cnt += 2;
        }


        cout << cnt << endl;
    }
