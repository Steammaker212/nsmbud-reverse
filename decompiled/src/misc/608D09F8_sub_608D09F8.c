/* sub_608D09F8
 * address: 0x608D09F8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608D09F8(int *a1, int a2)
{
  bool v2; // cc
  float result; // s0

  v2 = a2 <= 0;
  result = 0.0;
  if ( a2 >= 0 )
    v2 = *a1 <= a2;
  if ( !v2 )
    return *(float *)&a1[a2 + 1];
  return result;
}
