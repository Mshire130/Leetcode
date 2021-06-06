class Solution {
public:
    ListNode* reverseList(ListNode* head) {
  stack<ListNode*> node_ptrs;
  ListNode* cur = head;
  if (head == nullptr){
    return nullptr;
  } 
  while(cur->next!=nullptr){
    node_ptrs.push(cur);
    cur = cur->next;
  }
  ListNode* oldTail = cur;
  while(node_ptrs.size() != 0){
    cur->next = node_ptrs.top();
    node_ptrs.pop();
    cur = cur->next;
  }
  cur->next = nullptr;
  return oldTail;
}
};
