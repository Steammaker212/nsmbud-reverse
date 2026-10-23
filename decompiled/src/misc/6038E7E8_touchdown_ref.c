/* touchdown_ref
 * address: 0x6038E7E8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall touchdown_ref(int a1)
{
  float v2; // r1
  int v3; // r0
  int v4; // r0
  Vec3 v6; // [sp+Ch] [bp-14h] BYREF

  sub_60421AD4(FIELD_U32(a1, 6300));
  v2 = FIELD_F32(a1, 112);
  v6.x = FIELD_F32(a1, 6328);
  v6.y = v2;
  v6.z = 4500.0;
  v3 = FIELD_U8(a1, 5957);
  if ( v3 == 1 )
  {
    v4 = 876;
  }
  else if ( v3 == 2 )
  {
    v4 = 875;
  }
  else
  {
    v4 = 874;
  }
  return EffectData_create(v4, &v6, 0, 0);
}
