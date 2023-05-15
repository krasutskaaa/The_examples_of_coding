import datetime
import pickle
from tkinter import*
import random
def password(generation1):
    if field1.get()!='':
        current_date_time = datetime.datetime.now()
        current_time = current_date_time.time()
        union = str(field1.get()) + str(current_time)
        generation = random.choices(union, k=26)
        s1 = ''
        s2 = ''
        
        generation1 = s1.join(generation)
        field2 = s2.join(field1.get())
        s3 = []
        s3.append(field2)
        s4 = []
        s4.append(generation1)
        label['text'] = generation1
        DICT = dict(zip(s3, s4))
        g = open('FileName4.txt', 'w')
        for item in DICT:
            s = str(item)
            s += ': '
            s += DICT.get(item)
            s += '\n'
            g.write(s)
        g.close()
        return generation1
    
window = Tk()
window.title("Welcome to password generator")
window.geometry('400x250')
lbl = Label(window, text='Введіть назву сайту') 
field1 = Entry(window,width=40,bd=23)
button = Button(window,text='Згенерувати пароль')
label = Label()
button.bind("<Button-1>", password)
field1.pack()
button.pack()
label.pack()
window.mainloop()

from tkinter import*
def password1(field2):
    if field1.get() !='':
        with open("FileName4.txt") as file:
           lines = file.read().splitlines()
        dic = {}
        for line in lines:
            key, value = line.split(': ')
            dic.update({key:value})
            s1 = ''
            field2 = s1.join(field1.get())
            for i in dic:
                if field2 == i:                    
                    label['text'] = dic[i]
        file.close()
        return field2
window = Tk()
window.title("Welcome to password giving")
window.geometry('400x250')
field1 = Entry(window,width=40,bd=23)
button = Button(window,text='Видати згенерований пароль')
label = Label()
button.bind("<Button-1>", password1)
field1.pack()
button.pack()
label.pack()
window.mainloop()

