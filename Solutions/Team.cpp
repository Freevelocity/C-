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
        int t,x,y,z,cnt = 0;
        cin >> t;
        for(int i = 0; i < t; i++)
        {
            cin >> x >> y >> z;
            if( x + y + z >= 2)
            {
                cnt++;
            }
        }

        cout << cnt;

    }
