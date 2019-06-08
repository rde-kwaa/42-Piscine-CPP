/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 05:49:57 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/07 14:34:41 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

/* int main(void) {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}
 */

#include <iomanip>
#include <iostream>

void test(Fixed test, float actual) {
    std::cout << std::setw(10) << test
              << std::setw(8) << "(" << actual << ")" << std::endl;
}

void test(int test, int actual) {
    std::string res((test == actual) ? "PASS" : "FAIL");
    std::cout << std::setw(10) << test
              << std::setw(10) << "(" << actual << ")"
              << std::setw(8) << "--> " << res << std::endl;
}

void testAddition() {
    int iA = 33;
    int iB = 103;
    int iC = -103;

    Fixed A(iA);
    Fixed B(iB);
    Fixed C(iC);

    float fA = 33.123;
    float fB = 103.321;
    float fC = -103.333;

    std::cout << "<--Addition Test-->" << std::endl;
    std::cout << "<--int-->" << std::endl;
    test((A + B).toInt(), iA + iB);
    test((A + C).toInt(), iA + iC);
    test((C + A).toInt(), iC + iA);
    test((C + C).toInt(), iC + iC);
    /*  C += A;
    iC += iA; */
    test(C.toInt(), iC);

    std::cout << "<--float-->" << std::endl;
    A = Fixed(fA);
    B = Fixed(fB);
    C = Fixed(fC);

    test(A + B, fA + fB);
    test(A + C, fA + fC);
    test(C + A, fC + fA);
    test(C + C, fC + fC);
    /* C += A;
    fC += fA; */
    test(C, fC);

    std::cout << "<--Addition End-->" << std::endl;
}

void testSubtraction() {
    int iA = 33;
    int iB = 103;
    int iC = -103;

    Fixed A(iA);
    Fixed B(iB);
    Fixed C(iC);

    float fA = 33.123;
    float fB = 103.321;
    float fC = -103.333;

    std::cout << "<--Subtraction Test-->" << std::endl;
    std::cout << "<--int-->" << std::endl;
    test((A - B).toInt(), iA - iB);
    test((A - C).toInt(), iA - iC);
    test((C - A).toInt(), iC - iA);
    test((C - C).toInt(), iC - iC);
    /* C -= A;
    iC -= iA; */
    test(C.toInt(), iC);

    std::cout << "<--float-->" << std::endl;
    A = Fixed(fA);
    B = Fixed(fB);
    C = Fixed(fC);

    test(A - B, fA - fB);
    test(A - C, fA - fC);
    test(C - A, fC - fA);
    test(C - C, fC - fC);
    /* C -= A;
    fC -= fA; */
    test(C, fC);

    std::cout << "<--Subtraction End-->" << std::endl;
}

void testMultiplication() {
    int iA = 33;
    int iB = 103;
    int iC = -103;

    Fixed A(iA);
    Fixed B(iB);
    Fixed C(iC);

    float fA = 33.123;
    float fB = 103.321;
    float fC = -103.333;

    std::cout << "<--Multiplication Test-->" << std::endl;
    std::cout << "<--int-->" << std::endl;
    test((A * B).toInt(), iA * iB);
    test((A * C).toInt(), iA * iC);
    test((C * A).toInt(), iC * iA);
    test((C * C).toInt(), iC * iC);
    /* C *= A;
    iC *= iA; */
    test(C.toInt(), iC);

    std::cout << "<--float-->" << std::endl;
    A = Fixed(fA);
    B = Fixed(fB);
    C = Fixed(fC);

    test(A * B, fA * fB);
    test(A * C, fA * fC);
    test(C * A, fC * fA);
    test(C * C, fC * fC);
    /*  C *= A;
    fC *= fA; */
    test(C, fC);

    std::cout << "<--Multiplication End-->" << std::endl;
}

void testDivision() {
    int iA = 33;
    int iB = 103;
    int iC = -103;

    Fixed A(iA);
    Fixed B(iB);
    Fixed C(iC);

    float fA = 33.123;
    float fB = 103.321;
    float fC = -103.333;

    std::cout << "<--Division Test-->" << std::endl;
    std::cout << "<--int-->" << std::endl;
    test((A / B).toInt(), iA / iB);
    test((A / C).toInt(), iA / iC);
    test((C / A).toInt(), iC / iA);
    test((C / C).toInt(), iC / iC);
    /* C /= A;
	iC /= iA; */
    test(C.toInt(), iC);

    std::cout << "<--float-->" << std::endl;
    A = Fixed(fA);
    B = Fixed(fB);
    C = Fixed(fC);

    test(A / B, fA / fB);
    test(A / C, fA / fC);
    test(C / A, fC / fA);
    test(C / C, fC / fC);
    /* C /= A;
	fC /= fA; */
    test(C, fC);

    std::cout << "<--Division End-->" << std::endl;
}

void testComparitor() {
    int iA = 1;
    int iB = 2;
    int iC = -1;
    int iD = 1;
    int iE = -2;

    Fixed A(iA);
    Fixed B(iB);
    Fixed C(iC);
    Fixed D(iD);
    Fixed E(iE);

    std::cout << "<--Comparitor Test-->" << std::endl;
    test(A < B, iA < iB);
    test(A < C, iA < iC);
    test(A < D, iA < iD);

    test(C < B, iC < iB);
    test(C < E, iC < iE);
    test(C < D, iC < iD);

    test(A > B, iA > iB);
    test(A > C, iA > iC);
    test(A > D, iA > iD);

    test(C > B, iC > iB);
    test(C > E, iC > iE);
    test(C > D, iC > iD);

    test(A == D, iA == iD);
    test(A == C, iA == iC);
    test(C != E, iA != iE);
    test(A != E, iA != iE);

    std::cout << "<--Comparitor End-->" << std::endl;
}

int main(void) {
    testAddition();
    testSubtraction();
    testMultiplication();
    testDivision();
    testComparitor();

    std::cout << "<--Example Test-->" << std::endl;

    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}
