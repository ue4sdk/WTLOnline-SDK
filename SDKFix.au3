#cs ----------------------------------------------------------------------------

 AutoIt Version: 3.3.14.5
 Author:         Igromanru

 Script Function:
	Fixes SDK after the generation

#ce ----------------------------------------------------------------------------

#include <FileConstants.au3>
#include <MsgBoxConstants.au3>
#include <File.au3>
#include <Array.au3>

Global Const $SDK_DIR = @ScriptDir & "\WTLOnline-SDK\SDK"

Func addAActorsInULevel()
   Local Const $ENGINE_CLASS = $SDK_DIR & "\WTLOnline_Engine_classes.hpp"
   Local Const $search = @TAB & "unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET"
   Local Const $replace = @TAB & "unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET" & @CRLF _
						  & @TAB & "TArray<class AActor*>                              AActors;                                                  // 0x00A0(0x0010)" & @CRLF _
						  & @TAB & "unsigned char                                      UnknownData10[0x08];                                      // 0x00B0(0x0010) MISSED OFFSET"
   Local $hFileOpen = FileOpen($ENGINE_CLASS, $FO_READ + $FO_UTF8_NOBOM)
   If $hFileOpen = -1 Then
	  MsgBox(0, @ScriptName, "Error: couldn't open " & $ENGINE_CLASS)
	  Exit
   EndIf
   Local $originalText = FileRead($hFileOpen)
   Local $newText = StringReplace($originalText, $search, $replace)
   FileClose($hFileOpen)

   $hFileOpen = FileOpen($ENGINE_CLASS, $FO_OVERWRITE + $FO_UTF8_NOBOM)
   FileWrite($hFileOpen, $newText)
   FileClose($hFileOpen)
EndFunc

Func fixCoreUObjectEnums()
   Local Const $CORE_UOBJECT_ENUMS = $SDK_DIR & "\WTLOnline_CoreUObject_enums.hpp"
   Local Const $search = "PF_MAX                         = 64"
   Local Const $replace = "PF_MAX1                        = 64"
   Local $hFileOpen = FileOpen($CORE_UOBJECT_ENUMS, $FO_READ + $FO_UTF8_NOBOM)
   If $hFileOpen = -1 Then
	  MsgBox(0, @ScriptName, "Error: couldn't open " & $CORE_UOBJECT_ENUMS)
	  Exit
   EndIf
   Local $originalText = FileRead($hFileOpen)
   Local $newText = StringReplace($originalText, $search, $replace)
   FileClose($hFileOpen)

   $hFileOpen = FileOpen($CORE_UOBJECT_ENUMS, $FO_OVERWRITE + $FO_UTF8_NOBOM)
   FileWrite($hFileOpen, $newText)
   FileClose($hFileOpen)
EndFunc

Func fixBasicHpp()
   Local Const $BASIC_HPP = $SDK_DIR & "\WTLOnline_Basic.hpp"
   Local $hBasicCpp = FileOpen($BASIC_HPP, $FO_READ + $FO_UTF8_NOBOM)
   Local $fileAsArray = FileReadToArray($hBasicCpp)
   FileClose($hBasicCpp)
   For $i = 0 To UBound($fileAsArray)-1
	  If $fileAsArray[$i] = '#include <string>' And $fileAsArray[$i+1] <> '#include "xorstr.hpp"' Then
		 _ArrayInsert($fileAsArray, $i+1, '#include "xorstr.hpp"')
		 ExitLoop
	  EndIf
   Next
   $hBasicCpp = FileOpen($BASIC_HPP, $FO_OVERWRITE + $FO_UTF8_NOBOM)
   _FileWriteFromArray($hBasicCpp, $fileAsArray)
   FileClose($hBasicCpp)
EndFunc

;~ Func fixBasicCpp()
;~    Local Const $BASIC_CPP = $SDK_DIR & "\WTLOnline_Basic.cpp"
;~    Local $hBasicCpp = FileOpen($BASIC_CPP, $FO_READ + $FO_UTF8_NOBOM)
;~    Local $aBasicCpp = FileReadToArray($hBasicCpp)
;~    FileClose($hBasicCpp)
;~    For $i = 0 To UBound($aBasicCpp)-1
;~ 	  If $aBasicCpp[$i] = '#include "../SDK.hpp"' Then
;~ 		 $aBasicCpp[$i] = '#include "WTLOnline_Basic.hpp"'
;~ 		 _ArrayInsert($aBasicCpp, $i+1, '#include "WTLOnline_CoreUObject_classes.hpp"')
;~ 		 ExitLoop
;~ 	  EndIf
;~    Next
;~    $hBasicCpp = FileOpen($BASIC_CPP, $FO_OVERWRITE + $FO_UTF8_NOBOM)
;~    _FileWriteFromArray($hBasicCpp, $aBasicCpp)
;~    FileClose($hBasicCpp)
;~ EndFunc

Func fixWTLOnline_BP_MonsterFunctions_structs()
   Local Const $HPP = $SDK_DIR & "\WTLOnline_BP_MonsterFunctions_structs.hpp"
   Local $hFile = FileOpen($HPP, $FO_READ + $FO_UTF8_NOBOM)
   Local $fileAsArray = FileReadToArray($hFile)
   FileClose($hFile)
   For $i = 0 To UBound($fileAsArray)-1
	  If $fileAsArray[$i] = '#include "WTLOnline_WTL_classes.hpp"' And $fileAsArray[$i+1] <> '#include "WTLOnline_BTT_SetStateMonster_classes.hpp"' Then
		 _ArrayInsert($fileAsArray, $i+1, '#include "WTLOnline_BTT_SetStateMonster_classes.hpp"')
		 ExitLoop
	  EndIf
   Next
   $hFile = FileOpen($HPP, $FO_OVERWRITE + $FO_UTF8_NOBOM)
   _FileWriteFromArray($hFile, $fileAsArray)
   FileClose($hFile)
EndFunc

addAActorsInULevel()
fixCoreUObjectEnums()
fixBasicHpp()
fixWTLOnline_BP_MonsterFunctions_structs()


MsgBox(0, @ScriptName, "Done")