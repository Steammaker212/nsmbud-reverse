/* sub_6039336C
 * address: 0x6039336C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6039336C(int a1)
{
  float v2; // r1
  float v3; // r2
  int *result; // r0
  Vec3 v5; // [sp+8h] [bp-20h] BYREF

  sub_6039AF5C(a1, 0, 0.0);
  if ( FIELD_U8(a1, 2992) )
  {
    if ( !FIELD_U8(a1, 2996) )
      goto LABEL_8;
  }
  else if ( FIELD_U8(a1, 3000) )
  {
    goto LABEL_8;
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
LABEL_8:
  if ( FIELD_U8(a1, 6520)
    || FIELD_S16(a1, 6338) > 0
    || FIELD_S16(a1, 6340) > 0
    || (FIELD_U32(a1, 6408) | 4) == 6 )
  {
    v2 = FIELD_F32(a1, 112);
    v3 = FIELD_F32(a1, 116);
    v5.x = FIELD_F32(a1, 108);
    v5.y = v2;
    v5.z = v3;
    EffectWrapper_update((EffectWrapper *)(a1 + 12672), 597, &v5, 0, 0);
  }
  result = (int *)sub_6039B5BC(a1);
  if ( result == (int *)1 )
  {
    FIELD_U32(a1, 6392) = &dword_60C97200;
    return &dword_60C97200;
  }
  return result;
}
