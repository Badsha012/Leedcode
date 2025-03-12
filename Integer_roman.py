class Solution:
    def intToRoman(self, num: int) -> str:
        one = ["","I",'II','III','IV','V','VI','VII','VIII','IX']
        ten = ["","X","XX",'XXX','XL','L','LX','LXX','LXXX','XC']
        hun = ["","C",'CC','CCC','CD','D','DC','DCC','DCCC','CM']
        tho = ["","M",'MM','MMM']
        return tho[num//1000] + hun[(num%1000)//100] + ten[(num%100)//10] + one[num%10]