#pragma once


// CPxAACAnalyzeDlg �Ի���

class CPxAACAnalyzeDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CPxAACAnalyzeDlg)

public:
	CPxAACAnalyzeDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPxAACAnalyzeDlg();

// �Ի�������
	enum { IDD = IDD_OLE_PROPPAGE_LARGE_AAC };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonAnalyzeAudiospecificconfig();
};
