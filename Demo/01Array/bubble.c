#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define length 10

void QuickSort(int array[], int low, int high);
void swap(int *array, int a, int b);
void printer(int array[], int temp);
void mergeSort(int[] arr, int l, int r);

int main()
{
	int a[length];
	int mid;
    srand(time(0)); //根据当前系统日期产生随机数
    // 生成随机数数组
    for(int k = 0; k < length; k ++){
        int num=rand()%100; // 产生在0-100的随机数
        a[k] = num;
    }
    printf("初始数组为: ");
    for (int i = 0; i < length; i++)
		printf("%d, ", a[i]);
    printf("\n");
    
    // 进行快速排序
    QuickSort(a, 0, length-1);

	printf("\n排序结果为: ");  //输出排序后的结果
	for (int i = 0; i < length; i++)
		printf("%d, ", a[i]);
}

void mergeSort(int[] arr, int l, int r){ 
        if(l >= r) return; 
        
        int mid = l + r >> 1; 
        mergeSort(arr, l, mid); 
        mergeSort(arr, mid+1, r); 
        
        //归并:使用到额外的数组tmp[] 
        int i = l; 
        int j = mid+1; 
        int k = 0;
        
        while(i<=mid && j <=r){ 
            if(arr[i] >= arr[j]) tmp[k++] = arr[j++]; 
            else tmp[k++] = arr[i++]; 
        }
        
        while(i<=mid) tmp[k++] = arr[i++]; 
        while(j<=r) tmp[k++] = arr[j++]; 
        
        //复制回去 
        for(int p = 0, q =l; q <= r; p++, q++) 
            arr[q] = tmp[p]; 
        
}

// void QuickSort(int array[], int low, int high) {
//     int i = low; 
//     int j = high;
//     if(i >= j) { // 当元素分组只有一个元素时, 该元素分组排序完成, 递归返回
//         return;
//     }
 
//     int temp = array[high];  // 设置基准元素为最右侧的元素
//     printf("temp=%d", temp);
//     while(i >= j) { // 当指针i j相遇 停止移动
//         while(array[j] <= temp && i < j) {
//             j--;
//         }
// 	    while(array[i] >= temp && i < j) {
//             i++;
//         }
// 	    if(i <= j) {  // 相等则不交换
//             printf("交换元素: %d, %d", array[i], array[j]);
//             swap(array, i, j);
//         }
//     }
//     printer(array, high);

//     swap(array, high, j); // 将基准temp放于自己的位置（第i个位置）
//     QuickSort(array, low, i-1);
//     QuickSort(array, i+1, high);
// }

void swap(int *array, int a, int b){
    int mid = array[a];
    array[a] = array[b];
    array[b] = mid;
}

void printer(int array[], int temp){
    printf("数组此时为: ");
    for(int i = 0; i < length; i ++){
        if(array[i] == temp){
            printf("[%d], ", array[i]);
            continue;
        }
        printf("%d, ", array[i]);
    }
    printf("temp=%d", temp);
    printf("\n");
}

