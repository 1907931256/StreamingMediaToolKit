#pragma once


// CPxRTMPAnalyzerDlg �Ի���

class CPxRTMPAnalyzerDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CPxRTMPAnalyzerDlg)

public:
	CPxRTMPAnalyzerDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPxRTMPAnalyzerDlg();

// �Ի�������
	enum { IDD = IDD_PAGE_RTMP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString m_strRTMP_URL;
	afx_msg void OnBnClickedButtonStartRecord();
	afx_msg void OnBnClickedButtonStopRecord();
	virtual BOOL OnInitDialog();
	void Init();
	void SaveConfig();
};
