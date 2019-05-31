#ifndef SORT_H
#define SORT_H

#include <gtest/gtest.h>
#include "functions.h"

TEST(sort, empty)
{
    QString inputPath = "./tests/input/input1";
    QFile input(inputPath);

    QString outputPath = "./tests/output/output1";
    QFile output(outputPath);

    sorting(inputPath, outputPath);

    QFile expected("./expected/expected1");

    QString outputString;
    QString expectedString;

    if (output.open(QIODevice::ReadOnly)){
        while(!output.atEnd()){
            outputString = output.readAll();
        }
        output.close();
    }

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << "Output file: " << outputString.toStdString() << endl;
    cout << "Expected file: "<< expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))
        SUCCEED();
    else
        FAIL();
}

TEST(sort, repeatnames)
{
    QString inputPath = "./tests/input/input2";
    QFile input(inputPath);

    QString outputPath = "./tests/output/output2";
    QFile output(outputPath);

    sorting(inputPath, outputPath);

    QFile expected("./expected/expected2");

    QString outputString;
    QString expectedString;

    if (output.open(QIODevice::ReadOnly)){
        while(!output.atEnd()){
            outputString = output.readAll();
        }
        output.close();
    }

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << "Output file: " << outputString.toStdString() << endl;
    cout << "Expected file: "<< expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))
        SUCCEED();
    else
        FAIL();
}

TEST(sort, simpleworking)
{
    QString inputPath = "./tests/input/input3";
    QFile input(inputPath);

    QString outputPath = "./tests/output/output3";
    QFile output(outputPath);

    sorting(inputPath, outputPath);

    QFile expected("./expected/expected3");

    QString outputString;
    QString expectedString;

    if (output.open(QIODevice::ReadOnly)){
        while(!output.atEnd()){
            outputString = output.readAll();
        }
        output.close();
    }

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << "Output file: " << outputString.toStdString() << endl;
    cout << "Expected file: "<< expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))
        SUCCEED();
    else
        FAIL();
}
#endif // SORT_H
