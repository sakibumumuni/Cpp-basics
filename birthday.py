def main():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    result = []
    i = j = 0

    # Walk both arrays at once. Each step takes the smaller front element.
    while i < n and j < m:
        if a[i] <= b[j]:
            result.append(a[i])
            i += 1
        else:
            result.append(b[j])
            j += 1

    # One array is now exhausted. Append whatever's left in the other.
    # Only one of these two loops actually runs — but both must be here.
    while i < n:
        result.append(a[i])
        i += 1
    while j < m:
        result.append(b[j])
        j += 1

    print(*result)

main()