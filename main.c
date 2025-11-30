#include <stdio.h>
#include <math.h>

/*
 * Kirklareli Universitesi - Yazilim Muhendisligi Bolumu
 * Matematik-1 Dersi Odev Cozumleri (C Dili)
 */

// Soru 5 icin yardimci fonksiyon
double f_soru5(double val) {
    return 2*pow(val, 3) - 3*pow(val, 2) - 12*val + 5;
}

// Soru 1: Fonksiyonun turevi
void soru1() {
    printf("\n--- SORU 1 ---\n");
    printf("Soru: f(x) = cbrt(x^2) - 1/sqrt(x) turevi nedir?\n");
    
    printf("Analitik Cozum: f'(x) = 2/(3*cbrt(x)) + 1/(2*x*sqrt(x))\n");
    
    double x = 64.0;
    // Eski derleyiciler icin cbrt yerine pow(x, 1.0/3.0) kullanildi
    double kupkok_x = pow(x, 1.0/3.0);
    double sonuc = (2.0 / (3.0 * kupkok_x)) + (1.0 / (2.0 * x * sqrt(x)));
    printf("Ornek x=%.0f icin deger: %f\n", x, sonuc);
}

// Soru 2: Parametrik Turev
void soru2() {
    printf("\n--- SORU 2 ---\n");
    printf("Soru: x(t)=t^2+1, y(t)=t^3-t parametrik denklemleri, t=2 icin dy/dx?\n");
    
    double t = 2.0;
    double dxdt = 2.0 * t;
    double dydt = 3.0 * pow(t, 2) - 1.0;
    
    double dydx = dydt / dxdt;
    printf("t=%.0f icin dy/dx = %.2f / %.2f = %.4f (Kesir: 11/4)\n", t, dydt, dxdt, dydx);
}

// Soru 3: Logaritmik Turev
void soru3() {
    printf("\n--- SORU 3 ---\n");
    printf("Soru: f(x) = x^cos(x) turevi f'(x) nedir?\n");
    printf("Analitik Cozum: f'(x) = x^cos(x) * (cos(x)/x - sin(x)*ln(x))\n");
}

// Soru 4: Tegetlerin Apsisleri Carpimi
void soru4() {
    printf("\n--- SORU 4 ---\n");
    printf("Soru: f(x)=x^3-2x^2+x-5 egrisinin y=5x+10 dogrusuna paralel tegetlerinin apsis carpimi?\n");
    
    double a = 3.0;
    double b = -4.0;
    double c = -4.0;
    
    double kokler_carpimi = c / a;
    printf("Turev Denklemi: %.0fx^2 + (%.0f)x + (%.0f) = 0\n", a, b, c);
    printf("Kokler Carpimi (c/a): %.4f (-4/3)\n", kokler_carpimi);
}

// Soru 5: Mutlak Maksimum Deger
void soru5() {
    printf("\n--- SORU 5 ---\n");
    printf("Soru: f(x)=2x^3-3x^2-12x+5 fonksiyonunun [-2,3] araliginda max degeri?\n");
    
    // Uç noktalar (-2, 3) ve Kritik noktalar (2, -1)
    double noktalar[] = {-2.0, -1.0, 2.0, 3.0}; 
    
    // Ilk noktayi varsayilan maksimum kabul et
    double max_deger = f_soru5(noktalar[0]);
    
    int i; // DUZELTME BURADA: Degiskeni donguden once tanimladik
    for(i = 0; i < 4; i++) {
        double y = f_soru5(noktalar[i]);
        printf("x=%.0f icin f(x)=%.0f\n", noktalar[i], y);
        if(y > max_deger) {
            max_deger = y;
        }
    }
    
    printf("Mutlak Maksimum Deger: %.0f\n", max_deger);
}

// Soru 6: Bolum Turevi
void soru6() {
    printf("\n--- SORU 6 ---\n");
    printf("Soru: f(x)=(x^2+1)/(x-2) fonksiyonunun turevi nedir?\n");
    printf("Analitik Cozum: f'(x) = (x^2 - 4x - 1) / (x-2)^2\n");
}

// Soru 7: Parametrik Teget Egimi
void soru7() {
    printf("\n--- SORU 7 ---\n");
    printf("Soru: x(t)=t^2, y(t)=t^3-3t, t=2 noktasindaki tegetin egimi (dy/dx)?\n");
    
    double t = 2.0;
    double dxdt = 2.0 * t;               
    double dydt = 3.0 * pow(t, 2) - 3.0; 
    
    double egim = dydt / dxdt;
    printf("t=%.0f icin Egim (m) = %.2f / %.2f = %.4f (Kesir: 9/4)\n", t, dydt, dxdt, egim);
}

// Soru 8: Ustel Turev
void soru8() {
    printf("\n--- SORU 8 ---\n");
    printf("Soru: f(x)=x^sin(x) fonksiyonunun turevi nedir?\n");
    printf("Analitik Cozum: f'(x) = x^sin(x) * (cos(x)*ln(x) + sin(x)/x)\n");
}

// Soru 9: 4. Dereceden Turev
void soru9() {
    printf("\n--- SORU 9 ---\n");
    printf("Soru: y=6x^5-8x^4+2x^3-3x+5 fonksiyonun 4. dereceden turevi?\n");
    printf("1. Turev: 30x^4 - 32x^3 + 6x^2 - 3\n");
    printf("2. Turev: 120x^3 - 96x^2 + 12x\n");
    printf("3. Turev: 360x^2 - 192x + 12\n");
    printf("Sonuc (4. Turev): 720x - 192\n");
}

// Soru 10: x=0 noktasindaki turev
void soru10() {
    printf("\n--- SORU 10 ---\n");
    printf("Soru: f(x)=e^x/(x+1) fonksiyonunun x=0 noktasindaki turevi?\n");
    
    double x = 0.0;
    double pay = x * exp(x);
    double payda = pow((x + 1), 2);
    double sonuc = pay / payda;
    
    printf("Analitik Turev: f'(x) = (x*e^x) / (x+1)^2\n");
    printf("x=0 icin sonuc: %.0f / %.0f = %.0f\n", pay, payda, sonuc);
}

int main() {
    printf("************************************************\n");
    printf("* KIRKLARELI UNIVERSITESI - YAZILIM MUH.       *\n");
    printf("* MATEMATIK-1 DERSI ODEV COZUMLERI (C DILI)    *\n");
    printf("************************************************\n");
    
    soru1();
    soru2();
    soru3();
    soru4();
    soru5();
    soru6();
    soru7();
    soru8();
    soru9();
    soru10();
    
    printf("\nTum sorular cozuldu. Cikmak icin Enter'a basin...\n");
    getchar(); 
    return 0;
}
