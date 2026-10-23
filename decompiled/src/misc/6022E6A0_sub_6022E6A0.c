/* sub_6022E6A0
 * address: 0x6022E6A0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022E6A0(int a1, float a2)
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
  FIELD_F32(result, 20) = a2;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
