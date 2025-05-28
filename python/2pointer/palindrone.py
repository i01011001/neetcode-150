import re

class Solution:
    def printalpha(s: str) -> bool:
        filtered = re.sub('[^a-zA-Z]','',s).lower()
        print(filtered)
        start = 0
        last = len(filtered)-1
        if start+last ==0:
            return False
                
        while start < last :
            if filtered[start] != filtered[last]:
                return False
            start+=1
            last-=1
        return True

if __name__ == "__main__":
    truth = Solution.printalpha("OP")
    print(f"Sentence is palindrone: {truth}")

