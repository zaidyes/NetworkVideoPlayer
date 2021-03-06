#pragma once

#include <QObject>
#include <QtNetwork>

class NetworkHandler : public QObject
{
	Q_OBJECT

public:
	NetworkHandler();
	~NetworkHandler();

	bool connect();

signals:
	void incomingData(const QString &data);

public slots:
	void read();

protected:
	void write(const QByteArray &data);

private:
	QUdpSocket* m_udpSocket;
};
