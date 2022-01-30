
from tkinter import *
from turtle import down 

root = Tk()
root.title("منو اصلی")
root.geometry("140x100")  
root.configure(background='#E5CCFF')


frame = Frame(root)
frame.pack()  

  
btn1 = Button(frame, text="1", fg="red",activebackground = "red")  
btn1.pack()  
 

if __name__ == '__main__' :
    # frame.pack(expand=True)
    
    root.mainloop()