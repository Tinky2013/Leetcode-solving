class Solution:
    def isMonotonic(self, A: List[int]) -> bool:
        if A[0] == A[-1]:
            for i in range(1,len(A)):
                if A[i] != A[i-1]:
                    return False
        elif A[0] > A[-1]:
            for i in range(0,len(A)-1):
                if A[i+1] > A[i]:
                    return False
        elif A[0] < A[-1]:
            for i in range(0,len(A)-1):
                if A[i+1] < A[i]:
                    return False
        return True
