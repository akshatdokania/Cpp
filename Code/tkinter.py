from tkinter import *
from PIL import *

if __name__ == "__main__":
    top = Tk()
    top.title("Puneet Sales")
    top.geometry("1440x855")
    top.resizable(0, 0)
    Label(top, text = 'Tax Invoice').pack(side = TOP, pady = 6)
    pgborder=Frame(top,highlightcolor="white",highlightbackground="black",highlightthickness=1,bd=10,width=1400,height=780).pack()
    Label(top,text="This is a Computer Generated Reciept.").pack(pady=6)
    ownframe=Frame(pgborder,bg="Green",bd=10,width=100,height=100).pack()
    top.mainloop()