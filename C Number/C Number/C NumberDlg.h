
// C NumberDlg.h: 头文件
//

#pragma once


// CCNumberDlg 对话框
class CCNumberDlg : public CDialogEx
{
// 构造
public:
	CCNumberDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CNUMBER_DIALOG };
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
//	CEdit m_P1;
//	CEdit m_P2;
//	int m_P3;
//	CString m_P2;
//	CString m_P3;
//	CString m_P1;
//	CString m_T1;
//	CString m_T2;
//	CEdit m_T3;
//	CString m_M3;
//	CString m_M1;
//	CEdit m_M2;
//	CString m_E1;
//	CString m_M2;
//	CString m_E2;
//	CString m_E3;
//	CString m_T3;
	afx_msg void OnBnClickedPe();
	afx_msg void OnBnClickedMe();
	afx_msg void OnBnClickedTe();
	afx_msg void OnBnClickedEe();
	int m_E1;
	int m_E2;
	int m_E3;
//	int m_M1;
	int m_M1;
	int m_M2;
	int m_M3;
	int m_P1;
//	int m_P2;
	int m_P2;
	int m_P3;
	int m_T1;
	int m_T2;
	int m_T3;
//	CProgressCtrl m_Progress;
};
