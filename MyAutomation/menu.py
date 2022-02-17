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
    ro = ["TANK", "CAPECITY", " LEVEL ", "TON", ' SOLID% ','VISCOZITYSEC','GETTHMS','SPG','SOLY.H2O','APPERA']
    co=['T-801','T-802','T-803','T-804','T-805','OC']
    glue.setRowandco(ro,co)
    glue.runandmakeGluepdf("Glue.pdf")
    print("end of -->Fbtn1")

    #<< 2 >> 
def Fbtn2():
    global root
    root.destroy()
    print("start -->Fbtn1")
    import glue
    ro = ["REACTOR", "CAPECITY", "TIMs", "TIMf", "VISOs","GELs","SPG",'SOL','SOLID','COSTOMER']
    co=['A','B','C','D','','']
    glue.setRowandco(ro,co)
    glue.runandmakeGluepdf("sina.pdf")
    print("end of -->Fbtn1")



############################################################
  
btn1 = Button(frame, width=20,height=3,font=(30),text="چسب", fg="black",bg="#9933FF",activebackground = "red",command=Fbtn1)  
btn1.pack()  

  
btn2 = Button(frame, width=20,height=3,font=(30),text="راکتور های واحد", fg="black",bg="#9933FF",activebackground = "red",command=Fbtn2)  
btn2.pack()  


if __name__ == '__main__' :
    root.mainloop()
    
