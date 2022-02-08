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

        int numOfWords;
        cin >> numOfWords;
        string words;
        for (int i = 0; i < numOfWords; i++)
        {
            cin >> words;
            if(words.length() > 10)
            {
                cout << words[0] << words.length() - 2  << words[words.length() -1] << endl;


            }

            else
        {
            cout << words << endl;
        }




    }
    }
