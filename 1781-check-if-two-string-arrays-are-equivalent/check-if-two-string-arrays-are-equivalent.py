class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        result = "".join(word1)=="".join(word2)
        return result