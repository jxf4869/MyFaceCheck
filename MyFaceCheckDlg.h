
// MyFaceCheckDlg.h: 头文件
//

#pragma once
#include "ButtonPNG.h"

// CMyFaceCheckDlg 对话框
class CMyFaceCheckDlg : public CDialogEx
{
// 构造
public:
	CMyFaceCheckDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MYFACECHECK_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedStatic1();
	afx_msg void OnBnClickedStatic2();
	ButtonPNG m_btnLogin;

	CImage m_imgBK;
	ButtonPNG m_btnRegister;
};
