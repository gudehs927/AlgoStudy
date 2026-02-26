#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main(void)
{
    queue<int>q;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string c;
        cin >> c;
        if(c == "push")
        {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (c == "pop")
		{
			if (q.empty())
				cout << -1 << endl;
			else
			{
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (c == "size")
		{
			cout << q.size() << endl;
		}
		else if (c == "empty")
		{
			cout << q.empty() << endl;
		}
		else if (c == "front")
		{
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		}
		else if (c == "back")
		{
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.back() << endl;
		}
	}
	return 0;
}
