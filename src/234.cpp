class Solution {
public:
    bool isPalindrome(ListNode* head) {
		if(head == NULL || head->next == NULL)
			return true;

        ListNode *slow = head;
		ListNode *fast = head;
		ListNode *p = head;
		stack <int> preHalf;
		preHalf.push(head->val);
		while(fast->next != NULL)
		{
			slow = slow->next;
			if(fast->next != NULL)
			{
				fast = fast->next;
				if(fast->next != NULL)
					fast = fast->next;
			}
            // 存了前面一半的数据
			preHalf.push(slow->val);
		}

		while(!preHalf.empty())
		{
			int temp = preHalf.top();
			if(slow->next != NULL && temp == slow->next->val)
			{
				preHalf.pop();
				slow = slow->next;
			}
			else 
			{
				return false;
			}
		}
		return true;
    }
};