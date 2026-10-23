/* sub_6010BA3C
 * address: 0x6010BA3C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6010BA3C(int a1)
{
  CollisionMgr *v1; // r4
  CollisionMgr_Sensor v2; // [sp+0h] [bp-18h] BYREF

  v1 = (CollisionMgr *)(a1 + 648);
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1094713344;
  FIELD_U32(a1, 312) = 1094713344;
  FIELD_U32(a1, 316) = 1094713344;
  FIELD_U32(a1, 320) = 1;
  FIELD_U32(a1, 6844) = 1099956224;
  FIELD_U32(a1, 6848) = 1096810496;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1096810496;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF6250, 3);
  CollisionMgr_setSensor(v1, &stru_60AF625C, 2);
  CollisionMgr_setSensor(v1, &stru_60AF6268, 0);
  v2.b = 10.0;
  v2.a = 10.0;
  v2.c = -8.0;
  CollisionMgr_setSensor(v1, &v2, 1);
}
