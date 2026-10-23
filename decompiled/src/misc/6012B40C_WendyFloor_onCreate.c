/* WendyFloor_onCreate
 * address: 0x6012B40C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall WendyFloor_onCreate(float *a1)
{
  int v2; // r1
  int v3; // r2
  _DWORD v5[6]; // [sp+0h] [bp-58h] BYREF
  _DWORD v6[16]; // [sp+18h] [bp-40h] BYREF

  ice_wendy_ref((int)a1);
  v2 = *((_DWORD *)a1 + 28);
  v3 = *((_DWORD *)a1 + 29);
  a1[362] = a1[27];
  *((_DWORD *)a1 + 363) = v2;
  *((_DWORD *)a1 + 364) = v3;
  a1[27] = a1[27] + 0.0;
  a1[28] = a1[28] + 0.0;
  v6[0] = 1127219200;
  v6[1] = 1111490560;
  v6[2] = 1127219200;
  v6[3] = -1035993088;
  v6[4] = -1020264448;
  v6[5] = -1035993088;
  v6[6] = -1020264448;
  v6[7] = 1111490560;
  v6[8] = -1023410176;
  v6[9] = 0;
  v6[10] = 1124073472;
  memset(v5, 0, 16);
  v6[11] = 0;
  v5[4] = v6;
  v5[5] = 0;
  sub_60161E18((_DWORD *)a1 + 162, (int)a1, v5);
  ColliderBase_setSurfaceType((ColliderBase *)(a1 + 162), 1);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 162));
  WendyFloor_updateModel((StateActor *)a1);
  return 1;
}
