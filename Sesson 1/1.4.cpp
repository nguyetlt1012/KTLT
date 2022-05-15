int counteven(int a[], int n)
{
    int even = 0;

    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0){
            even++;
        }
    }
    return even;
}
