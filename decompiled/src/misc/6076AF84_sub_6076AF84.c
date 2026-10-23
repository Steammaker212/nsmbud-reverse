/* sub_6076AF84
 * address: 0x6076AF84   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076AF84(int a1)
{
  const char *v1; // r1

  if ( (FIELD_U8(a1, 6902) & 4) != 0 )
    v1 = "SE_PLY_WATER_DOKAN_IN_OUT";
  else
    v1 = "SE_PLY_DOKAN_IN_OUT";
  return sub_607734E8(a1, (int)v1, 0, 0);
}
