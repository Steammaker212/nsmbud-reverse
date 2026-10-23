/* sub_606BF62C
 * address: 0x606BF62C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_606BF62C(int a1)
{
  _BYTE *result; // r0
  int v3; // t1
  float v4; // s16
  float v5; // s18
  ActorBuildInfo v6; // [sp+4h] [bp-54h] BYREF

  v3 = FIELD_U8(a1, 6372);
  result = (_BYTE *)(a1 + 6372);
  if ( !v3 && FIELD_S32(EnemyCounterMaybe_instance, 932) >= 5 )
  {
    *result = 1;
    v4 = FIELD_F32(a1, 108);
    v5 = FIELD_F32(a1, 112);
    memset(&v6.settings2, 0, 36);
    v6.settings1 = (FIELD_U32(a1, 20) << 8) & 0x7000 | 0x20000000;
    v6.profile = Profile__get(0x1AAu);
    v6.position.x = v4 + -16.0;
    v6.position.y = v5 + 16.0;
    v6.position.z = 0.0;
    v6.field_20 = 0;
    v6.eventId1 = 0;
    v6.eventId2 = 0;
    v6.field_28 = 0;
    return ActorMgr__create((void *)ActorMgr__instance, &v6, 1);
  }
  return result;
}
