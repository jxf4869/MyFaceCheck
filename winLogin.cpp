// winLogin.cpp: 实现文件
//

#include "pch.h"
#include "MyFaceCheck.h"
#include "winLogin.h"
#include "afxdialogex.h"


// winLogin 对话框

IMPLEMENT_DYNAMIC(winLogin, CDialogEx)

winLogin::winLogin(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MYFACECHECK_LOGIN, pParent)
{

}

winLogin::~winLogin()
{
}

void winLogin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(winLogin, CDialogEx)
END_MESSAGE_MAP()


// winLogin 消息处理程序
