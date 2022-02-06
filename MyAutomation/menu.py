##############################
#                            #
#       sina yademellat      #
#                            #
#         MENU.PY            #
#                            #                                               
##############################

from tkinter import *

root = Tk()
root.title("منو اصلی")
root.geometry("540x540")  

frame = Frame(root)
frame.pack()  

################################################################################################
    #<< 1 >> 
def Fbtn1():
    global root
    root.destroy()
    print("start -->Fbtn1")
    import glue
    glue.runandmakeGluepdf()
    print("end of -->Fbtn1")


############################################################
  
btn1 = Button(frame, width=20,height=3,font=(30),text="چسب", fg="black",bg="#9933FF",activebackground = "red",command=Fbtn1)  
btn1.pack()  


if __name__ == '__main__' :
    root.mainloop()
    
