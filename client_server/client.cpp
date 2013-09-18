#include <QDebug>
#include <QTcpSocket>

int main()
{
    QTcpSocket *tcpSocket = new QTcpSocket(); //create TCP-based socket
    tcpSocket->connectToHost("172.16.254.1",5300); //connect socket to server
    tcpSocket->waitForConnected(); //wait 
    tcpSocket->waitForReadyRead(); 
    qDebug() << tcpSocket->readAll();    
}

