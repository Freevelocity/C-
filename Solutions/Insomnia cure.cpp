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
        int k,l,m,n,d;
        int cnt =0;
        cin >> k >> l >> m >> n >> d;

        for(int i = 1; i <= d; i++)
        {
            if( k == 1 || l == 1 || m == 1)
            {
                cout << d << endl;
                return 0;
            }
            else if ( i%k == 0 || i%l == 0 || i%m == 0 || i%n ==0)
            {
                cnt++;
            }


        }

        cout << cnt  << endl;
    }
