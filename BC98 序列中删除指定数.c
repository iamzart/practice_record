#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int n = 0, m = 0, i = 0;
//	int count = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		//ѭ����������
//	}
//	scanf("%d", &m);
//	if(arr[i] != m)
//	{
//		for (i = 0; i < n - 1; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	//while (arr[i] != m)
//	//{
//	//	printf("%d ", arr[i]);
//	//	count++;
//	//	if (count == n - 1)
//	//		break;
//	//}//������while���У���һֱ��ӡ��������ͣ����
//	return 0;
//}
//�ҷ��Ĵ����� if����д��while��������д���Ǹ�ʱ����ѭ����ӡ���飬��while�������ѭ�������Ի���ѭ������������һ��Ԫ�ػ�����m���ͻ�һֱ����}

//��������д�ģ���������ֻ�ǲ���ӡ���Ǹ�Ҫɾ����Ԫ�أ��ɲ�û��������ɾȥ��

int main()
{
    int n = 0, m = 0, i = 0;
    int arr[50] = { 0 };
    scanf("%d", &n);
    //ѭ����������
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //����Ҫɾ������
    scanf("%d", &m);
    //ȥ�ı�����
    for (i = 0; i < n; i++)
    {
        if (arr[i] == m)
            break;
    }//��ʱ����ѭ����iΪҪɾ����Ԫ�ص��±�
    //�Ѻ�ߵ�ֵ����������arr[i]��ʼ
    while (i < n - 1)
    {
        //��ʱarr[i]��Ҫɾ����Ԫ��
        arr[i] = arr[i + 1];
        i++;
        //������һ��Ԫ�ظ�����  
    }
    //��ʱ�����Ѿ����ı��ˣ�������Ϊ��n-1�����Ҫ��ӡ
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}