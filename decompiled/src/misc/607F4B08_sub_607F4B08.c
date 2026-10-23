/* sub_607F4B08
 * address: 0x607F4B08   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607F4B08(int a1)
{
  signed int result; // r0
  int v3; // r4
  int v4; // r0
  unsigned int v5; // r2
  unsigned int v6; // r3
  _DWORD v7[6]; // [sp+8h] [bp-18h] BYREF

  result = FIELD_U32(dword_60C99E60, 4688);
  v3 = dword_60CC62E4;
  if ( result == 2 )
  {
    v7[0] = 2;
    v7[1] = MultiPlayCourseSelectScene_create;
    return SceneMgr_doSceneChange(dword_60CC62E4, a1, (int)v7, 0, 0);
  }
  else if ( result == 1 )
  {
    v4 = dword_60C99DEC;
    FIELD_U32(dword_60C99DEC, 100) = 0;
    FIELD_U32(v4, 44) = 0;
    FIELD_U32(v4, 172) = 0;
    FIELD_U32(v4, 116) = 0;
    FIELD_U32(v4, 244) = 0;
    FIELD_U32(v4, 188) = 0;
    FIELD_U32(v4, 316) = 0;
    FIELD_U32(v4, 260) = 0;
    v5 = FIELD_U8(v4, 532);
    if ( v5 >= 5 )
      v5 = 0;
    v6 = v4 + 4 * v5;
    FIELD_U8(v4, 528) = FIELD_U8(v6, 540);
    FIELD_U8(v4, 529) = FIELD_U8(v6, 560);
    result = sub_607F67E8(v3, a1);
    FIELD_U32(v3, 108) = 0;
  }
  return result;
}
