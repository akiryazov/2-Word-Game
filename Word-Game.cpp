+#include <iostream>
using namespace std;
int main ()
{
    int n , m ;
    cin >> n ;
    cin >> m ;
    char a[n][m];
    int counter = 0 ;
    string word ;
    cin >> word ;
    int b = word.length();
    int t=0;

    for (int i=0 ; i < n ; i++)
    {
        for (int j=0 ; j < m ; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i=0 ; i < n ; i++)
    {
        for (int j=0 ; j < m ; j++)
        {
            int k = j;
            while (a[i][k] == word[t])
            {
                t++;
                k++;
                if (t == b)
                {
                    counter++;
                }
            }
            t=0;

        }

    }
    for (int i=0 ; i < n ; i++)
    {
        for (int j = m-1 ; j >= 0 ; j--)
        {
            int k = j ;
            while (a[i][k] == word[t])
            {
                t++;
                k--;
                if (t == b-1 )
                {
                    counter++;
                }
            }

            t=0;
        }
    }
    for (int j = 0 ; j < m ; j++)
    {
        for (int i = 0 ; i < n ; i++)
        {
            int k = i;
            while (a[k][j] == word[t] && k < n)
            {
                t++;
                k++;
                if (t == b)
                {
                    counter++;

                }
            }
            t=0;
        }
    }
    for (int j=0 ; j < m ; j++)
    {
        for (int i = n-1 ; i >= 0 ; i--)
        {
            int k = i ;
            while (a[k][j] == word[t])
            {
                t++;
                k--;
                if ( t == b )
                {
                    counter++;
                }
            }

            t=0;
        }
    }
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < m ; j++)
        {
            int k = i ;
            int l = j ;
            while (a[k][l] == word[t] && k < n && l < m)
            {
                k++;
                l++;
                t++;
                if (t == b)
                {
                    counter++;
                    cout << k <<" " << l << endl;
                }
            }
            t=0;
        }
    }

    cout << counter ;


}
