#pragma once


// CPxRTSPAnalyzerDlg �Ի���

class CPxRTSPAnalyzerDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CPxRTSPAnalyzerDlg)

public:
	CPxRTSPAnalyzerDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPxRTSPAnalyzerDlg();

// �Ի�������
	enum { IDD = IDD_PAGE_RTSP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
