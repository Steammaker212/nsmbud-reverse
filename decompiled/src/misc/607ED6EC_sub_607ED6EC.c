/* sub_607ED6EC
 * address: 0x607ED6EC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607ED6EC(int a1)
{
  int v1; // r5
  int v2; // r4
  _DWORD v4[6]; // [sp+8h] [bp-18h] BYREF

  v1 = dword_60CC6D78;
  v2 = dword_60CC62E4;
  v4[0] = 2;
  v4[1] = sub_603EA668;
  SceneMgr_doSceneChange(dword_60CC62E4, a1, (int)v4, 0, 0);
  FIELD_U32(v2, 108) = 131074;
  FIELD_U8(v1, 20) = 1;
  return sub_6082B7B0(dword_60CC6E04);
}
