/* sub_605B9E3C
 * address: 0x605B9E3C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_605B9E3C(int a1, float *a2)
{
  _BYTE *result; // r0
  float WrappedXPos; // s0
  float v5; // s18
  float v6; // s16
  ActorBuildInfo v7; // [sp+8h] [bp-50h] BYREF

  result = (_BYTE *)FIELD_U8(EnemyCounterMaybe_instance, 262);
  if ( !FIELD_U8(EnemyCounterMaybe_instance, 262) )
  {
    WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, *a2);
    v5 = a2[1];
    v6 = WrappedXPos;
    TileMgr_setTile(TileMgr_instance, (unsigned int)WrappedXPos, (unsigned int)(float)-v5, 0, 0);
    memset(&v7, 0, 40);
    v7.profile = Profile__get(0x142u);
    v7.position.x = v6;
    v7.position.y = v5;
    v7.position.z = 400.0;
    v7.field_20 = 0;
    v7.eventId1 = 0;
    v7.eventId2 = 0;
    v7.field_28 = 0;
    return ActorMgr__create((void *)ActorMgr__instance, &v7, 1);
  }
  return result;
}
