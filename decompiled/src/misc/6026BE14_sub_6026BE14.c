/* sub_6026BE14
 * address: 0x6026BE14   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026BE14(int a1, Vec3 *a2)
{
  int v2; // r0

  if ( FIELD_U32(a1, 6316) == 1 )
    v2 = 571;
  else
    v2 = 568;
  return EffectData_create(v2, a2, 0, 0);
}
