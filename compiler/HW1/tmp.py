class Hw_1:
  
    def __init__(self) :
        self.input_str="NULL"
        self.out_=""

    def firstchar(self):
        if(not( (self.input_str[0]>='a' and self.input_str[0]<='z') or self.input_str[0]=='_' ) ):
            return False
        else:
            self.out_+=self.input_str[0]

    def Not_firstchar(self,INDEX_):
        if(not( (self.input_str[INDEX_]>='a' or self.input_str[INDEX_]<='z') or((self.input_str[INDEX_]>='0' and self.input_str[INDEX_]<='9')) or self.input_str[INDEX_]=='_' ) ):
            return False
        else:
            self.out_+=self.input_str[INDEX_]
            return True
    
    def RUN(self):
        Error_mas="NOT valid :("
        if(not self.firstchar()):
            print(Error_mas)
            return Error_mas

        for i in range(1,len(self.input_str)):
           if(not self.Not_firstcharfirstchar(i)):
                print(Error_mas)
                return Error_mas
        
        return self.out_

p1=Hw_1()
print(p1.RUN())
