#394. Decode String
#Link:-https://leetcode.com/problems/decode-string/description/

class Solution:
    def decodeString(self, s: str) -> str:

        stack=[]

        currN=0
        currS=""

        for c in s:

            if c=='[':

                stack.append(currS)
                stack.append(currN)
                currN=0
                currS=""
            
            elif c==']':

                prevN=stack.pop()
                prevS=stack.pop()

                currS=prevS+currS*prevN
            
            elif c.isdigit():

                currN=currN*10+int(c)
            
            else:

                currS+=c
        
        return currS