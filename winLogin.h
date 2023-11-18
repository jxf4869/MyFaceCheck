#pragma once


// winLogin 对话框

class winLogin : public CDialogEx
{
	DECLARE_DYNAMIC(winLogin)

public:
	winLogin(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~winLogin();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MYFACECHECK_LOGIN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
