#include <stdio.h>
#include <stdlib.h>
int sort(int arr[], int size)
{
	int* left = arr;                                    //定义一个左指针指向数组第一个元素
	int* right = arr+size-1;                            //定义一个右指针指向数组最后一个元素
	while (left < right)
	{
		while ((*left % 2 != 0) && (left < right))      //判断指针指向的元素是否为奇数,如果不是指向后一个元素
		{
			left++;
		}
		while ((*right % 2 == 0) && (left < right))     //判断右指针指向的元素是否为偶数,如果不是指向前一个元素
		{
			right--;
		}
		if (left < right)                               //交换当前左右指针指向的元素,当前左指针指向一个偶数,右指针指向奇数
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
		++left;                                         
		--right;
	}
}
int main()
{
	int arr[] = {1,3,2,66,8,9,814,7,46 };
	int size = sizeof(arr) /sizeof(arr[0]);
	sort(arr, size);
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}