
// EL505-LAB001Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "EL505-LAB001.h"
#include "EL505-LAB001Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEL505LAB001Dlg dialog


CEL505LAB001Dlg::CEL505LAB001Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_EL505LAB001_DIALOG, pParent)
	
	, m_sDEC(_T(""))
	, m_sHEX(_T(""))
	, m_sBIN(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CEL505LAB001Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LED07, m_bmLED07);
	DDX_Control(pDX, IDC_LED06, m_bmLED06);
	DDX_Control(pDX, IDC_LED05, m_bmLED05);
	DDX_Control(pDX, IDC_LED04, m_bmLED04);
	DDX_Control(pDX, IDC_LED03, m_bmLED03);
	DDX_Control(pDX, IDC_LED02, m_bmLED02);
	DDX_Control(pDX, IDC_LED01, m_bmLED01);
	DDX_Control(pDX, IDC_LED00, m_bmLED00);

	DDX_Text(pDX, IDC_DEC, m_sDEC);
	DDX_Text(pDX, IDC_HEX, m_sHEX);
	DDX_Text(pDX, IDC_BIN, m_sBIN);
}

BEGIN_MESSAGE_MAP(CEL505LAB001Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CHANGE_BIT7, &CEL505LAB001Dlg::OnBnClickedChangeBit7)
	ON_BN_CLICKED(IDC_CHANGE_BIT6, &CEL505LAB001Dlg::OnBnClickedChangeBit6)
	ON_BN_CLICKED(IDC_CHANGE_BIT5, &CEL505LAB001Dlg::OnBnClickedChangeBit5)
	ON_BN_CLICKED(IDC_CHANGE_BIT4, &CEL505LAB001Dlg::OnBnClickedChangeBit4)
	ON_BN_CLICKED(IDC_CHANGE_BIT3, &CEL505LAB001Dlg::OnBnClickedChangeBit3)
	ON_BN_CLICKED(IDC_CHANGE_BIT2, &CEL505LAB001Dlg::OnBnClickedChangeBit2)
	ON_BN_CLICKED(IDC_CHANGE_BIT1, &CEL505LAB001Dlg::OnBnClickedChangeBit1)
	ON_BN_CLICKED(IDC_CHANGE_BIT0, &CEL505LAB001Dlg::OnBnClickedChangeBit0)
	
END_MESSAGE_MAP()


// CEL505LAB001Dlg message handlers

BOOL CEL505LAB001Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	m_hbmLED[0] = LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_bmLED_OFF));
	m_hbmLED[1] = LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_bmLED_ON));

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CEL505LAB001Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CEL505LAB001Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CEL505LAB001Dlg::OnBnClickedChangeBit7()
{
	// TODO: Add your control notification handler code here
	myByte[7] = myByte[7] ? 0 : 1;
	m_bmLED07.SetBitmap(m_hbmLED[myByte[7]]);
	SetValues();
	UpdateData(0);
}


void CEL505LAB001Dlg::OnBnClickedChangeBit6()
{
	// TODO: Add your control notification handler code here
	myByte[6] = myByte[6] ? 0 : 1;
	m_bmLED06.SetBitmap(m_hbmLED[myByte[6]]);
	SetValues();
	UpdateData(0);
}


void CEL505LAB001Dlg::OnBnClickedChangeBit5()
{
	// TODO: Add your control notification handler code here
	myByte[5] = myByte[5] ? 0 : 1;
	m_bmLED05.SetBitmap(m_hbmLED[myByte[5]]);
	SetValues();
	UpdateData(0);
}


void CEL505LAB001Dlg::OnBnClickedChangeBit4()
{
	// TODO: Add your control notification handler code here
	myByte[4] = myByte[4] ? 0 : 1;
	m_bmLED04.SetBitmap(m_hbmLED[myByte[4]]);
	SetValues();
	UpdateData(0);
}


void CEL505LAB001Dlg::OnBnClickedChangeBit3()
{
	// TODO: Add your control notification handler code here
	myByte[3] = myByte[3] ? 0 : 1;
	m_bmLED03.SetBitmap(m_hbmLED[myByte[3]]);
	SetValues();
	UpdateData(0);
}


void CEL505LAB001Dlg::OnBnClickedChangeBit2()
{
	// TODO: Add your control notification handler code here
	myByte[2] = myByte[2] ? 0 : 1;
	m_bmLED02.SetBitmap(m_hbmLED[myByte[2]]);
	SetValues();
	UpdateData(0);
}


void CEL505LAB001Dlg::OnBnClickedChangeBit1()
{
	// TODO: Add your control notification handler code here
	myByte[1] = myByte[1] ? 0 : 1;
	m_bmLED01.SetBitmap(m_hbmLED[myByte[1]]);
	SetValues();
	UpdateData(0);
}


void CEL505LAB001Dlg::OnBnClickedChangeBit0()
{
	// TODO: Add your control notification handler code here
	myByte[0] = myByte[0] ? 0 : 1;
	m_bmLED00.SetBitmap(m_hbmLED[myByte[0]]);
	SetValues();
	UpdateData(0);
}







