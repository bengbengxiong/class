#include <stdio.h>
#include <stdlib.h>
int sort(int arr[], int size)
{
	int* left = arr;                                    //����һ����ָ��ָ�������һ��Ԫ��
	int* right = arr+size-1;                            //����һ����ָ��ָ���������һ��Ԫ��
	while (left < right)
	{
		while ((*left % 2 != 0) && (left < right))      //�ж�ָ��ָ���Ԫ���Ƿ�Ϊ����,�������ָ���һ��Ԫ��
		{
			left++;
		}
		while ((*right % 2 == 0) && (left < right))     //�ж���ָ��ָ���Ԫ���Ƿ�Ϊż��,�������ָ��ǰһ��Ԫ��
		{
			right--;
		}
		if (left < right)                               //������ǰ����ָ��ָ���Ԫ��,��ǰ��ָ��ָ��һ��ż��,��ָ��ָ������
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