#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <QFile>
#include <QString>
#include <string>
#include <cstdio>
#include <fstream>
#include <QDebug>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool executeTest(QString output, QString expected);

struct S{
      int num;
      QString sss;
    };
void sorting(QString Path, QString OutputPath);
void cleararray(int field[20][10]);
int calculate(int sum, int k);
#endif // FUNCTIONS_H
