if __name__ == '__main__':
    N = int(input())
    my_list = []
    for i in range(N):
        command = input().split()
        cmd = command[0]
        
        if cmd == "insert":
            pos = int(command[1])
            value = int(command[2])
            my_list.insert(pos, value)
        elif cmd == "print":
            print(my_list)
        elif cmd == "append":
            val = int(command[1])
            my_list.append(val)
        elif cmd == "sort":
            my_list.sort()
        elif cmd == "pop":
            my_list.pop()
        elif cmd == "reverse":
            my_list.reverse()
        elif cmd == "remove":
            val = int(command[1])
            my_list.remove(val)
