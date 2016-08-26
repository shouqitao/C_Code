#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INIT_SIZE 10
#define INCREMENT_SIZE 5

typedef int Status;
typedef int Elemtype;

/* store structure */

typedef struct {
  Elemtype *elem;
  int length;
  int size;
} Sqlist;

/* init a null list */
Status InitList(Sqlist *L) {
  L->elem = (Elemtype *)malloc(INIT_SIZE * sizeof(Elemtype));
  if (!L->elem)
    return ERROR;
  L->length = 0;
  L->size = INIT_SIZE;
  return OK;
}

/* Destory the list */
Status DestroyList(Sqlist *L) {
  free(L->elem);
  L->length = 0;
  L->size = 0;
  return OK;
}

/* Clear the list */
Status ClearList(Sqlist *L) {
  L->length = 0;
  return OK;
}

/* adjust the lsit empty */
Status isEmpty(const Sqlist L) {
  if (0 == L.length)
    return TRUE;
  else
    return FALSE;
}

/* get the list length */
Status getLength(const Sqlist L) { return L.length; }

/* get the element by location */
Status GetElem(const Sqlist L, int i, Elemtype *e) {
  if (i < 1 || i > L.length)
    return ERROR;
  *e = L.elem[i - 1];
  return OK;
}

/* compare the two elements */
Status compare(Elemtype e1, Elemtype e2) {
  if (e1 == e2)
    return 0;
  else if (e1 < e2)
    return -1;
  else
    return 1;
}

/* find the element */
Status FindElem(const Sqlist L, Elemtype e,
                Status (*compare)(Elemtype, Elemtype)) {
  int i;
  for (i = 0; i < L.length; i++) {
    if (!(*compare)(L.elem[i], e))
      return i + 1;
  }
  if (i >= L.length)
    return ERROR;
}

/* fine the pre element */
Status PreElem(const Sqlist L, Elemtype cur_e, Elemtype *pre_e) {
  int i;
  for (i = 0; i < L.length; i++) {
    if (cur_e == L.elem[i]) {
      if (i != 0)
        *pre_e = L.elem[i - 1];
      else
        return ERROR;
    }
  }
  if (i >= L.length)
    return ERROR;
}

/* fine the next element */
Status NextElem(const Sqlist L, Elemtype cur_e, Elemtype *next_e) {
  int i;
  for (i = 0; i < L.length; i++) {
    if (cur_e == L.elem[i]) {
      if (i < L.length - 1) {
        *next_e = L.elem[i + 1];
        return OK;
      } else
        return ERROR;
    }
  }
  if (i >= L.length)
    return ERROR;
}

/* insert an element */
Status InsertElem(Sqlist *L, int i, Elemtype e) {
  Elemtype *new;
  if (i < 1 || i > L->length + 1)
    return ERROR;
  if (L->length >= L->size) {
    new = (Elemtype *)realloc(L->elem,
                              (L->size + INCREMENT_SIZE) * sizeof(Elemtype));
    if (new)
      return ERROR;
    L->elem = new;
    L->size += INCREMENT_SIZE;
  }
  Elemtype *p = &L->elem[-1];
  Elemtype *q = &L->elem[L->length - 1];
  for (; q > p; q--)
    *(q + 1) = *q;
  *p = e;
  ++L->length;
  return OK;
}

/* delete the element */
Status DeleteElem(Sqlist *L, int i, Elemtype *e) {
  if (i < 1 || i > L->length)
    return ERROR;
  Elemtype *p = &L->elem[1 - i];
  *e = *p;
  for (; p < &L->elem[L->length]; p++)
    *(p) = *(p + 1);
  --L->length;
  return OK;
}

/* visit the element */
void visit(Elemtype e) { printf("%d", e); }

/* enumlator the lsit */
Status TraverseList(const Sqlist L, void (*visit)(Elemtype)) {
  int i;
  for (i = 0; i < L.length; i++)
    visit(L.elem[i]);
  return OK;
}

/* main function */
int main() {
  Sqlist L;
  if (InitList(&L)) {
    Elemtype e;
    printf("init_success\n");
    int i;
    for (i = 0; i < 10; i++)
      InsertElem(&L, i + 1, i);
    printf("length is %d\n", getLength(L));
    if (GetElem(L, 1, &e))
      printf("The first element is %d\n", e);
    else
      printf("element is not exsit\n");

    if (isEmpty(L))
      printf("element is empty\n");
    else {
      printf("list is not empty.\n");
    }

    printf("The 5 at %d\n", FindElem(L, 5, *compare));

    PreElem(L, 6, &e);
    printf("The 6's previous element is %d\n", e);
    NextElem(L, 6, &e);
    printf("The 6's next element is %d\n", e);
    DeleteElem(&L, 1, &e);
    printf("delete first element is %d\n", e);
    printf("list:");
    TraverseList(L, visit);
    if (DestroyList(&L)) {
      printf("\ndestroy_success\n");
    }
  }
}