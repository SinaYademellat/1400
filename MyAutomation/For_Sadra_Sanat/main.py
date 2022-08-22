import bdb
from email.mime import image
import tkinter as tk
from tkinter import ttk
from tkinter import filedialog as fd
from tkinter.messagebox import RETRY, showinfo
import os


def select_file():
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


        global destination

        print("filename2: ",filename2)
        os.system("copy {f} {D}".format(f = filename2, D= destination) )
            
        showinfo(
            title='فایل ارسال شد =)',
            message="فایل --> "+filename + "ارسال شد"
        )



def select_Folder_():
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


def open_destination_folder():
    
    global destination
    os.system("start {D} .".format(D= destination))
    

if __name__=="__main__":

    # source --Copy-->  destination   
  
    destination = "B"

    

    # create the root window
    root = tk.Tk()
    root.title('Sadra Sanat :)')
    root.resizable(False, False)
    root.geometry('300x150')
    root.configure(background = "black" )



    open_button = tk.Button(root, 
                    bg='#000000',
                    fg='white',
                    # relief='flat',
                   
                    text='فایل را انتخاب کنید',
                    command = select_file,
                    
                    font=(30),
                    width=20,
                    height=1
                   
                    )
   
 

    open_button_for_Folder = tk.Button(root, 
                    bg='#000000',
                    fg='white',
                    # relief='flat',
                    text='پوشه را انتخاب کنید',
                    command = select_Folder_,
                   
                    font=(30),
                    width=20,
                    height=1
                   )
    
  

    button_for_open_spurce = tk.Button(root, 
                    bg='#000000',
                    fg='white',
                    # relief='flat',
                    text='باز کردن فایل مشترک',
                    command = open_destination_folder,
                    
                    font=(30),
                    width=20,
                    height=1
                   
                   )
   
   
    open_button.pack()
    open_button_for_Folder.pack()
    button_for_open_spurce.pack()

    root.mainloop()
