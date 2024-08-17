if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    max_el = max(arr)
    arr = sorted(arr)
    
    index = arr.index(max_el)
    i = index -1
    while(True):
        if not index ==0 :
           
            if arr[i] < max_el:
                print(arr[i])
                break
            else:
                i+=1
