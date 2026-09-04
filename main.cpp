#include <iostream>
#include <functional>
using namespace std;

struct Node // 각 항목은 모두 노드로 되어있어야 한다
{
    char word; // 해당하는 문자를 기록하는 부분
    int freq; // 이 문자의 빈도수를 저장하는 변수
    struct Node *left;  // 왼쪽 노드의 위치를 저장하는 변수
    struct Node *right; // 오른쪽 노드의 위치를 저장하는 변수
};

int main()
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
    // 최소 힙 구현은 어떻게 진행할까 ? -> 1. 우선순위 큐 선언부  , 2. 숫자를 음수로 변환하기 총 두가지의 방법이 존재한다


    // 전체적인 순서가 지금 문자열을 읽어서 문자의 종류를 분류하고 각 문자마다 몇개가 존재하는지 확인하기 ,

    priority_queue<int , vector<int>  , greater<int>> ;


    // 0. 문자열에서 문자의 종류와 갯수 문류하기

    // 1. 허프만 트리 만들기

    // 2. 각 문자를 비트로 나타내기

    // 3. encoding 단계

    // 4. decoding 단계


    return 0; // 운영체제에 정상적으로 종료 됐다는 걸 알려주기 위한 코드다.
}