/* sub_60413E08
 * address: 0x60413E08   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int **__fastcall sub_60413E08(int a1)
{
  int v1; // r6
  int v2; // r4
  int v3; // r7
  int *v4; // r5
  int **result; // r0

  v1 = 61;
  v2 = a1 + 229608;
  v3 = FIELD_U32(a1, 229608);
  v4 = &dword_60C9A884;
  do
  {
    result = (int **)operator_new(4u);
    *result = v4;
    if ( v3 < FIELD_U32(v2, 4) )
    {
      *(_DWORD *)(FIELD_U32(v2, 8) + 4 * v3) = result;
      result = *(int ***)v2;
      v3 = *(_DWORD *)v2 + 1;
      *(_DWORD *)v2 = v3;
    }
    --v1;
    v4 += 19;
  }
  while ( v1 );
  return result;
}
