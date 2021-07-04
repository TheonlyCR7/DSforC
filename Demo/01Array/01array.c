#include <stdio.h>
// 顺序表常用方法实现
#define SIZE 10
#define LENGTH 15

int array[];
void initArray();  // 默认初始化
void initArray(int size); // 自定义长度初始化
int addLast(int number); // 在数组末尾添加元素
int addByIndex(int index, int number); // 根据索引添加元素
int deleteLast(); // 删除末尾元素, 返回1则删除成功, 返回0则失败
int deleteByIndex(int index); // 删除索引元素, 并返回删除的元素
int deleteByEle(int number); // 删除所给的元素, 返回1则删除成功, 返回0则失败
int insertEle(int number); // 在数组末尾插入元素, 返回1则删除成功, 返回0则失败
int insertByIndex(int index, int number); // 在指定位置插入元素, 返回1则插入成功, 返回0则失败
int getLastNumber(); // 获取末尾元素
int getFirstNumber(); // 获取首位元素
int getIndex(int number, int index); // 获取所给元素的索引位置, 赋值给index, index通过指针传入, 返回1则成功找到, 返回0则没有找到
int getNumber(int index, int number); // 通过索引获取元素, 赋值给number, number通过指针传入, 返回1则成功找到, 返回0则没有找到
void restartArray(); // 判断数组容量是否不够(size*1.5 >= length) 若不够, 则扩容到原来的1.5倍

void main(){

}

void initArray(int number){
    
}

void initArray(){

}
