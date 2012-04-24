// CTerraCtrl.cpp: implementation of the CTerraCtrl class.
//
//////////////////////////////////////////////////////////////////////

#include "../global.h"
#include "CTerraCtrl.h"




//------------------------------------------------------------------//
// Construction/Destruction
//------------------------------------------------------------------//
CTerraCtrl::CTerraCtrl()
{
	m_bOK=FALSE;	


	
	CoInitialize(NULL);

	HRESULT hr = m_pEGameEncrypto.CreateInstance(__uuidof(EGameEncrypt));

	
	
	//caution hr�� ���� �������ΰ�� NULL �� return �˴ϴ�.
	//if(NULL == hr) return;	


	/*
	//�޵�� �Ʒ��� ���� ������� �¾��Ͽ��߸� �������� ������ �����մϴ�. 
	
	  1.EGameEncrypt.dll ������ ������ ���丮�� �����Ͽ��� �մϴ�.
		c:\windows\system (if windows 95/98/Me)
		c:\winnt\system32 (if windows NT/2000)	
		c:\windows\system32 (if windows XP)
	  2. command prompt 'cd' to the %system% path, and type
	    c:\windows\system32\regsvr32 EGameEncrypt.dll
	  3. dll������ ���������� ����Ͻ÷��� ��ǻ�͸� ����ŸƮ �Ͽ��߸� �մϴ�.

	*/





	m_bOK=TRUE;
}


//------------------------------------------------------------------//
//
//------------------------------------------------------------------//
CTerraCtrl::~CTerraCtrl()
{
	m_pEGameEncrypto=NULL;
	CoUninitialize();

}

//------------------------------------------------------------------//
//
//------------------------------------------------------------------//
BOOL CTerraCtrl::Encrypt(const unsigned char* pTIDStr,unsigned char* pEncryptStr,const int EncryptStrLength) const
{
	_bstr_t bstrSend = (char*)pTIDStr;

	WCHAR* cDecoded;

	// It is not being decoded properly
	if(FAILED(m_pEGameEncrypto->Decode(bstrSend,&cDecoded))){// &cDecoded))){
		//MessageBox(HWND_DESKTOP, "Not decoded properly", "Decoding", MB_OK);
		return FALSE;
	}
	_bstr_t hoge_copy(cDecoded, true);

	int len=hoge_copy.length();
	if(len > EncryptStrLength) len=EncryptStrLength;

	memcpy(pEncryptStr,(char*)hoge_copy,len);
	pEncryptStr[len]=NULL;

	return TRUE;

}



//------------------------------------------------------------------//
//
//------------------------------------------------------------------//
BOOL CTerraCtrl::isOK(void) const
{
	return m_bOK; 
}





