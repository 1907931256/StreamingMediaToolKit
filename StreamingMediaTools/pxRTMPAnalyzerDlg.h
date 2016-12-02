#pragma once
#include "afxcmn.h"
#include "pxCommonDef.h"

const int  WM_ADD_PACKAGE_TO_LIST = WM_USER + 2001;

enum EPxTaskMode
{
	kePxTaskMode_Invalid,
	kePxTaskMode_Record,
	kePxTaskMode_Analyze,
	kePxTaskMode_Cnt
};

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
	afx_msg LRESULT AddPackage2ListCtrl( WPARAM wParam, LPARAM lParam );
	void TestAddPackage2ListCtrl();
	CReportCtrl m_lcPackage;
	afx_msg void OnBnClickedButtonRtmpTest();
	int m_nLastVideoTimestamp;
	int m_nLastAudioTimestamp;

	CRITICAL_SECTION  m_csListCtrl; 
	CString m_strAVNotSyncThreshold; // ����Ƶ��ͬ���Ĺ�����ֵ(����)
	afx_msg void OnBnClickedCheckClearPackageList();

public:
	EPxTaskMode m_eTaskMode;
	afx_msg void OnBnClickedButtonStartAnalzye();
	afx_msg void OnBnClickedButtonStopAnalzye();
	afx_msg void OnBnClickedCheckShowAudioInfo();

	bool m_bShowVideo;
	bool m_bShowAudio;
	afx_msg void OnBnClickedCheckShowVideoInfo();
	afx_msg void OnBnClickedButtonSaveAnalzyeInfo2File();
	afx_msg void OnBnClickedCheckGenerate264File();

	bool m_bGenerateH264File; // ����ʱ�Ƿ�ͬʱ����.264�ļ�
};
