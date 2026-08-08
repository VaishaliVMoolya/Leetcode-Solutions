class Solution {
    public boolean isValid(String s) {
        Deque<Character> stack = new ArrayDeque<>();
		boolean balanced = true;
		for(int i=0; i < s.length(); i++) {
			char ch = s.charAt(i);
			if(ch == '(') {
				stack.push(')');
			}
			else if(ch == '[') {
				stack.push(']');
			}
			else if(ch == '{') {
				stack.push('}');
			}
			else {
				if (stack.isEmpty() || stack.peek() != ch) {
				    balanced = false;
				    break;
				}
				else {
					stack.pop();
				}
			}
		}
        return balanced && stack.isEmpty();
    }
}