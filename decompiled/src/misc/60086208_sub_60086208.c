/* sub_60086208
 * address: 0x60086208   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60086208(int a1)
{
  CollisionMgr *v2; // r5
  CollisionMgr_Sensor v3; // [sp+0h] [bp-20h] BYREF

  FIELD_U32(a1, 156) = 0x80000000;
  FIELD_U32(a1, 304) = 0;
  v2 = (CollisionMgr *)(a1 + 648);
  FIELD_U32(a1, 308) = 1092616192;
  FIELD_U32(a1, 312) = 1092616192;
  FIELD_U32(a1, 316) = 1092616192;
  FIELD_U32(a1, 320) = 1;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1094713344;
  FIELD_U32(a1, 6844) = 1094713344;
  FIELD_U32(a1, 6848) = 1094713344;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF55A0, 2);
  CollisionMgr_setSensor(v2, &stru_60AF55AC, 0);
  v3.b = 10.0;
  v3.a = 10.0;
  v3.c = -8.0;
  CollisionMgr_setSensor(v2, &v3, 1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
  CollisionMgr_setSensor(v2, &stru_60AF55B8, 3);
}
