#include "iostream"
#include "queue"
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<int> q;
        for (int i = 1; i <= n; ++i)
            q.push(i);
        while(q.size() >= 2)
        {
            cout << q.front() << ' ';
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " \n";
    }
	return 0;
}