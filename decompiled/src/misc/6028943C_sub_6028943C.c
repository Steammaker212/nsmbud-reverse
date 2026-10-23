/* sub_6028943C
 * address: 0x6028943C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028943C(int a1)
{
  CollisionMgr *v2; // r5
  int *v3; // r4
  _DWORD *v4; // t1
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  CollisionMgr_Sensor v10; // [sp+0h] [bp-28h] BYREF

  v2 = (CollisionMgr *)(a1 + 648);
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1094713344;
  FIELD_U32(a1, 312) = 1094713344;
  FIELD_U32(a1, 316) = 1094713344;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFDEFC, 2);
  CollisionMgr_setSensor(v2, &stru_60AFDF08, 0);
  v10.b = 28.0;
  v10.a = 12.0;
  v10.c = -16.0;
  CollisionMgr_setSensor(v2, &v10, 1);
  v4 = *(_DWORD **)(a1 + 6300);
  v3 = (int *)(a1 + 6300);
  sub_60421938(v4, v3[1], (int)&dword_60C8F19C);
  v5 = *(_DWORD *)(*v3 + 12);
  v6 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*v3 + 12);
  v8 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  *((_BYTE *)v3 + 306) = 2;
  *((float *)v3 - 1545) = (float)-byte_60AFE3F4[*(v3 - 1555)];
  *(v3 - 1544) = 0x40000000;
  *((_BYTE *)v3 + 307) = 1;
  *((_BYTE *)v3 + 305) = 0;
  return -6176;
}
