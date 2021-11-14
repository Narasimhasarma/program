string=input()
dic={}
s=""
for i in range(len(string)):
    dic[string[i]]=0
for i in string:
    if i in dic:
        dic[i]=dic[i]+1
for i in dic:
    if dic[i]==1:
        s=s+i
    else:
        s=s+i+str(dic[i])
print(s)
        
