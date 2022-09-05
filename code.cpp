#include <bits/stdc++.h>
using namespace std;

void push_queue(int queue[], int *rear_q, int *size_q, int x)
{
    if (*rear_q == *size_q - 1)
    {
        cout << "queue overflow" << endl;
    }
    else
    {
        *rear_q = *rear_q + 1;

        queue[(*rear_q)] = x;
    }
}

void pop_queue(int arr[], int *front, int *rear)
{
    if (*front == *rear)
        cout << "queue underflow" << endl;
    else
        *front = *front + 1;
}

int main()
{
    int input = 0;
    int *q_1, *q_2, *q_3;
    int s1 = 0, s2 = 0, s3 = 0;
    int sq1 = 0, f_q1 = -1, r_q1 = -1;
    int sq2 = 0, f_q2 = -1, r_q2 = -1;
    int sq3 = 0, f_q3 = -1, r_q3 = -1;

    printf("Enter number of elements in queue 1 : ");
    cin >> sq1;
    q_1 = (int *)calloc(sq1, sizeof(int));
    f_q1 = -1;
    r_q1 = -1;

    printf("Enter number of elements in queue 2 : ");
    cin >> sq2;
    q_2 = (int *)calloc(sq2, sizeof(int));
    f_q2 = -1;
    r_q2 = -1;

    printf("Enter number of elements in queue 3 : ");
    cin >> sq3;
    q_3 = (int *)calloc(sq3, sizeof(int));
    f_q3 = -1;
    r_q3 = -1;

    cout << "**********enter elements for queue 1**********" << endl;

    for (int i = 0; i < sq1; i++)
    {
        cin >> input;
        s1 += input;
        push_queue(q_1, &r_q1, &sq1, input);
    }

    cout << "**********enter elements for queue 2**********" << endl;

    for (int i = 0; i < sq2; i++)
    {
        cin >> input;
        s2 += input;
        push_queue(q_2, &r_q2, &sq2, input);
    }

    cout << "**********enter elements for queue 3**********" << endl;

    for (int i = 0; i < sq3; i++)
    {
        cin >> input;
        s3 += input;
        push_queue(q_3, &r_q3, &sq3, input);
    }

    while (true)
    {
        if (s1 >= s2 && s1 >= s3)
        {
            s1 -= q_1[f_q1 + 1];
            pop_queue(q_1, &f_q1, &r_q1);
        }
        else if (s2 >= s1 && s2 >= s3)
        {
            s2 -= q_2[f_q2 + 1];
            pop_queue(q_2, &f_q2, &r_q2);
        }
        else if (s3 >= s1 && s3 >= s2)
        {
            s3 -= q_3[f_q3 + 1];
            pop_queue(q_3, &f_q3, &r_q3);
        }
        if (s1 == s2 && s2 == s3)
        {
            cout << "\nMAXIMUM SUM POSSIBLE IS : " << s1 << endl;
            break;
        }
        if (s1 == 0 || s2 == 0 || s3 == 0)
        {
            cout << "\nMAX SUM IS 0" << endl;
            break;
        }
    }
    return 0;
}
