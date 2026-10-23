/* sub_6022E718
 * address: 0x6022E718   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022E718(int a1, float a2)
{
  int v2; // r1
  unsigned int v3; // r0
  unsigned int v4; // r2
  int *v5; // r1
  int result; // r0

  v2 = FIELD_U32(a1, 8);
  v3 = FIELD_U32(a1, 32);
  v4 = FIELD_U32(v2, 24);
  v5 = *(int **)(v2 + 28);
  if ( v4 > v3 )
    v5 += v3;
  result = *v5;
  *(float *)(*v5 + 24) = a2;
  return result;
}
