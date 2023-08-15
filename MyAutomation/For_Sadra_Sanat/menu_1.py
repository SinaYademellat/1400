# importing necessary libraries

from functools import partial
from tkinter import *
import bdb
from email.mime import image
import tkinter as tk
from tkinter import ttk
from tkinter import filedialog as fd
from tkinter.messagebox import RETRY, showinfo , showerror
import os


def select_file()->None:
    filetypes = (
         ('All files', '*.*'),
        ('text files', '*.txt'),
        ('pdf files', '*.pdf')
    )
    
    filename = fd.askopenfilename(
        title='Open a file',
        initialdir='\\',
        filetypes=filetypes)

    if (len(filename)==0):
        print("NOP")
        return 0 

    else: 
        print("filename: ",filename)
        filename2 = filename.replace('/',"\\")
        filename2 +='\"'
        filename3 = '\"'
        filename3 += filename2
        # print("filename2: ",filename)
        global destination

        print("filename3: ",filename3)
        d_as_d = '\"\\\\Desktop-15kvl7q\ssde'
        d_as_d += '\"'
        print('D: ',d_as_d)
        os.system("copy {f} {D}".format(f = filename3, D= d_as_d) )
            
        showinfo(
            title='فایل ارسال شد =)',
            message="فایل --> "+filename + "ارسال شد"
        )


def select_Folder_()->None:
    Folder_name = fd.askdirectory()

    if(len(Folder_name)==0):
        return 0
    
    else:
        print("Folder_name: ",Folder_name)
        Folder_name2 = Folder_name.replace('/',"\\")

        global destination

        print("filename2: ",Folder_name2)
        os.system("xcopy  {f} {D} /E".format(f = Folder_name2, D= destination) )

        showinfo(
            title='.پوشه ارسال شد =)',
            message="پوشه-->"+Folder_name2 +" ارسال شد "
        )


# ------------------------- functions -----------------------

    # Btn 1
def share_file_button_fun()->None:
    
    global current_table
    
    if (current_table.get() == 'فولدر') :
        select_Folder_()

    else :  # ========= << فایل >> ========= 
        select_file()


    # Btn 2
def open_destination_folder()->None:
    global destination
    os.system("start {D} .".format(D= destination))



    # Btn 3
def massage_button_fun()->None:
    top = Toplevel()
    top.title('پیام رسان ')
               
    top.geometry('530x350+300+300')
    top.configure(background = "#EEE0C9" ) 

    text = tk.Text(top,font=(3) ,height = 8 , width=40 )
    text.tag_configure('tag-right', justify='right')
    scroll = tk.Scrollbar(top)
    text.configure(yscrollcommand=scroll.set)
    text.pack(side=tk.LEFT)
    
    scroll.config(command=text.yview)
    scroll.pack(side=tk.RIGHT, fill=tk.Y)

def check_the_Network_Button_fun(e_of_ping:Entry):
        #! ~~~~~~~~~~~~~~ Doc ~~~~~~~~~~~~~~ 
    """     << Pass Arguments to Tkinter Button Command?  >>

                ------------------------
       
        1)Using the lambda function:
                        Ex) command=lambda: func("See this worked!")
          
                ------------------------

        2)Using partial
                        Ex) from functools "import" partial
                        >> command=partial(function_name, "Thanks, Geeks for Geeks !!!")


    """
    
    # print(e_of_ping.get())
    hostname  = e_of_ping.get()
    response = os.system("ping -c 1 " + hostname)
    
    if response == 0:
      print(f"{hostname} is up!")
      showinfo(
                title='برسی شبکه',
                message="پینگ داشتیم "
            )

    else:
      print(f"{hostname} is down!")
      showerror(
                title='برسی شبکه',
                message="پینگ نداشتیم "
            )
    
    
    #Btn 4 
def check_the_Network_fun()->None:
    top = Toplevel()
    top.title('sina')
    top.geometry('230x130+330+330')
    top.configure(background = "Teal" )

    tk.Label(top,font=20, text="Ipv4").place(x=10, y=40)
    e1 = tk.Entry(top ,font=(40) ,width = 15 ,bd=2)
    e1.place(x = 54, y = 40)
    
    # tk.Label(top,bg= 'Teal',font=40, text = "" ,height = 1).place(x = 150, y=80)


    bt1_e1 = tk.Button(top,font=(40) ,text='برسی',width = 10 , height=1 , command = partial(check_the_Network_Button_fun ,e1) )
    bt1_e1.place(x = 10, y = 80)

    


# ------------------------- Main -----------------------

if __name__=="__main__":

    destination = "\\\\192.168.88.235"   # path of shared memory

    root = tk.Tk()      # create the root window
    root.title('منوی اصلی')
    root.resizable(False, False)
    root.geometry('300x180')
    root.configure(background = "Cyan" ) 


    # ----------------- __int__ -----------------------
            # ~~~~~~~~~~~~~~  Button ~~~~~~~~~~~~~~

    share_file_button = tk.Button(root, 
                    bg='#000000',
                    fg='white',
                    # relief='flat',
                    text = 'اشتراک گذاری' ,
                    command = share_file_button_fun,
                    font   = (40),
                    width  = 20,
                    height = 1
                    ).grid(row = 0 , column = 0 )

    open_destination_folder_button = tk.Button(
                    root, bg='#000000',fg='white',text='برسی',
                    command = open_destination_folder,
                    font   = (40),width  = 20,height = 1
                    ).grid(row = 1 , column = 0 )

    massage_button = tk.Button(
                    root, bg='#000000',fg='white',text='پیام رسان',
                    command = massage_button_fun,
                    font   = (40),width  = 20,height = 1
                    ).grid(row = 2 , column = 0 )

    check_the_Network = tk.Button(
                    root, bg='#000000',fg='white',text='برسی شبکه',
                    command = check_the_Network_fun,
                    font   = (40),width  = 20,height = 1
                    ).grid(row = 3 , column = 0 )


              # ~~~~~~~~~~~~~~  Combobox ~~~~~~~~~~~~~~
    
    current_table  = tk.StringVar()
    monthchoosen = ttk.Combobox(root, width = 6, textvariable = current_table)   #  Combobox creation

    # Adding combobox drop down list
    monthchoosen['values'] = ('فایل', 'فولدر')

    monthchoosen.grid(row = 0, column = 1)
    monthchoosen.current()


    # ----------------- mainloop -----------------------
    root.mainloop()


