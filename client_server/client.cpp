#include <QDebug>
#include <QTcpSocket>

int main()
{
    QTcpSocket *tcpSocket = new QTcpSocket(); //create TCP-based socket
    tcpSocket->connectToHost("192.168.1.13",5300); //connect socket to server
    tcpSocket->waitForConnected(); //wait 
    tcpSocket->waitForReadyRead(); 
    qDebug() << tcpSocket->readAll();    
}

