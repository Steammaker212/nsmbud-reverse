/* sub_607ED780
 * address: 0x607ED780   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607ED780(int a1)
{
  int v2; // r5
  int result; // r0
  _BYTE *v4; // r4
  int v5; // t1
  _DWORD v6[6]; // [sp+8h] [bp-18h] BYREF

  v2 = dword_60CC62E4;
  FIELD_U8(dword_60CC6D78, 20) = 1;
  v6[0] = 2;
  v6[1] = MultiPlayCourseSelectScene_create;
  SceneMgr_doSceneChange(v2, a1, (int)v6, 0, 0);
  FIELD_U32(v2, 108) = 131074;
  sub_6082B7CC(dword_60CC6E04);
  v5 = FIELD_U8(a1, 66762);
  v4 = (_BYTE *)(a1 + 66762);
  result = v5;
  if ( v5 )
  {
    result = dword_60C99DEC;
    if ( dword_60C99DEC )
    {
      result = FIELD_U32(dword_60C99DEC, 508);
      if ( result == 2 )
        result = sub_6082B688(dword_60CC6E04);
    }
  }
  *v4 = 0;
  return result;
}
