/* sub_60393CE8
 * address: 0x60393CE8   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60393CE8(int a1)
{
  int v2; // r0
  int v3; // r1
  _DWORD *v4; // r5
  int v5; // r4
  _DWORD *v6; // t1
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  CollisionMgr_Sensor v11; // [sp+0h] [bp-20h] BYREF

  v2 = FIELD_U32(a1, 6384);
  FIELD_U32(a1, 6316) = v2;
  FIELD_U32(a1, 88) = v2;
  FIELD_U32(a1, 124) = FIELD_U32(a1, 6388);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B008D0, 3);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B009A8, 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B009B4, 0);
  v11.b = 4.0;
  v11.a = 2.0;
  v11.c = -14.0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v11, 1);
  CollisionMgr_vf14(a1 + 648);
  v3 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0x90000800;
  FIELD_U32(a1, 3184) = v3 | 0x90000800;
  FIELD_U32(a1, 3192) |= 0x90000800;
  v4 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) != 15 )
  {
    *v4 = 15;
    v6 = *(_DWORD **)(a1 + 6304);
    v5 = a1 + 6304;
    sub_60421938(v6, *(_DWORD *)(v5 - 4), (int)&dword_60C97018);
    v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = dword_60C96F28[4 * *v4 + 2];
    v9 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v10 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v10 )
      v9 += 4 * v10;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), dword_60C96F28[4 * *v4 + 3]);
  }
}
