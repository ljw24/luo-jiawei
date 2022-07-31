import numpy as np

arr = [1,-2,3,5,-2,6,-1]

def rec_opt(arr, i):
    if i == 0:
        return arr[0]
    else:
        A = arr[i] + max(rec_opt(arr,i-1), 0)
        return A

if __name__ == "__main__":
    x = rec_opt(arr, 6)
    print(x)
