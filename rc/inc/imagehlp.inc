; ..\LIB\IMAGEHLP.LIB PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

BindImage PROTO :DWORD,:DWORD,:DWORD
BindImageEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CheckSumMappedFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
CopyPdb PROTO :DWORD,:DWORD,:DWORD
EnumerateLoadedModules PROTO :DWORD,:DWORD,:DWORD
FindDebugInfoFile PROTO :DWORD,:DWORD,:DWORD
FindExecutableImage PROTO :DWORD,:DWORD,:DWORD
GetImageConfigInformation PROTO :DWORD,:DWORD
GetImageUnusedHeaderBytes PROTO :DWORD,:DWORD
GetTimestampForLoadedLibrary PROTO :DWORD
ImageAddCertificate PROTO :DWORD,:DWORD,:DWORD
ImageDirectoryEntryToData PROTO :DWORD,:DWORD,:DWORD,:DWORD
ImageEnumerateCertificates PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ImageGetCertificateData PROTO :DWORD,:DWORD,:DWORD,:DWORD
ImageGetCertificateHeader PROTO :DWORD,:DWORD,:DWORD
ImageGetDigestStream PROTO :DWORD,:DWORD,:DWORD,:DWORD
ImageLoad PROTO :DWORD,:DWORD
ImageNtHeader PROTO :DWORD
ImageRemoveCertificate PROTO :DWORD,:DWORD
ImageRvaToSection PROTO :DWORD,:DWORD,:DWORD
ImageRvaToVa PROTO :DWORD,:DWORD,:DWORD,:DWORD
ImageUnload PROTO :DWORD
ImagehlpApiVersion PROTO
ImagehlpApiVersionEx PROTO :DWORD
MakeSureDirectoryPathExists PROTO :DWORD
MapAndLoad PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MapDebugInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
MapFileAndCheckSumA PROTO :DWORD,:DWORD,:DWORD
MapFileAndCheckSum equ <MapFileAndCheckSumA>

MarkImageAsRunFromSwap PROTO :DWORD,:DWORD
ReBaseImage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RemovePrivateCvSymbolic PROTO :DWORD,:DWORD,:DWORD
RemovePrivateCvSymbolicEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
RemoveRelocations PROTO :DWORD
SearchTreeForFile PROTO :DWORD,:DWORD,:DWORD
SetImageConfigInformation PROTO :DWORD,:DWORD
SplitSymbols PROTO :DWORD,:DWORD,:DWORD,:DWORD
StackWalk PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SymCleanup PROTO :DWORD
SymEnumerateModules PROTO :DWORD,:DWORD,:DWORD
SymEnumerateSymbols PROTO :DWORD,:DWORD,:DWORD,:DWORD
SymFunctionTableAccess PROTO :DWORD,:DWORD
SymGetLineFromAddr PROTO :DWORD,:DWORD,:DWORD,:DWORD
SymGetLineFromName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SymGetLineNext PROTO :DWORD,:DWORD
SymGetLinePrev PROTO :DWORD,:DWORD
SymGetModuleBase PROTO :DWORD,:DWORD
SymGetModuleInfo PROTO :DWORD,:DWORD,:DWORD
SymGetOptions PROTO
SymGetSearchPath PROTO :DWORD,:DWORD,:DWORD
SymGetSymFromAddr PROTO :DWORD,:DWORD,:DWORD,:DWORD
SymGetSymFromName PROTO :DWORD,:DWORD,:DWORD
SymGetSymNext PROTO :DWORD,:DWORD
SymGetSymPrev PROTO :DWORD,:DWORD
SymInitialize PROTO :DWORD,:DWORD,:DWORD
SymLoadModule PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SymMatchFileName PROTO :DWORD,:DWORD,:DWORD,:DWORD
SymRegisterCallback PROTO :DWORD,:DWORD,:DWORD
SymSetOptions PROTO :DWORD
SymSetSearchPath PROTO :DWORD,:DWORD
SymUnDName PROTO :DWORD,:DWORD,:DWORD
SymUnloadModule PROTO :DWORD,:DWORD
TouchFileTimes PROTO :DWORD,:DWORD
UnDecorateSymbolName PROTO :DWORD,:DWORD,:DWORD,:DWORD
UnMapAndLoad PROTO :DWORD
UnmapDebugInformation PROTO :DWORD
UpdateDebugInfoFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
UpdateDebugInfoFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD

