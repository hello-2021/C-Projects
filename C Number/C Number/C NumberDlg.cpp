
// C NumberDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "C Number.h"
#include "C NumberDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CCNumberDlg 对话框



CCNumberDlg::CCNumberDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CNUMBER_DIALOG, pParent)
	//, m_P3(0)
	//, m_P2(_T(""))
	//, m_P3(_T(""))
	//, m_P1(_T(""))
	//, m_T1(_T(""))
	//, m_T2(_T(""))
	//, m_M3(_T(""))
	//, m_M1(_T(""))
	//, m_E1(_T(""))
	//, m_M2(_T(""))
	//, m_E2(_T(""))
	//, m_E3(_T(""))
	//, m_T3(_T(""))
	, m_E1(0)
	, m_E2(0)
	, m_E3(0)
	, m_M1(0)
	, m_M2(0)
	, m_M3(0)
	, m_P1(0)
	, m_P2(0)
	, m_P3(0)
	, m_T1(0)
	, m_T2(0)
	, m_T3(0)
	//, m_M1(0)
	//, m_P2(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCNumberDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Control(pDX, IDC_P1, m_P1);
	//  DDX_Control(pDX, IDC_P2, m_P2);
	//  DDX_Text(pDX, IDC_P3, m_P3);
	//  DDX_Text(pDX, IDC_P2, m_P2);
	//  DDX_Text(pDX, IDC_P3, m_P3);
	//  DDX_Text(pDX, IDC_P1, m_P1);
	//  DDX_Text(pDX, IDC_T1, m_T1);
	//  DDX_Text(pDX, IDC_T2, m_T2);
	//  DDX_Control(pDX, IDC_T3, m_T3);
	//  DDX_Text(pDX, IDC_M3, m_M3);
	//  DDX_Text(pDX, IDC_M1, m_M1);
	//  DDX_Control(pDX, IDC_M2, m_M2);
	//  DDX_Text(pDX, IDC_E1, m_E1);
	//  DDX_Text(pDX, IDC_M2, m_M2);
	//  DDX_Text(pDX, IDC_E2, m_E2);
	//  DDX_Text(pDX, IDC_E3, m_E3);
	//  DDX_Text(pDX, IDC_T3, m_T3);
	DDX_Text(pDX, IDC_E1, m_E1);
	DDX_Text(pDX, IDC_E2, m_E2);
	DDX_Text(pDX, IDC_E3, m_E3);
	//  DDX_Control(pDX, IDC_M1, m_M1);
	DDX_Text(pDX, IDC_M1, m_M1);
	DDX_Text(pDX, IDC_M2, m_M2);
	DDX_Text(pDX, IDC_M3, m_M3);
	DDX_Text(pDX, IDC_P1, m_P1);
	//  DDX_Control(pDX, IDC_P2, m_P2);
	DDX_Text(pDX, IDC_P2, m_P2);
	DDX_Text(pDX, IDC_P3, m_P3);
	DDX_Text(pDX, IDC_T1, m_T1);
	DDX_Text(pDX, IDC_T2, m_T2);
	DDX_Text(pDX, IDC_T3, m_T3);
	//  DDX_Control(pDX, IDC_PROGRESS, m_Progress);
}

BEGIN_MESSAGE_MAP(CCNumberDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_PE, &CCNumberDlg::OnBnClickedPe)
	ON_BN_CLICKED(IDC_ME, &CCNumberDlg::OnBnClickedMe)
	ON_BN_CLICKED(IDC_TE, &CCNumberDlg::OnBnClickedTe)
	ON_BN_CLICKED(IDC_EE, &CCNumberDlg::OnBnClickedEe)
END_MESSAGE_MAP()


// CCNumberDlg 消息处理程序

BOOL CCNumberDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CCNumberDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CCNumberDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CCNumberDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CCNumberDlg::OnBnClickedPe()
{
	// 加法
	UpdateData(TRUE);
	m_P3 = m_P1 + m_P2;
	UpdateData(FALSE);
}


void CCNumberDlg::OnBnClickedMe()
{
	// 减法
	UpdateData(TRUE);
	m_M3 = m_M1 - m_M2;
	UpdateData(FALSE);
}


void CCNumberDlg::OnBnClickedTe()
{
	// 乘法
	UpdateData(TRUE);
	m_T3 = m_T1 * m_T2;
	UpdateData(FALSE);
}


void CCNumberDlg::OnBnClickedEe()
{
	// 除法
	UpdateData(TRUE);
	m_E3 = m_E1 / m_E2;
	UpdateData(FALSE);
}
