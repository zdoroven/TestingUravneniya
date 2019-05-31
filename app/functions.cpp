#include "functions.h"
#include <QStringList>

bool executeTest(QString output, QString expected)
{
    if (output == expected)
        return true;
    else
        return false;
}

void cleararray(int field[20][10])
{
    int i, j;
    for (i = 0; i < 20; i++) {
        for(j = 0; j < 10; j++){
            field[i][j] = 0;
        }
    }
}

int calculate(int sum, int k){
    sum += k;
    return sum;
}

void sorting(QString Path, QString OutputPath)
{
    QFile file(Path);
    std::vector<S> statistic;
    size_t k = 0;
    QFile Output(OutputPath);

    if (file.open(QIODevice::ReadOnly)){
        while(!file.atEnd()){
            QString string = file.readLine();
            QStringList values = string.split(" ");
            int current_num = values[0].toInt();
            QString current_s = values[1];
            S stat;
            stat.num = current_num;
            stat.sss = current_s;
            statistic.push_back(stat);
        }
        file.close();
    }

    for(size_t i = 0; i < statistic.size(); i++){
        for(size_t j = i + 1; j < statistic.size(); j++){
            if(statistic[i].num < statistic[j].num){
                S tmp = statistic[i];
                statistic[i] = statistic[j];
                statistic[j] = tmp;
            }
        }
    }

    if(Output.open(QIODevice::WriteOnly | QIODevice::Text))
            {

                while(k < statistic.size())
                {
                    QTextStream writeStream(&Output);
                    int i, flag = 1;
                    for(i = k-1; i >= 0; i--){
                        if(statistic[k].sss == statistic[i].sss){
                            flag = 0;
                        }
                    }
                    if(flag){
                        writeStream << statistic[k].num << " " << statistic[k].sss;
                    }
                    k++;
                }
                Output.close();
            }

}
