class Hw_1:
  
    def __init__(self) :
        self.input_str="test"
        self.out_=""

    def set_(self,input_):
        self.input_str = input_

    def firstchar(self):
        if(not( (self.input_str[0]>='a' and self.input_str[0]<='z') or self.input_str[0]=='_' ) ):
            return False
        else:
            self.out_+=self.input_str[0]
            return True

    def Not_firstchar(self,INDEX_):
        if(not( (self.input_str[INDEX_]>='a' and self.input_str[INDEX_]<='z') or self.input_str[INDEX_]=='_' or( (self.input_str[INDEX_]>='0' and self.input_str[INDEX_]<='9')) ) ):
            return False
        else:
            self.out_+=self.input_str[INDEX_]
            return True
    
    def RUN(self):
        Error_mas="NOT valid :("
        if(not self.firstchar()):
            print(Error_mas+" str[0] -> ",self.input_str[0])
            exit(-1)
            

        for i in range(1,len(self.input_str)):
           if(not self.Not_firstchar(i)):
                #Error_mas="NOT valid :("
                fun_=" str[{Index}] -> ".format(Index=i+1)
                print(Error_mas +  fun_ + self.input_str[i])
                exit(-1)
                
        
        return self.out_

if __name__=="__main__":
    p1=Hw_1()
    p1.set_("_sina_yad13")
    print(p1.RUN())

