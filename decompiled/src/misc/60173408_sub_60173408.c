/* sub_60173408
 * address: 0x60173408   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60173408(int a1, float *a2, float *a3)
{
  int result; // r0

  result = 1;
  if ( *a3 <= *a2 )
  {
    result = 6;
    if ( *a3 < *a2 )
      result = 0;
  }
  if ( *a2 < FIELD_F32(a1, 148) )
    return 6;
  if ( *a3 > FIELD_F32(a1, 160) )
    return 6;
  return result;
}
