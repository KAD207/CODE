int squares(int a, int b) {
    // main wants n rows of numbers: a and b for each.
    // find how many squared integers between a and b
    
    // idea (noob approach): sqrt(a) <= x <= sqrt(b)
    int start = sqrt(a);
    int end = sqrt(b);
    
    int sqInt = end - start;
    
    // check to see if we forgot one when we floored a
    sqInt += (pow(start, 2) >= a) ? 1 : 0;
    return sqInt;
}
