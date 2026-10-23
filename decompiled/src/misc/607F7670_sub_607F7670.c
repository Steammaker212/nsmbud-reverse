/* sub_607F7670
 * address: 0x607F7670   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607F7670(int a1)
{
  int v1; // r4
  signed int result; // r0
  int v3[6]; // [sp+8h] [bp-18h] BYREF

  v3[0] = 2;
  v1 = dword_60CC62E4;
  v3[1] = (int)TitleScene_create;
  result = SceneMgr_doSceneChange(dword_60CC62E4, a1, v3, 0, 0);
  FIELD_U32(v1, 108) = 2;
  return result;
}
