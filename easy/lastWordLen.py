class Solution:
        #58. Length of Last Word

        #Given a string s, return the length of the last word in the string
        #Strips trailing whitespace from the string, finds last word using last space, and returns length
    def lengthOfLastWord(self, s: str) -> int:
        stripped = s.rstrip()
        word = stripped[stripped.rfind(' ') + 1:]
        return len(word)
