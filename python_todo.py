l=[]
def addtask():
    x=str(input("Enter the task->"))
    l.append(x)

def showtasks():
    for i in l:
        print(i)

def removetask():
    l.pop()

def main():
    while True:
        print("<==== Main Menu ====>")
        print("1. Add task")
        print("2. Show all tasts")
        print("3. Reomve Task")
        print("4. Exit")
        n=int(input("Enter your choice->"))
        if n==1: addtask()
        elif n==2: showtasks()
        elif n==3: removetask()
        elif n==4: print("Program Ended"); break
        else: print("Invalid input")

if __name__ == "__main__":
    main()