from tkinter import*
root=Tk()
root.geometry("1200x900")
root.title("Mini app")
entry=Entry(root,font=("TimesNewRoman",19,"bold"))
output_label = Label(root, text="",font=("TimesNewRoman",19,"bold"))
output_label.pack()
def hello():
    name=entry.get()
    output_label.config(text="Hello, " + name + "!")
Button(root, text="Click Me", command=hello).pack(padx=10)
entry.pack()
root.mainloop()