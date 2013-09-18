#include <QTcpSocket>
#include <QTcpServer>

int main()
{
	QTcpServer *tcpServer = new QTcpServer(); //creates TCP-based server
	tcpServer->listen(QHostAddress("192.168.1.13"),5300); //listen on your IP adress, port 5300
	while ( tcpServer->isListening() )  //while server is listening
	{	
		QTcpSocket* tcpSocket; //define TCP-based socket
		tcpServer->waitForNewConnection(); //server waits for connection
		if ( (tcpSocket = tcpServer->nextPendingConnection()) )	//if there are connections to be processsed	
		{ 
		    	tcpSocket->write("hello",6); //write "hello" to the socket, client is connected to
			tcpSocket->flush();    
		}
	}
}	
