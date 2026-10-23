/* sub_607F9250
 * address: 0x607F9250   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F9250(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r6
  unsigned int v5; // r2
  int v6; // r8
  int v7; // r0
  int v8; // r1
  int v9[8]; // [sp+8h] [bp-20h] BYREF

  if ( FIELD_U32(a1, 85016) == 4 )
  {
    v9[0] = 2;
    v9[1] = (int)GameSetupScene_create;
    SceneMgr_doSceneChange(dword_60CC62E4, a1, v9, 0, 0);
    v2 = dword_60CC62E4;
    result = 131074;
  }
  else
  {
    result = FIELD_U8(a1, 36865);
    if ( !FIELD_U8(a1, 36865) )
      return result;
    v4 = 0;
    v5 = FIELD_U32(dword_60C9A1E0, 532);
    if ( v5 >= 0x20 )
      v5 = 0;
    v2 = dword_60CC62E4;
    v6 = sub_60406440(dword_60C9A1E0 + 16 * v5 + 20, FIELD_U32(dword_60C9A1E0, 540));
    if ( FIELD_U32(dword_60C9A1E0, 532) < 0x20u )
      v4 = FIELD_U32(dword_60C9A1E0, 532);
    v7 = sub_60406450(dword_60C9A1E0 + 16 * v4 + 20, FIELD_U32(dword_60C9A1E0, 540));
    v8 = dword_60CC6D78;
    FIELD_U32(dword_60CC6D78, 412) = v6;
    FIELD_U32(v8, 424) = v7;
    sub_607F67E8(v2, a1, v6, v7);
    result = 589824;
  }
  FIELD_U32(v2, 108) = result;
  return result;
}
