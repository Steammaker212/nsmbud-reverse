/* sub_6078F2B0
 * address: 0x6078F2B0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078F2B0(int a1)
{
  int result; // r0
  unsigned int v2; // r1
  int *v3; // r0

  result = FIELD_U32(a1, 292);
  if ( result )
  {
    v2 = FIELD_U32(result, 16);
    v3 = *(int **)(result + 20);
    if ( v2 > 1 )
      ++v3;
    result = *v3;
    FIELD_F32(result, 20) = FIELD_F32(result, 8) + -1.0;
    FIELD_U32(result, 28) |= 2u;
  }
  return result;
}
