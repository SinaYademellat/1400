##############################
#                            #
#       sina yademellat      #
#         9813027346         #
#           HW_1             #
#                            #                                               
##############################

#Please write a program that implements a lexical analyzer for the detection of identifiers. ID regular expression is:
#IDreg = (letter+_)(letter+digit+_)*

#Extra ==> [NUM , xx ]

class Hw_1:
      
    def __init__(self) :
        self.input_str="test"
        
    def set_(self,input_):
        self.input_str = input_

    #as q0 
    #can return ->  [-1,1]
    def firstchar(self):
      
        firstCharacter=self.input_str[0]
        
        if(firstCharacter>='0'and firstCharacter<='9'):
            return 0 #Number or Error

        elif(firstCharacter == '_' or (firstCharacter>='a' and firstCharacter<='z') or (firstCharacter>='A' and firstCharacter<='Z') ): # or use isalpha() :)
            return 1 #ID or Erro 
      
        else:
            # Erro :(
            return -1     # not {ID,Number} :)

    ###################################### 
    #    type:                           #
    #           0 --> Number or Error    #
    #           1 --> ID or Erro         #
    ######################################

    def isType_0(self,index_):
            
            Else_Character=self.input_str[index_]
            if(Else_Character>='0'and Else_Character<='9'):
               return True
            else:
                return False
            
    
    def isType_1(self,index_):
        
        Else_Character=self.input_str[index_]        
        if( Else_Character == '_' or (Else_Character>='a' and Else_Character<='z') or (Else_Character>='A' and Else_Character<='Z') or (Else_Character>='0'and Else_Character<='9') ):
            return True
        else:
            return False
                    
    #T --> print 
    #F --> EXIT()
    def elsechar(self,type_):
       if (type_==0):
           for i in range(1,len(self.input_str)):
               if(not self.isType_0(i)):
                   print(":(  Number Error << {X} >> ):".format(X=self.input_str))
                   return False
           
           return True

       elif (type_==1):    #Type 1
           for i in range(1,len(self.input_str)):
               if(not self.isType_1(i)):
                   print(":(  ^ ID ^ Error << {X} >> ):".format(X=self.input_str))
                   return False
           
           return True
       
       else: 
           return False

        
    def RUN(self,input__):
        self.set_(input__)
        if len(self.input_str)>=1: 
            t=self.firstchar()          # as q0 
            if(self.elsechar(t)):       # as q1 or qf
                if(t ==0 ):
                    print("[ NUM , {Value} ]".format(Value=self.input_str))
                else:
                    print("[ ID , {Value} ]".format(Value=self.input_str))

            else: 
                print("Just ID and Number :( {Value} !!? ):".format(Value=self.input_str))
                
        else:
            print("input =>  NULL :/")
    
if __name__=="__main__":
    
    test_=Hw_1()
    
    A="sina_yademellat 9813027346 HW1 234 b_ali a12  az 3" 
    array_=A.split()
    
    for testcase in array_:
        test_.RUN(testcase)
   
  
