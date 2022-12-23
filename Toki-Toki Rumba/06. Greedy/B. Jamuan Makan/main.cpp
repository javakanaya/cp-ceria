#include <bits/stdc++.h>

using namespace std;

typedef struct
{
    int start, duration, end;
} guestData;

bool sortFunc(guestData a, guestData b)
{
    return a.end < b.end;
}

int main(void)
{
    int N;

    cin >> N;

    vector<guestData> guest;

    for (int i = 0; i < N; i++)
    {
        guestData tempGuest;
        cin >> tempGuest.start >> tempGuest.duration;
        tempGuest.end = tempGuest.start + tempGuest.duration;
        guest.push_back(tempGuest);
    }

    sort(guest.begin(), guest.end(), sortFunc);

    int currTime = 0, count = 0;
    for (int i = 0; i < N; i++)
    {
        // printf("guest %d start %d duration %d end %d\n", i, guest[i].start, guest[i].duration, guest[i].end);
        if (guest[i].start >= currTime)
        {
            currTime = guest[i].end;
            count++;
            // printf("\n%d\n", count);
        }
        // printf("curTime = %d\n", currTime);
    }

    cout << count << endl;
    return 0;
}