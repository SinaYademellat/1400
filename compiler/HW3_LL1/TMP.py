##############################
#                            #
#       sina yademellat      #
#         9813027346         #
#           HW_3             #
#                            #                                               
##############################

import os  
from tkinter import *
import tkinter as tk
from tkinter import ttk

def check_the_existence_of_the_file(path):
    if(os.path.isfile(path)):
        return True
    else:
        print("File does not exist.\npath:{p}".format(p=path))
        return False
GUII=[]
def for_stack(S):
    res=""
    for i in S:
        res+=(i)
        res+='~'
    return res
def for_stack2(S):
    res=""
    for i in S:
        res+=(i)
        res+=' '
    return res

fooo=[]

def HW3(productions_,terminali_,variablei_,start_symbol,INS):
    
    user_input =INS.split()

    #user_input ="id + num ".split()
    #user_input ="id + num * id + num * id  ".split()
    #user_input =input("W: ").split()
    user_input.append("$") 
    stack = []
    #stack.append("$")
    stack.append(start_symbol)
    input_len = len(user_input)
    index = 0
    Number_=0
    while (len(stack) > 0):
        top = stack[len(stack) - 1]
        current_input = user_input[index]
        Number_+=1
        print("\n\t<<{N}>>".format(N=Number_))
        print("X : ", top)
        print("a : ", current_input)
        tmp_gui=(top+' ')
        tmp_gui+=(current_input+' ')

        #(top in terminali_) or 
        if( (top == current_input) ):
            if (top=="$"):
                tmp_gui+="Accept "
                tmp_gui_tmp=(for_stack(stack))
                fooo.append(for_stack2(stack))
                tmp_gui+=tmp_gui_tmp
                GUII.append(tmp_gui)
                return True
                #break
            else:
                tmp_gui+="match "
                tmp_gui_tmp=(for_stack(stack))
                fooo.append(for_stack2(stack))
                tmp_gui+=tmp_gui_tmp
                GUII.append(tmp_gui)
                stack.pop()
                index = index + 1
        else:
            tmp_key= (top+' '+current_input)
            #print("tmp_key: ",tmp_key)
            if tmp_key in productions_.keys():
                print("Rul : ",productions_[tmp_key])
                print("stack : ",stack)

                tmp_gui+=(productions_[tmp_key]+' ')
                #tmp_gui+=(str(stack)+' ')
                #print("GIIII-> ",for_stack(stack))
                tmp_gui_tmp=(for_stack(stack))
                fooo.append(for_stack2(stack))
                print("GIIII-> ",str(tmp_gui_tmp))
                tmp_gui+=tmp_gui_tmp
                print("tmp_gui-> ",(tmp_gui))
                
                GUII.append(tmp_gui)

                valList=productions_[tmp_key].split("->")
                if(len(valList)==1):
                    val=valList[0]
                else:
                    val=valList[1]               
                
                if val=="Error":
                    print("@@ERROR")
                    return False
                    #break
                elif val=="nil":

                    stack.pop()
                    continue
                else:
                    #1==2
                    stack.pop()
                    tmp_index=len(val)-1
                    while(tmp_index>=0):
                        tmp__str=val[tmp_index]
                        if((tmp__str in terminali_)or (tmp__str in variablei_) ):
                            stack.append(tmp__str)
                            tmp_index-=1
                        else:
                            while( (not ((tmp__str in terminali_)or (tmp__str in variablei_) )) and tmp_index-1>=0):
                                tmp__str=val[tmp_index-1]+tmp__str
                                tmp_index-=1
                            if((tmp__str in terminali_) or (tmp__str in variablei_) ):
                                stack.append(tmp__str)
                                tmp_index-=1
                          
            else:
                print("ERROR@")
                tmp_gui+="ERROR  "
                tmp_gui_tmp=(for_stack(stack))
                fooo.append(for_stack2(stack))
                tmp_gui+=tmp_gui_tmp
                GUII.append(tmp_gui)
                return False
                #break

def GUUIII(input_):
    root = tk.Tk()
    root.title('sina yademellat')
    columnsa = ('top', 'input', 'M[x,a]','Stack')
    tree = ttk.Treeview(root, columns=columnsa, show='headings')
    #tree.config()
    tree.column("# 1", anchor=CENTER)
    tree.column("# 2", anchor=CENTER)
    tree.column("# 3", anchor=CENTER)
    tree.column("# 4", anchor=CENTER)
    tree.heading('top', text='top')
    tree.heading('input', text='input')
    tree.heading('M[x,a]', text='M[x,a]')
    tree.heading('Stack', text='Stack')
    contacts = input_
    for contact in contacts:
        tree.insert('', tk.END, values=contact,tags=('fg', 'bg')) 
    tree.grid(row=0, column=0, sticky='nsew')
    tree.tag_configure('bg', background='#131214')
    tree.tag_configure('fg', foreground='#0cf07e')
    scrollbar = ttk.Scrollbar(root, orient=tk.VERTICAL, command=tree.yview)
    tree.configure(yscroll=scrollbar.set)
    scrollbar.grid(row=0, column=1, sticky='ns')
    root.resizable(width=False, height=False)
    root.mainloop()     

def test_GUII():
    print ("\n~~~~~~~~~~\n")
    for i in GUII:
        print(i)
    print ("\n~~~~~~~~~~\n")

def test_xx():
    for i in XX:
            print(i)
    print ("\n~~~~~~~~~~\n")


def Partone_():
    Partone = Tk()
    Partone.title('sina yademellat :)')
    Partone.configure(background='#19f711')

    
    l1 = Label(Partone, text="input ",font=14)
    l1.pack(side=LEFT)
    e1 = Entry(Partone, bd=2,font=12)
    e1.pack(side=LEFT)

    l2 = Label(Partone, text="Start Symbol",font=2,fg='red')
    l2.pack(side=LEFT)  
    e2 = Entry(Partone, width= 5, bd=2,font=2)
    e2.pack(side=LEFT)
    
    
    def callback():
        global iNeedSleep 
        global iNeedSleep2
        iNeedSleep = str(e1.get())
        iNeedSleep2 =str(e2.get())
        Partone.destroy()


    bottom = Frame(Partone)
    bottom.pack()
    b = Button(bottom, bd=2,text="OK",command=callback,bg='#19f711')
    b.pack()
    Partone.resizable(width=False, height=False)
    Partone.mainloop()




if __name__ == "__main__":
  
    path_="LL1.txt"
         
    while (not check_the_existence_of_the_file(path_) ):
       path_=input("New path: ")
       
    fp=open(path_)
    terminali=fp.readline().split()
    variablei=[]
    productions=dict()
    while True:
        line =fp.readline().split()
        if not line:
           break
        else:
            variablei.append(line[0])
            for i in range(1,len(line)):
                productions[ line[0]+' '+terminali[i-1] ] = line[i]
    fp.close()
  
    iNeedSleep=':('
    iNeedSleep2=':)'
    Partone_()

    print("Sleepzzzz :)-->", iNeedSleep)
    print("Sleepzzzz :)-->", iNeedSleep2)
    
    if(HW3(productions,terminali,variablei,iNeedSleep2,iNeedSleep)):
        print("\n~~~~~~~~~~~~ \n")
        print("(: String accepted :)")
    else:
        print("\n~~~~~~~~~~~~ \n")
        print("): String not accepted :(")
   
    #test_GUII()
   
    XX=[]
    j=0
    for i in GUII:
        XX.append(list(i.split()))
        XX[len(XX)-1].pop()
        XX[len(XX)-1].append(str(fooo[j]))
        j+=1
  
    GUUIII(XX)
    
    # # id + num * id 
