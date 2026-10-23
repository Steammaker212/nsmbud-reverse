/* sub_607ED658
 * address: 0x607ED658   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607ED658(int a1)
{
  int v1; // r4
  _DWORD v3[4]; // [sp+8h] [bp-10h] BYREF

  v1 = dword_60CC62E4;
  v3[0] = 2;
  v3[1] = sub_603FADF4;
  SceneMgr_doSceneChange(dword_60CC62E4, a1, (int)v3, 0, 0);
  FIELD_U32(v1, 108) = 131074;
  FIELD_U8(dword_60CC6D78, 20) = 1;
  return sub_6082B794(dword_60CC6E04);
}
