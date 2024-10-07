public class Sortierung {
    public static void mergesort(Integer[] x){
        Integer [] left = new Integer[x.length/2];
        Integer [] right = new Integer[x.length - x.length/2];

        if(x.length <= 1){
            return;
        }
        for(int i = 0;i < x.length/2;i++) {
            left[i] = x[i];
        }

        for(int j = 0;j < x.length/2;j++){
            right[j] = x[j+ x.length/2];
        }
        mergesort(left);
        mergesort(right);

    }
}


