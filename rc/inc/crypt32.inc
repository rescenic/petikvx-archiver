; ..\LIB\CRYPT32.LIB PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

CertAddCRLContextToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertAddCTLContextToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertAddCertificateContextToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertAddEncodedCRLToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertAddEncodedCTLToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertAddEncodedCertificateToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertAddEncodedCertificateToSystemStoreA PROTO :DWORD,:DWORD,:DWORD
CertAddEncodedCertificateToSystemStore equ <CertAddEncodedCertificateToSystemStoreA>

CertAddEnhancedKeyUsageIdentifier PROTO :DWORD,:DWORD
CertAddSerializedElementToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertAlgIdToOID PROTO :DWORD
CertCloseStore PROTO :DWORD,:DWORD
CertCompareCertificate PROTO :DWORD,:DWORD,:DWORD
CertCompareCertificateName PROTO :DWORD,:DWORD,:DWORD
CertCompareIntegerBlob PROTO :DWORD,:DWORD
CertComparePublicKeyInfo PROTO :DWORD,:DWORD,:DWORD
CertCreateCRLContext PROTO :DWORD,:DWORD,:DWORD
CertCreateCTLContext PROTO :DWORD,:DWORD,:DWORD
CertCreateCertificateContext PROTO :DWORD,:DWORD,:DWORD
CertDeleteCRLFromStore PROTO :DWORD
CertDeleteCTLFromStore PROTO :DWORD
CertDeleteCertificateFromStore PROTO :DWORD
CertDuplicateCRLContext PROTO :DWORD
CertDuplicateCTLContext PROTO :DWORD
CertDuplicateCertificateContext PROTO :DWORD
CertDuplicateStore PROTO :DWORD
CertEnumCRLContextProperties PROTO :DWORD,:DWORD
CertEnumCTLContextProperties PROTO :DWORD,:DWORD
CertEnumCTLsInStore PROTO :DWORD,:DWORD
CertEnumCertificateContextProperties PROTO :DWORD,:DWORD
CertEnumCertificatesInStore PROTO :DWORD,:DWORD
CertFindAttribute PROTO :DWORD,:DWORD,:DWORD
CertFindCTLInStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindCertificateInStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindExtension PROTO :DWORD,:DWORD,:DWORD
CertFindRDNAttr PROTO :DWORD,:DWORD
CertFindSubjectInCTL PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFreeCRLContext PROTO :DWORD
CertFreeCTLContext PROTO :DWORD
CertFreeCertificateContext PROTO :DWORD
CertGetCRLContextProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetCRLFromStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetCTLContextProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetCertificateContextProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetEnhancedKeyUsage PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetIntendedKeyUsage PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetIssuerCertificateFromStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetSubjectCertificateFromStore PROTO :DWORD,:DWORD,:DWORD
CertIsRDNAttrsInCertificateName PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertNameToStrA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertNameToStr equ <CertNameToStrA>

CertOIDToAlgId PROTO :DWORD
CertOpenStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertOpenSystemStoreA PROTO :DWORD,:DWORD
CertOpenSystemStore equ <CertOpenSystemStoreA>

CertRDNValueToStrA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertRDNValueToStr equ <CertRDNValueToStrA>

CertRemoveEnhancedKeyUsageIdentifier PROTO :DWORD,:DWORD
CertSaveStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertSerializeCRLStoreElement PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertSerializeCTLStoreElement PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertSerializeCertificateStoreElement PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertSetCRLContextProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertSetCTLContextProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertSetCertificateContextProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertSetEnhancedKeyUsage PROTO :DWORD,:DWORD
CertStrToNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertStrToName equ <CertStrToNameA>

CertVerifyCRLRevocation PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertVerifyCRLTimeValidity PROTO :DWORD,:DWORD
CertVerifyCTLUsage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertVerifyRevocation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertVerifySubjectCertificateContext PROTO :DWORD,:DWORD,:DWORD
CertVerifyTimeValidity PROTO :DWORD,:DWORD
CertVerifyValidityNesting PROTO :DWORD,:DWORD
CreateFileU PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptAcquireContextU PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecodeMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecodeObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecryptAndVerifyMessageSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecryptMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEncodeObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEncryptMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEnumOIDFunction PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptExportPublicKeyInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptExportPublicKeyInfoEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptFormatObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptFreeOIDFunctionAddress PROTO :DWORD,:DWORD
CryptGetDefaultOIDDllList PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptGetDefaultOIDFunctionAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetMessageCertificates PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetMessageSignerCount PROTO :DWORD,:DWORD,:DWORD
CryptGetOIDFunctionAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetOIDFunctionValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptHashCertificate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptHashMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptHashPublicKeyInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptHashToBeSigned PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptImportPublicKeyInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptImportPublicKeyInfoEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptInitOIDFunctionSet PROTO :DWORD,:DWORD
CryptInstallOIDFunctionAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptLoadSip PROTO :DWORD,:DWORD,:DWORD
CryptMsgCalculateEncodedLength PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgClose PROTO :DWORD
CryptMsgControl PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptMsgCountersign PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptMsgCountersignEncoded PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgEncodeAndSignCTL PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgGetAndVerifySigner PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgGetParam PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgOpenToDecode PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgOpenToEncode PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgSignCTL PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgUpdate PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptMsgVerifyCountersignatureEncoded PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptRegisterDefaultOIDFunction PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptRegisterOIDFunction PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSIPRetrieveSubjectGuid PROTO :DWORD,:DWORD,:DWORD
CryptSetOIDFunctionValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSetProviderU PROTO :DWORD,:DWORD
CryptSignAndEncodeCertificate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignAndEncryptMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignCertificate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignHashU PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignMessageWithKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptUnregisterDefaultOIDFunction PROTO :DWORD,:DWORD,:DWORD
CryptUnregisterOIDFunction PROTO :DWORD,:DWORD,:DWORD
CryptVerifyCertificateSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyDetachedMessageHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyDetachedMessageSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyMessageHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyMessageSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyMessageSignatureWithKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifySignatureU PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
I_CryptAllocTls PROTO
I_CryptDetachTls PROTO :DWORD
I_CryptGetOssGlobal PROTO :DWORD
I_CryptGetTls PROTO :DWORD
I_CryptInstallOssGlobal PROTO :DWORD,:DWORD,:DWORD
I_CryptSetTls PROTO :DWORD,:DWORD
RegCreateKeyExU PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegDeleteValueU PROTO :DWORD,:DWORD
RegEnumValueU PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegQueryInfoKeyU PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegQueryValueExU PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegSetValueExU PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD

