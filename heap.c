#include <stdio.h>

int arr[100], n;
main()
{
    int choice, num;
    n = 0;
    while(1)
    {
        printf("1.Insert the element \n");
        printf("2.Delete the element \n");
        printf("3.Display all elements \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("Enter the element to be inserted to the list : ");
            scanf("%d", &num);
            addheap(num, n);
            n = n + 1;
            break;
        case 2:
            printf("Enter the elements to be deleted from the list: ");
            scanf("%d", &num);
            delheap(num);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice \n");
    }
}
}

void display()
{
    int i;
    if (n == 0)
    {
        printf("Heap is empty \n");
        return;
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void addheap(int num, int loc)
{
    int root;
    while (loc > 0)
    {
        root =(loc - 1)/2;
        if (num <= arr[root])
        {
            arr[root] = num;
            return;
        }
        arr[loc] = arr[root];
        loc = root;
    }
    arr[0] = num;
}

void delheap(int num)
{
    int left, right, i, temp, root;

    for (i = 0; i < num; i++) {
        if (num == arr[i])
            break;
    }
    if (num != arr[i])
    {
        printf("%d not found in heap \n", num);
        return;
    }
    arr[i] = arr[n - 1];
    n = n - 1;
    root =(i - 1) / 2;
    if (arr[i] > arr[root])
    {
        addheap(arr[i], i);
        return;
    }
    left = 2 * i + 1;
    right = 2 * i + 2;
    while (right < n)
    {
        if (arr[i] >= arr[left] && arr[i] >= arr[right])
            return;
        if (arr[right] <= arr[left])
        {
            temp = arr[i];
            arr[i] = arr[left];
            arr[left] = temp;
            i = left;
        }
        else
        {
            temp = arr[i];
            arr[i] = arr[right];
            arr[right] = temp;
            i = right;
        }
        left = 2 * i + 1;
        right = 2 * i + 2;
    }
    if (left == n - 1 && arr[i])    {
        temp = arr[i];
        arr[i] = arr[left];
        arr[left] = temp;
    }
}
