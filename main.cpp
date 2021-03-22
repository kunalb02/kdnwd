#include <string>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string S, tmp; //S.reserve(1000000);
    int Q, op, K; cin >> Q;
    stack<string> states;
    while (Q--)
    {
        cin >> op;
        switch(op)
        {
        case 1:
            states.push(S);
            cin >> tmp;
            S.append(tmp);
            break;
        case 2:
            states.push(S);
            cin >> K;
            S.erase(S.end()-K, S.end());
            break;
        case 3:
            cin >> K;
            cout << S[K-1] << endl;
            break;
        case 4:
            S = move(states.top());
            states.pop();
            break;
        }
    }
}
