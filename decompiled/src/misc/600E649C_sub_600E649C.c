/* sub_600E649C
 * address: 0x600E649C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600E649C(int a1)
{
  float *v1; // r0
  float result; // s0

  v1 = (float *)(a1 + 8212);
  result = *v1;
  if ( *v1 != 0.0 )
  {
    result = result + -1.0;
    *v1 = result;
  }
  return result;
}
