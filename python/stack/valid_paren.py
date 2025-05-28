def  valid_paren(nums:str) -> bool:
    params = { 
              "}" : "{",
              "]" : "[",
              ")" : "("
              }
    temp = []
    for p in nums:
        if p not in params:
            temp.append(p)
        else:
            if temp != [] and temp.pop() == params[p]:
                continue
            else:
               return False

    return [] == temp

if __name__ == "__main__":
    print(valid_paren("{"))

