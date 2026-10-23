/* sub_60128B38
 * address: 0x60128B38   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60128B38(int a1)
{
  CollisionMgr *v1; // r4
  CollisionMgr_Sensor v2; // [sp+0h] [bp-18h] BYREF

  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1092616192;
  FIELD_U32(a1, 312) = 1092616192;
  FIELD_U32(a1, 316) = 1092616192;
  FIELD_U32(a1, 320) = 1;
  FIELD_U32(a1, 6844) = 1094713344;
  v1 = (CollisionMgr *)(a1 + 648);
  FIELD_U32(a1, 6848) = 1092616192;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1092616192;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF6430, 3);
  CollisionMgr_setSensor(v1, &stru_60AF643C, 2);
  CollisionMgr_setSensor(v1, &stru_60AF6448, 0);
  v2.b = 8.0;
  v2.a = 8.0;
  v2.c = -8.0;
  CollisionMgr_setSensor(v1, &v2, 1);
}
