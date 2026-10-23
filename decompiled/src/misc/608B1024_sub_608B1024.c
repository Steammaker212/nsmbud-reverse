/* sub_608B1024
 * address: 0x608B1024   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1024(int a1, float a2)
{
  int result; // r0

  result = FIELD_U32(a1, 8);
  if ( result )
    FIELD_F32(result, 12) = a2;
  return result;
}
