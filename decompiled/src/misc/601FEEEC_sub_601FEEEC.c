/* sub_601FEEEC
 * address: 0x601FEEEC   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601FEEEC(int a1)
{
  signed int result; // r0
  int v3; // r3
  int v4; // r1
  _DWORD v5[6]; // [sp+8h] [bp-18h] BYREF

  if ( sub_608194EC((_BYTE *)dword_60CC6BE4, a1) == 1 )
  {
    result = FIELD_U32(dword_60C9CFB8, 76);
    if ( result + FIELD_U32(dword_60C9CFB8, 72) )
      return sub_601E2F20(dword_60C8B13C);
  }
  else
  {
    StateMgr__execute((StateMgr *)(a1 + 228));
    sub_601E2F20(dword_60C8B13C);
    sub_601FF05C(FIELD_U32(dword_60C9BAAC, 172), FIELD_U32(dword_60C9BAAC, 172) == 0);
    FIELD_U32(dword_60CC6D78, 408) = 0;
    FIELD_U8(dword_60C99DEC, 476) = 1;
    result = FIELD_U8(dword_60C89E18, 64988);
    if ( FIELD_U8(dword_60C89E18, 64988) )
    {
      result = dword_60CC62E4;
      if ( !FIELD_U32(dword_60CC62E4, 92) )
      {
        v3 = 65537;
        v4 = FIELD_U8(dword_60CC6D8C, 17);
        v5[0] = 2;
        if ( v4 )
          v3 = 720907;
        v5[1] = GameSetupScene_create;
        return SceneMgr_doSceneChange(dword_60CC62E4, a1, (int)v5, v3, 0);
      }
    }
  }
  return result;
}
