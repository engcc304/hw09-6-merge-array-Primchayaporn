/*
    ผู้ใช้ทำการกรอกค่าที่ต้องการสร้างอาเรย์(Array1 และ Array2) และให้ทำการผสานอาเรย์ทั้งสองมาเป็นอาเรย์ใหม่(Array3) และแสดงผลลัพธ์หลังจากการผสานกันแสดงผลจากมากไปน้อย
    
    Test case:
        Enter element of Array1 :
            4
        --| Array1 [0] : 
            9
        --| Array1 [1] : 
            7
        --| Array1 [2] : 
            6
        --| Array1 [3] : 
            3
        Enter element of Array2 :
            5
        --| Array2 [0] : 
            2
        --| Array2 [1] : 
            3
        --| Array2 [2] : 
            5
        --| Array2 [3] : 
            8
        --| Array2 [4] : 
            9
    Output:
        Merge Array1 & Array2 to Array3
        Array3 = 9 9 8 7 6 5 3 3 2
    
    Test case:
        Enter element of Array1 :
            8
        --| Array1 [0] : 
            7
        --| Array1 [1] : 
            8
        --| Array1 [2] : 
            9
        --| Array1 [3] : 
            6
        --| Array1 [4] : 
            1
        --| Array1 [5] : 
            2
        --| Array1 [6] : 
            8
        --| Array1 [7] : 
            3
            
        Enter element of Array2 :
            6
        --| Array2 [0] : 
            2
        --| Array2 [1] : 
            1
        --| Array2 [2] : 
            3
        --| Array2 [3] : 
            5
        --| Array2 [4] : 
            3
        --| Array2 [5] : 
            6
    Output:
        Merge Array1 & Array2 to Array3
        Array3 = 9 8 8 7 6 6 5 3 3 3 2 2 1 1
*/
#include <stdio.h>
int main () {
    int N01 , N02 , N03 , hold ;
    int arr01[ 100 ] , arr02[ 100 ] , arr03 [ 100 ] ;
    int i , j ;

    printf ( "Enter element of Array1 :\n" ) ;
    scanf ( "%d", &N01 ) ;

    for (int i = 0; i < N01; i++) {
        printf( "--| Array1 [%d] :\n",i ) ;
        scanf( "%d", &arr01[ i ] ) ;
    }

    printf ( "Enter element of Array2 :\n" ) ;
    scanf ( "%d", &N02 ) ;

    for (int i = 0; i < N02; i++) {
        printf( "--| Array2 [%d] :\n",i ) ;
        scanf( "%d", &arr02[ i ] ) ;
    }
    
    for (int i = 0; i < N01; i++) {
    for (int j = i + 1; j < N01; j++) {
        if (arr01[i] > arr01[j]) {
            hold = arr01[j];
            arr01[j] = arr01[i];
            arr01[i] = hold;
            }
        }
    }

    for (int i = 0; i < N02; i++) {
        for (int j = i + 1; j < N02; j++) {
            if (arr02[ i ] > arr02[ j ] ) {
                hold = arr02[ j ];
                arr02[ j ] = arr02[ i ] ;
                arr02[ i ] = hold;
            }
        }
    }

    N03 = N01 + N02 ;

   for ( int i = 0 ; i < N01 ; i++ ) {
    arr03[ i ] = arr01[ i ];
    }

    for ( int i = 0; i < N02; i++ ) {
        arr03[i + N01] = arr02[ i ] ;
    }
    
    
    for (int i = 0; i < N03; i++) {
        for (int j = i + 1 ; j < N03 ; j++) {
            if ( arr03[ i ] < arr03[ j ]) {
                hold = arr03[ i ] ;
                arr03[ i ] = arr03[ j ] ;
                arr03 [ j ] = hold ;
            }
        }
    }
    printf( "Merge Array1 & Array2 to Array3\n" ) ;
    printf( "Array3 =") ;
    for ( int i = 0; i < N03; i++ ) {
        printf( " %d",arr03[ i ] ) ;
    }
    

    return 0 ;
}