class NumbersInfo{
	
//metod za namirane na nai malkoto
public static int smallest(int[]a, int total){
	int temp;
	for(int i = 0 ; i<total; i++){
	
	if (a[i] > a[j]){

	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
   }
 }
  return a[0]
}  


//Metod za namirane na nai - golqmoto
static int largest(){
	int i;
	int max = arr[0];
	for (i = 1; i < arr.length; i++) 
             if (arr[i] > max) 
                 max = arr[i]; 
        
         return max; 

}





 public static void main(String args[]){
               int a[]={10,3,4,5,6,20}
	System.out.println("Smallest : " +smallest());
	System.out.println("Largest : " + largest());
	double avg = getSmallest() + largest() / 2;
	System.out.println("Average is : " + avg);
}