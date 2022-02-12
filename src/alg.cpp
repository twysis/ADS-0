// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int ost;
    while (a % b != 0) {
        ost = a % b;
        a = b;
        b = ost;
    }
    return b;
}
