class Solution {
    public int[] recoverOrder(int[] order, int[] friends) {
        int idx =0;
        for(int i=0; i<order.length; i++){
            for(int j=idx; j<friends.length; j++){
                if(order[i] == friends[j]){
                    int tem = friends[j];
                    friends[j] = friends[idx];
                    friends[idx++] = tem;
                    break;
                }
            }
        }
        return friends;
    }
}