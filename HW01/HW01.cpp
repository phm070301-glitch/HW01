#include <iostream>
using namespace std;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
    /* 빈칸 2: 포인터가 가리키는 값에 접근 */*p_HPPotion = count;
    /* 빈칸 3: 포인터가 가리키는 값에 접근 */*p_MPPotion = count;
}

int main()
{
    const int SIZE = 4;
    int stat[SIZE] = { 0 };

    while (1)
    {
        cout << "HP와 MP를 입력해주세요: ";
        cin >> stat[0] >> stat[1];

        if (stat[0] > 50 && stat[1] > 50)
        {
            break;
        }
        cout << "HP나 MP의 값이 너무 작습니다. 다시 입력해주세요." << endl;
    }

    while (1)
    {
        cout << "공격력과 방어력을 입력해주세요: ";
        cin >> stat[2] >> stat[3];

        if (stat[2] > 0 && stat[3] > 0)
        {
            break;
        }
        cout << "공격력이나 방어력의 값이 너무 작습니다. 다시 입력해주세요." << endl;
    }

    int choice = 0;
    int HPPotion = 0;
    int MPPotion = 0;

    setPotion(5, /* 빈칸 7: 변수의 주소 */&HPPotion, /* 빈칸 8: 변수의 주소 */&MPPotion);

    cout << "* 포션이 지급되었습니다. (HP, MP 포션 각 5개)" << endl;
    cout << "=============================================" << endl;
    cout << "<스탯 관리 시스템>" << endl;
    // ... (메뉴 출력)

    while (1)
    {
        cout << "번호를 선택해주세요: ";
        cin >> choice;

        if (choice == 0)
        {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        switch (choice)
        {
        case 1:
            if (HPPotion <= 0)
            {
                cout << "포션이 부족합니다." << endl;
                continue;
            }
            stat[0] += 20;
            HPPotion--;
            cout << "* HP가 20 증가되었습니다. 포션이 1개 차감됩니다." << endl;
            cout << "현재 HP: " << stat[0] << endl;
            cout << "남은 포션 수: " << HPPotion << endl;
            break;

        case 2:
            if (MPPotion <= 0)
            {
                cout << "포션이 부족합니다." << endl;
                continue;
            }
            stat[1] += 20;
            MPPotion--;
            cout << "* MP가 20 증가되었습니다. 포션이 1개 차감됩니다." << endl;
            cout << "현재 MP: " << stat[1] << endl; // stat[0] -> stat[1]
            cout << "남은 포션 수: " << MPPotion << endl;
            break;
        default:
            cout << "다시 입력해주세요." << endl;
            break;
        }
    }
    return 0;
}