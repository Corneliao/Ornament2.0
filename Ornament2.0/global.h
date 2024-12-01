﻿#pragma once

#include <QPixmap>
#include <QString>

extern qreal GLOB_ScaleDpi;
extern bool GLOB_IsConnectedMysql;
extern bool GLOB_IsConnectedServer;
extern int GLOB_UserAccount;
extern QString GLOB_UserName;
extern QSize screenSize;
extern QByteArray GLOB_UserHeadImagebytes;
//extern QPixmap GLOB_UserHead;

enum  NoticeType { UserApplication };
enum USERDATATYPE { UserApplicationData = 0, UpdateUserFriend };

struct FeatureBarData {
	QPixmap normal_ico;
	QPixmap select_ico;
	QString ico_text;
};

struct UserData {
	QPixmap userHead;
	QString userName;
	QString userAccount;
	bool status = false;
	QPixmap status_ico;
	QString status_text;
	QString userMessage;
	int index = 0;
	Qt::Alignment alignment = Qt::AlignLeft;
};

//struct FriendChatData {
//	QPixmap userHead;
//	QString userName;
//	QString userMessage;
//	bool status = false;
//};
struct SearchFriendData {
	QByteArray imagebytes;
	QString userName;
	bool status;
	QString userAccount;
};
//struct FriendListData {
//	QPixmap userHead;
//	QString userName;
//	bool status = false;
//	QString userAccount;
//	QPixmap status_ico;
//	QString status_text;
//};
