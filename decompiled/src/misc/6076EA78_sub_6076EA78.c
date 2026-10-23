/* sub_6076EA78
 * address: 0x6076EA78   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076EA78(int a1)
{
  EffectData *v2; // r4
  signed int v3; // r1
  int result; // r0

  v2 = (EffectData *)(a1 + 10560);
  v3 = sub_60235E50(a1 + 10560);
  result = 0;
  if ( v3 == 1 )
  {
    EffectData_update(v2, (Vec3 *)(a1 + 10624), 0, 0);
    return 1;
  }
  return result;
}
