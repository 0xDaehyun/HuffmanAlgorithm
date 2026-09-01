#include <iostream>
#include <functional>
using namespace std;


struct Node
{
    


};

int main( )
{
    // 예시 문자열
    string input = "AAAAAABBBBCDD";
    vector<int> fre;
// step 1) : 문자의 종류 파악하기


    // step 2) : 각 문자의 종류에 대한 갯수 파악하기


    priority_queue<int> pq;
    pq.push(20);
    pq.push(10);
    pq.push(5);
    pq.push(100);


    while(pq.empty() == false)
    {
        cout << pq.top() << '\n';
        pq.pop();

    }
    // 최소 힙 구현은 어떻게 진행할까 ? -> 1. 우선순위 큐 선언부  , 2. 숫자를 음수로 변환하기

    priority_queue<int , vector<int>  , greater<int>> ;



    // 1. 허프만 트리 만들기

    // 2. 각 문자를 비트로 나타내기

    // 3. encoding 단계


    // 4.  decoding 단계


    return 0; // 운영체제에 정상적으로 종료 됐다는 걸 알려주기 위한 코드다.
}