/* sub_6026BDC0
 * address: 0x6026BDC0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026BDC0(int a1)
{
  Vec3 *v1; // r1
  int v2; // r0

  v1 = (Vec3 *)(a1 + 108);
  if ( FIELD_U32(a1, 6316) == 1 )
    v2 = 565;
  else
    v2 = 564;
  return EffectData_create(v2, v1, 0, 0);
}
