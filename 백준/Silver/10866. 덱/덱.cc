#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main(void)
{
    deque<int>d;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        string c;
        cin >> c;
        if(c == "push_back")
        {
            int num;
            cin >> num;
            d.push_back(num);
        }
        else if(c == "push_front")
        {
            int num;
            cin >> num;
            d.push_front(num);
        }
        else if(c == "pop_back")
        {
            if (d.empty())
                cout << -1 << endl;
            else{
                cout << d.back()<< endl;
                d.pop_back();
            }
        }
        else if(c == "pop_front")
        {
            if (d.empty())
                cout << -1 << endl;
            else{
                cout << d.front()<< endl;
                d.pop_front();
            }
        }
        else if(c == "size")
        {
            cout << d.size()<< endl;
        }
        else if(c == "empty")
        {
            cout << d.empty()<< endl;
        }
        else if(c == "front")
        {
            if(d.empty())
                cout<< -1<< endl;
            else{
                cout <<d.front()<< endl;
            }
        }
        else if(c == "back")
            {
            if(d.empty())
                cout<< -1<< endl;
            else{
                cout <<d.back()<< endl;
            }
        }
    }
}