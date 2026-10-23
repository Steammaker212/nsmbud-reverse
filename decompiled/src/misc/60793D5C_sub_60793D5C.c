/* sub_60793D5C
 * address: 0x60793D5C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60793D5C(int a1, float a2)
{
  int v2; // r0
  unsigned int v4; // r1
  int *v5; // r0
  int v6; // r4
  int result; // r0

  v2 = FIELD_U32(a1, 24);
  v4 = FIELD_U32(v2, 8);
  v5 = *(int **)(v2 + 12);
  if ( v4 > 1 )
    ++v5;
  v6 = *v5;
  sub_6041838C((ModelAnimation *)(*v5 + 4));
  FIELD_F32(v6, 20) = a2;
  result = FIELD_U32(v6, 28) | 2;
  FIELD_U32(v6, 28) = result;
  return result;
}
