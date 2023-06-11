class Solution:
    #1318. Minimum Flips to Make a OR b Equal c

    #Given 3 numbers a, b, and c, return minimum bit flips to make a OR b == c
    def minFlips(self, a: int, b: int, c: int) -> int:
        flips = 0
        while a > 0 or b > 0 or c > 0:
            #Getting last bit of each number
            bitA = a & 1
            bitB = b & 1
            bitC = c & 1

            #If c-bit is 0, increment flips by bitA + bitB
            #else increment flips if both a and b equal 0
            if bitC == 0:
                flips += (bitA + bitB)
            else:
                if bitA == 0 and bitB == 0:
                    flips += 1
            #shift bits of all three numbers by 1
            a >>= 1
            b >>= 1
            c >>= 1
        return flips