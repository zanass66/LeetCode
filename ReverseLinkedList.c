#include <stdio.h>
#include <stdlib.h>
/*strcut ListNode
{
    int val;
    strcut ListNode *next;
};
strcut ListNode* reverseList(struct ListNode* head)
{
   if(head = NULL)

}
*/
void revers_arr(int *arr, int lenght)
{
    int start = 0;
    int end = lenght - 1;
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(void)
{
    int arr[] = {1,2,3,4,5};
    revers_arr(arr,5);
    int i = 0;
    while(i < 5)
    {
        printf("%d\t",arr[i]);
        i++;
    }
    return 0;
}