/* sub_600E56C8
 * address: 0x600E56C8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E56C8(int a1)
{
  int v2; // r0
  Vec3 v4; // [sp+4h] [bp-14h] BYREF

  v4.x = FIELD_F32(a1, 108);
  v4.y = FIELD_F32(a1, 112);
  v4.z = 4500.0;
  if ( FIELD_F32(a1, 6576) >= 4.25 )
    v2 = 1210;
  else
    v2 = 246;
  EffectData_create(v2, &v4, 0, 0);
  FIELD_U8(a1, 19) = 1;
  return 1;
}
