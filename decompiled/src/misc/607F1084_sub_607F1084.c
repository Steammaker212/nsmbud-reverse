/* sub_607F1084
 * address: 0x607F1084   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607F1084(int a1)
{
  _DWORD v2[4]; // [sp+8h] [bp-10h] BYREF

  v2[0] = 2;
  v2[1] = GameSetupScene_create;
  return SceneMgr_doSceneChange(dword_60CC62E4, a1, (int)v2, 131074, 0);
}
