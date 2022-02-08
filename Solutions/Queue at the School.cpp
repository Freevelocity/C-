    #include <iostream>
    #include <cmath>
    #include <algorithm>
    #include <vector>
    #include <sstream>
    #include <iterator>
    using namespace std;





    int main() {

    int c,b;
    cin >> c >> b;
    string s;
    cin >> s;
    while (b--)
    {

    for(int i = 0; i < c ; i++)
    {
        if(s[i] == 'B' && s[i+1] == 'G')
        {
            s[i+1] = 'B';
            s[i] = 'G';
            i++;
        }

    }


    }
    cout << s << endl;
    }
