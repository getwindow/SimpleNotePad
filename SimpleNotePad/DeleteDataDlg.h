#pragma once


// CDeleteDataDlg 对话框

class CDeleteDataDlg : public CDialog
{
	DECLARE_DYNAMIC(CDeleteDataDlg)

public:
	CDeleteDataDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDeleteDataDlg();

	unsigned int GetDeleteAddress() const { return m_address; }
	unsigned int GetDeleteSize() const { return m_size; }

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DELETE_DATA_DIALOG };
#endif

private:
	unsigned int m_address;
	unsigned int m_size;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
	virtual void OnOK();
};
