def binary_search_present(a, seek):
    first = 0
    last = len(a) - 1
    while first <= last:
        mid = (first + last) // 2        # // is integer division
        if a[mid] == seek:
            return True
        elif a[mid] > seek:
            last = mid - 1               # answer is in the left half
        else:
            first = mid + 1              # answer is in the right half
    return False

def main():
    n, k = map(int, input().split())     # read n and k from one line
    a = list(map(int, input().split()))  # read the whole array in one line
    queries = list(map(int, input().split()))
    for seek in queries:
        print("YES" if binary_search_present(a, seek) else "NO")

main()