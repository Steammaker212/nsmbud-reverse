/* sub_6047455C
 * address: 0x6047455C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047455C(int a1, unsigned int a2, float a3)
{
  unsigned int v3; // r2
  int *v4; // r0
  int result; // r0

  v3 = FIELD_U32(a1, 3508);
  v4 = *(int **)(a1 + 3512);
  if ( v3 > a2 )
    v4 += 5 * a2;
  result = *v4;
  FIELD_F32(result, 16) = a3;
  return result;
}
