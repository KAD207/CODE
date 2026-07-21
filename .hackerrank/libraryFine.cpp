int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    // returned day, month, year
    // due day, month, year
    
    // Time Complexity: O(1) - No loops
    // Space Complexity: O(1) - Variables remain constant for any input
    
    int fine = 0;
    // approach: from the year - month - day back
    // check if return {} is > due {} then ==
    if (y1 > y2){
        fine = 10000;
    }
    else if (y1 == y2){
        if (m1 > m2)
            fine = (m1 - m2) * 500;
        else if (m1 == m2)
            if (d1 > d2)
                fine = (d1 - d2) * 15;
    }
    return fine;
}
