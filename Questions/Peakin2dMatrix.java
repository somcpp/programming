class Solution {
    public int  findmax(int [][]mat,int col){
        int max=Integer.MIN_VALUE;
        int idx=-1;
        for(int i=0;i<mat.length;i++){
            if(mat[i][col]>max){
                max=mat[i][col];
                idx=i;
            }
        }
        return idx;
    }
    public int[] findPeakGrid(int[][] mat) {
        int si =0;
        int ei=mat[0].length-1;
        while(si<=ei){
            int mid=(si+ei)/2;
            int row=findmax(mat,mid);
            //col =mid;
            //check for the element to be peak 
            // we know that the elemnt is gretater than the top and bottom 
            //so we have to cehcl for the the left and right 
           int  left = mid+1 <=mat[0].length-1 ? mat[row][mid+1] : -1;
            int right= mid-1 >=0 ? mat[row][mid-1] : -1;
            if(mat[row][mid]>left && mat[row][mid]>right){
                return new int [] {row,mid};
            }
            else if(mat[row][mid]<right){
                ei=mid-1;
            }
            else if(mat[row][mid]<left){
                si=mid+1;
            }
           
        }
        return new int[] {-1,-1};
    }
}