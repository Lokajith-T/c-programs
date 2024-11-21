int hammingWeight(int n) {
        int count=0;
        int i,bit;
        for(i=0;i<32;i++)
        {
            bit=(n>>i&1);
            if(bit==1) count++;
        }
        return count;
    }
