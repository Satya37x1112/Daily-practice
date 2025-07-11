from tkinter import*
root=Tk()
root.geometry("1200x900")
frame=Frame(root,borderwidth=6,bg="grey",relief=SUNKEN)
frame.pack(side=TOP,anchor="nw")
def hello():
    print("hello world")
b1=Button(frame,fg="red",text="print now",font="Arial 19 bold",command=hello)
b1.pack()

root.mainloop()