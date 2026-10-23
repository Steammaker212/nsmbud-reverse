/* sub_6057A460
 * address: 0x6057A460   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057A460(StageActor *a1)
{
  int result; // r0
  float y; // r1
  Vec3 v4; // [sp+0h] [bp-18h] BYREF

  result = sub_60003AE0(a1);
  if ( result == 1 )
  {
    y = FIELD_F32(a1, 0x70);
    v4.x = FIELD_F32(a1, 0x6C);
    v4.y = y + 8.0;
    v4.z = 4500.0;
    EffectData_create(1233, &v4, 0, (int)&FIELD_U32(a1, 0x90));
    FIELD_U8(a1, 0x13) = 1;
    return 1;
  }
  return result;
}
