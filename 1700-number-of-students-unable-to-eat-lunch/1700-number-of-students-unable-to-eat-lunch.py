class Solution(object):
    def countStudents(self, students, sandwiches):
        """
        :type students: List[int]
        :type sandwiches: List[int]
        :rtype: int
        """
        d = {0:0,1:0}
        for i in students:
            d[i]+=1
        for i in range(len(sandwiches)):
            if(d[sandwiches[i]]==0):
                return len(sandwiches)-i
            d[sandwiches[i]] -= 1
        return 0        
        