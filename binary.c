def BinSearch(list,list_length,num):
 if(list_length>0):
  start=0;
  end=list_length-1;  
  mid=int((start+end)/2);
  while(start<end):
   mid=int((start+end)/2);
   if(num<list[mid]):
    end=mid-1;
   else:
    start=mid+1;
  mid=int((start+end)/2);   
  if(num>list[mid]):
   list.insert(mid+1,num);      
  else: 
   list.insert(mid,num);
  return 1;
 elif(list_length==0):
  list.append(num);
  return 1;
n=input();
List=[];
List_Length=0;
for itr in n:
 num=int(itr);
 if(BinSearch(List,List_Length,num)==1):
  List_Length+=1;
Del=input("K Value:");
Del=int(Del);
List_Length-=Del;
Ans="";
for itr in range(0,List_Length):
 Ans+=str(List[itr]);
print(Ans);
