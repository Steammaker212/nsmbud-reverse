/* sub_605CA700
 * address: 0x605CA700   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CA700(int a1)
{
  Vec3 v3; // [sp+4h] [bp-14h] BYREF

  v3.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v3.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v3.z = sub_600024C4(a1);
  EffectData_create(919, &v3, 0, 0);
  FIELD_U8(a1, 19) = 1;
  return 1;
}
