// pxAACAnalyzeDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "StreamingMediaTools.h"
#include "pxAACAnalyzeDlg.h"
#include "afxdialogex.h"
#include "pxAnalyzeAudioSpecificConfigDlg.h"



// CPxAACAnalyzeDlg �Ի���

IMPLEMENT_DYNAMIC(CPxAACAnalyzeDlg, CDialogEx)

CPxAACAnalyzeDlg::CPxAACAnalyzeDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CPxAACAnalyzeDlg::IDD, pParent)
{

}

CPxAACAnalyzeDlg::~CPxAACAnalyzeDlg()
{
}

void CPxAACAnalyzeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPxAACAnalyzeDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_ANALYZE_AudioSpecificConfig, &CPxAACAnalyzeDlg::OnBnClickedButtonAnalyzeAudiospecificconfig)
END_MESSAGE_MAP()


// CPxAACAnalyzeDlg ��Ϣ�������


void CPxAACAnalyzeDlg::OnBnClickedButtonAnalyzeAudiospecificconfig()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CPxAnalyzeAudioSpecificConfigDlg oAnalyzeAudioSpecificConfigDlg;
	oAnalyzeAudioSpecificConfigDlg.DoModal();
}
