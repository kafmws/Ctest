int generic_list_cnt(void* head, void* next) {
  if (!head) return 0;
  int offset = (char*)next - (char*)head;
  return 1 + generic_list_cnt(*(void**)next, (char*)(*(void**)next) + offset);
}

typedef struct _list {
  int val;
  struct _list* next;
} * List;

#include <string.h> 
int main() {
  List head = &(struct _list){0, &(struct _list){1, &(struct _list){2, NULL}}};
  printf("%d\n", generic_list_cnt(head, &head->next));

  int cnt = 999;
  List hhead = malloc(sizeof *hhead), p = hhead;
  for (int i = 0; i < cnt; i++) {
    p->val = i;
    p->next = malloc(sizeof *p);
    p = p->next;
  }
  p->val = cnt;
  p->next = NULL;

  printf("%d\n", generic_list_cnt(hhead, &hhead->next));
  return 0;
}

