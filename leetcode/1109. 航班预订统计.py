class Solution:
    def corpFlightBookings(self, bookings: List[List[int]], n: int) -> List[int]:
        arr=[0]*(n+2)
        for booking in bookings:
            arr[booking[0]] += booking[2]
            arr[booking[1]+1] -= booking[2]
        for i in range(1, n+1):
            arr[i]+=arr[i-1]
        return arr[1:-1]