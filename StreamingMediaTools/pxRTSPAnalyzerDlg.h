#pragma once
#include "pxCommonDef.h"
#include "afxcmn.h"
#include "pxRTSPCommonDef.h"

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

public:
	CString m_strRTSP_URL;
	afx_msg void OnBnClickedButtonStartAnalzye();
	afx_msg void OnBnClickedButtonStopAnalzye();
	afx_msg void OnBnClickedCheckShowVideoInfo();
	afx_msg void OnBnClickedCheckShowAudioInfo();
	afx_msg void OnBnClickedCheckGenerate264File();
	afx_msg void OnBnClickedButtonSaveAnalzyeInfo2File();
	virtual BOOL OnInitDialog();

	void Init();
	void SaveConfig();
	afx_msg LRESULT AddPackage2ListCtrl( WPARAM wParam, LPARAM lParam );
	afx_msg void OnBnClickedButtonRtspTest();

public:
	CReportCtrl       m_lcPackage;
	CRITICAL_SECTION  m_csListCtrl; 
	INT64             m_nLastVideoTimestamp;
    INT64             m_nLastAudioTimestamp;
	bool              m_bShowVideo;
	bool              m_bShowAudio;
	bool              m_bGenerateH264File;     // ����ʱ�Ƿ�ͬʱ����.264�ļ�
	CString           m_strAVNotSyncThreshold; // ����Ƶ��ͬ���Ĺ�����ֵ(����)
	bool              m_bStop;                 // ���ڿ��ƿ�ʼ�ͽ���
	SPxRTSPArg        m_sRTSPArg;

public:
	afx_msg void OnBnClickedCheckSaveRtspProcessInfo2File();
	void ActivateItem();
}; 
