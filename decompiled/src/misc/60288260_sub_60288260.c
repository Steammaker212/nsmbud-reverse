/* sub_60288260
 * address: 0x60288260   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60288260(int a1)
{
  __int64 v2; // r8
  CollisionMgr *v3; // r5
  int v4; // r7
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  CollisionMgr_Sensor v10; // [sp+0h] [bp-30h] BYREF

  LODWORD(v2) = 0;
  FIELD_U8(a1, 6609) = 1;
  v3 = (CollisionMgr *)(a1 + 648);
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1094713344;
  FIELD_U32(a1, 312) = 1094713344;
  FIELD_U32(a1, 316) = 1094713344;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFDEFC, 2);
  CollisionMgr_setSensor(v3, &stru_60AFDF08, 0);
  v10.b = 28.0;
  v10.a = 12.0;
  v10.c = -16.0;
  CollisionMgr_setSensor(v3, &v10, 1);
  if ( FIELD_U8(a1, 6606) != 4 )
  {
    v4 = a1 + 6300;
    sub_60421938(*(_DWORD **)(a1 + 6300), FIELD_U32(a1, 6304), (int)&dword_60C8F1AC);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
    v6 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v6 )
      v5 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
    v7 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = 1058642330;
    FIELD_U8(a1, 6606) = 4;
  }
  HIDWORD(v2) = 0x40000000;
  FIELD_U64(a1, 120) = v2;
  FIELD_U8(a1, 6607) = 1;
  FIELD_U16(a1, 6604) = 0;
  return 6604;
}
