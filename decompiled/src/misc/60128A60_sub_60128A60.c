/* sub_60128A60
 * address: 0x60128A60   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60128A60(int a1)
{
  CollisionMgr *v1; // r4
  CollisionMgr_Sensor v2; // [sp+0h] [bp-18h] BYREF

  v1 = (CollisionMgr *)(a1 + 648);
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1094713344;
  FIELD_U32(a1, 312) = 1094713344;
  FIELD_U32(a1, 316) = 1094713344;
  FIELD_U32(a1, 320) = 0;
  FIELD_U32(a1, 6844) = 1099956224;
  FIELD_U32(a1, 6848) = 1101004800;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1101004800;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF640C, 3);
  CollisionMgr_setSensor(v1, &stru_60AF6418, 2);
  CollisionMgr_setSensor(v1, &stru_60AF6424, 0);
  v2.b = 16.0;
  v2.a = 16.0;
  v2.c = -20.0;
  CollisionMgr_setSensor(v1, &v2, 1);
}
