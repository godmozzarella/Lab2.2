#ifndef _LIST_H
#define _LIST_H

typedef struct 
{
	int number;
	char name[80];
	struct List* next;
}List;

//typedef struct listitem* List;

List* initlist(int a, char* str); /* ������������� ������ ������ ���������� */
void putslist(List* Head);
List* additem(List* Head, int a, char* str);
List* insertfront_int(List* a, int val); /* ������� � ������ ����� ����� �� ��������� ���� number=val */
List* insertback_int(List* a, int val); /* ������� � ������ ����� ����� �� ��������� ���� number=val */
List* insertfront_str(List* a, char* str); /* ������� � ������ ����� ����� �� ��������� str � ���� name */
List* insertback_str(List* a, char* str); /* ������� � ������ ����� ����� �� ��������� str � ���� name */
int isempty(List* a);/* ���������, �������� �� ������ ������*/
int length(List* a); /* ����������� ����� ������ */
List* destroyitem(List* a, List* node); /* �������� ��������� ���� node �� ������ */
List* getitem_int(List* a, int n); /* ���������� ���� �� ��������� n � ���� number*/
List* getitem_str(List* a, char* str); /* ���������� ���� �� ��������� str � ���� name*/
#endif /* _LIST_H */

