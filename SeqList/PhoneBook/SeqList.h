 #pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Contact.h"

//typedef int SLDataType;

//��ͨѶ¼�ṹ������������ΪSLDataType
typedef PeoInfo SLDataType;

//��̬˳���
//���ṹ��SeqList������ΪSL
typedef struct SeqList
{
	SLDataType* arr;
	int size;
	int capacity;
}SL;

//˳����ĳ�ʼ��
void SLInit(SL* ps);
//˳���������
void SLDestory(SL* ps);
//ͷ����������
void SLPushFront(SL* ps, SLDataType x);
//β����������
void SLPushBack(SL* ps, SLDataType x);
//��ӡ˳���
void SLPrint(SL s);
//ͷ��ɾ������
void SLPopFront(SL* ps);
//β��ɾ������
void SLPopBack(SL* ps);
//����λ��ǰ��������
void SLInsert(SL* ps, int pos, SLDataType x);
//����λ��ɾ������
void SLErase(SL* ps, int pos);
//˳����Ĳ���
int SLFind(SL* ps, SLDataType x);