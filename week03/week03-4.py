# week03-4.py
# 學習計畫第3題 大海撈針 在haystack 裡找needle
# LeetCode 28.Find the Index of the First Occurrence in a  String
#在 Python 只要一行 a.find(b) 在字串a裡找到字串b
class Solution:
    def strStr(self, a: str, b: str) -> int:
        return a.find(b)