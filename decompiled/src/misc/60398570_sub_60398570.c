/* sub_60398570
 * address: 0x60398570   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60398570(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  float v8; // r1
  float v9; // r2
  int *result; // r0
  Vec3 v11; // [sp+8h] [bp-28h] BYREF

  sub_6039AF5C(a1, 0, 0.0);
  v2 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) == 25 && (FIELD_U8(a1, 6321) & 1) != 0 )
  {
    *v2 = 4;
    v3 = a1 + 6304;
    sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&dword_60C96F68);
    v4 = *(_DWORD *)(FIELD_U32(a1, 6304) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6304) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > v5 )
      v4 += 4 * v5;
    *(_DWORD *)(*(_DWORD *)v4 + 24) = dword_60C96F28[4 * *v2 + 2];
    v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
      v6 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), dword_60C96F28[4 * *v2 + 3]);
  }
  if ( FIELD_U8(a1, 2992) )
  {
    if ( !FIELD_U8(a1, 2996) )
      goto LABEL_15;
  }
  else if ( FIELD_U8(a1, 3000) )
  {
    goto LABEL_15;
  }
  if ( FIELD_F32(a1, 124) <= 0.0 )
  {
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B008D0, 3);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 2);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 0);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 1);
    CollisionMgr_vf14(a1 + 648);
    CollisionActor__sub_600034C8((CollisionActor *)a1);
    if ( sub_60003460(a1) == 1 )
      FIELD_U32(a1, 6320) |= 1u;
  }
LABEL_15:
  if ( FIELD_U8(a1, 6520)
    || FIELD_S16(a1, 6338) > 0
    || FIELD_S16(a1, 6340) > 0
    || (FIELD_U32(a1, 6408) | 4) == 6 )
  {
    v8 = FIELD_F32(a1, 112);
    v9 = FIELD_F32(a1, 116);
    v11.x = FIELD_F32(a1, 108);
    v11.y = v8;
    v11.z = v9;
    EffectWrapper_update((EffectWrapper *)(a1 + 12672), 597, &v11, 0, 0);
  }
  result = (int *)sub_6039B5BC(a1);
  if ( result == (int *)1 )
  {
    FIELD_U32(a1, 6392) = &dword_60C97640;
    return &dword_60C97640;
  }
  return result;
}
