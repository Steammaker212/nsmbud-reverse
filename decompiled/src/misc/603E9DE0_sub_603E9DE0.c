/* sub_603E9DE0
 * address: 0x603E9DE0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int sub_603E9DE0()
{
  _DWORD v1[4]; // [sp+8h] [bp-10h] BYREF

  v1[0] = 2;
  v1[1] = sub_603EA668;
  return SceneMgr_doSceneChange(dword_60CC62E4, dword_60C99DD4, (int)v1, 0, 0);
}
