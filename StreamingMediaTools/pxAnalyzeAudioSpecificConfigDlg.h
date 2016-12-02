#pragma once


// CPxAnalyzeAudioSpecificConfigDlg �Ի���

class CPxAnalyzeAudioSpecificConfigDlg : public CDialog
{
	DECLARE_DYNAMIC(CPxAnalyzeAudioSpecificConfigDlg)

public:
	CPxAnalyzeAudioSpecificConfigDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPxAnalyzeAudioSpecificConfigDlg();

// �Ի�������
	enum { IDD = IDD_DIALOG_ANALZYE_AAC_CONFIG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString m_strAudioSpecicConfig;
	CString m_strObjectTypeIndex;
	CString m_strSamplingFrequencyIndex;
	CString m_strSamplingFrequency;
	CString m_strChannelsConfiguration;
	afx_msg void OnBnClickedButtonAnalzyeAudioSpecificConfig();
	virtual BOOL OnInitDialog();
	void SaveConfig();
	void Init();
};
