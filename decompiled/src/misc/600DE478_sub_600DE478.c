/* sub_600DE478
 * address: 0x600DE478   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600DE478(int a1)
{
  int v1; // r4
  CollisionMgr *v2; // r4
  int v3; // r2
  CollisionMgr_Sensor v4; // [sp+0h] [bp-18h] BYREF

  FIELD_U32(a1, 320) = 0;
  v1 = dword_60C84B7C;
  FIELD_U32(a1, 304) = dword_60C84B78;
  FIELD_U32(a1, 308) = v1;
  v2 = (CollisionMgr *)(a1 + 648);
  v3 = dword_60C84B84;
  FIELD_U32(a1, 312) = dword_60C84B80;
  FIELD_U32(a1, 316) = v3;
  FIELD_U32(a1, 6844) = 1082130432;
  FIELD_U32(a1, 6848) = 1094713344;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1094713344;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF5D74, 3);
  CollisionMgr_setSensor(v2, &stru_60AF5D80, 2);
  CollisionMgr_setSensor(v2, &stru_60AF5D8C, 0);
  v4.b = 10.0;
  v4.a = 10.0;
  v4.c = -8.0;
  CollisionMgr_setSensor(v2, &v4, 1);
}
