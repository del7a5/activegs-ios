#pragma once


// Bo�te de dialogue CTabXML

class CTabXML : public CTabActiveInfo
{
	DECLARE_DYNAMIC(CTabXML)

public:
	CTabXML(CWnd* pParent = NULL);   // constructeur standard
	virtual ~CTabXML();

// Donn�es de bo�te de dialogue
	enum { IDD = IDD_TABXML };

	CHyperLink urlName;
	CHyperLink urlPublisher;


protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge DDX/DDV
	void	initOptionDialog();
	DECLARE_MESSAGE_MAP()
public:
//	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedSwap();
	virtual void refresh();
};
