
// EL505-LAB001Dlg.h : header file
//

#pragma once
#include "afxwin.h"
#include <bitset>
#include <string>
#include <sstream>
#include <atlstr.h>
#include <math.h>
#include <iostream>


// CEL505LAB001Dlg dialog
class CEL505LAB001Dlg : public CDialogEx
{
// Construction
public:
	CEL505LAB001Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EL505LAB001_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	
	HBITMAP m_hbmLED[2];

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	//making a byte variable
	std::bitset<8> myByte;

	// Controls the state of the LED07 image
	CStatic m_bmLED07;
	// Controls the state of the LED07 image
	CStatic m_bmLED06;
	// Controls the state of the LED05 image
	CStatic m_bmLED05;
	// Controls the state of the LED04 image
	CStatic m_bmLED04;
	// Controls the state of the LED03 image
	CStatic m_bmLED03;
	// Controls the state of the LED02 image
	CStatic m_bmLED02;
	// Controls the state of the LED01 image
	CStatic m_bmLED01;
	// Controls the state of the LED00 image
	CStatic m_bmLED00;
	afx_msg void OnBnClickedChangeBit7();
	afx_msg void OnBnClickedChangeBit6();
	afx_msg void OnBnClickedChangeBit5();
	afx_msg void OnBnClickedChangeBit4();
	afx_msg void OnBnClickedChangeBit3();
	afx_msg void OnBnClickedChangeBit2();
	afx_msg void OnBnClickedChangeBit1();
	afx_msg void OnBnClickedChangeBit0();
	
	CString m_sDEC;
	CString m_sHEX;
	CString m_sBIN;
	

	void SetHex(std::bitset<8> mybits)
	{
		
		m_sHEX = ChangetoHEX(mybits);
	}

	void SetDec(std::bitset<8> mybits)
	{
		m_sDEC = ChangetoDEC(mybits);
	}
	void SetBin(std::bitset<8> mybits)
	{
		m_sBIN = ChangetoBIN(mybits);
	}

	CString ChangetoHEX(std::bitset<8> mybits)
	{
		CString m_strHEX;
		std::string n;
		unsigned int m_iHEX = 0;
		m_iHEX = mybits[0];
		for (unsigned int i = 1; i < 8; i++)
		{		
				m_iHEX += pow(mybits[i] * 2, i);
		}

		std::stringstream ss;
		ss << std::hex << m_iHEX;
		n = (ss.str());
		m_strHEX = n.c_str();
		return m_strHEX;

		
	}
	
	CString ChangetoDEC(std::bitset<8> mybits)
	{
		CString m_strDEC;
		unsigned int m_iDEC = 0;
		std::string n;
		m_iDEC = mybits[0];

			for (unsigned int i = 1; i < 8; i++)
			{
					m_iDEC += pow(mybits[i] * 2, i);
			}

			std::stringstream ss;
			ss << std::dec << m_iDEC;
			n = (ss.str());
			m_strDEC = n.c_str();
		return m_strDEC;

	}

	CString ChangetoBIN(std::bitset<8> mybits)
	{
		CString m_strBIN;
		std::string n;


		n =  mybits.to_string<char, std::string::traits_type, std::string::allocator_type>();
		
		m_strBIN = n.c_str();
		return m_strBIN;
	}

	void SetValues()
	{
		SetBin(myByte);
		SetHex(myByte);
		SetDec(myByte);
	}

	
	
};
