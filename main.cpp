#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
 int num_cards , sum_di= 0  , sum_ser=0  ;

 cin >> num_cards;

 int cards[num_cards];
 for (int i=0 ; i<num_cards ; i++)
 {
     cin >> cards[i];

 }

 int left_poin = 0 , right_poin=num_cards-1;
 bool p=true;

while (left_poin<=right_poin)

{
    if (cards[left_poin]>=cards[right_poin])
    {
        if (p)
            sum_ser+=cards[left_poin];
        else
            sum_di+=cards[left_poin];
    left_poin++;


    }
    else if (cards[right_poin]>cards[left_poin])
    {
        if (p)
            sum_ser+=cards[right_poin];
        else
            sum_di+=cards[right_poin];

        right_poin--;

    }
if(p)
                p=false;
            else
                p=true;

    }
    cout << sum_ser << " "  << sum_di << endl;






    }


