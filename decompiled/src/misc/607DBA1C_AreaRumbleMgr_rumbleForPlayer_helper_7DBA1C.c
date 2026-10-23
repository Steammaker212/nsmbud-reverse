/* AreaRumbleMgr_rumbleForPlayer_helper_7DBA1C
 * address: 0x607DBA1C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall AreaRumbleMgr_rumbleForPlayer_helper_7DBA1C(int a1, int a2, int *a3, int a4, int a5, int a6)
{
  int v6; // r12
  int v7; // lr
  int v8; // r4
  _DWORD v10[9]; // [sp+Ch] [bp-24h] BYREF

  v10[1] = 0;
  v10[2] = 0;
  v10[0] = 1;
  v6 = *a3;
  v7 = a3[1];
  v8 = a3[2];
  v10[6] = a3[3];
  v10[5] = v8;
  v10[4] = v7;
  v10[3] = v6;
  return sub_607DBA74(a1, a2, v10, a4, a5, a6);
}
