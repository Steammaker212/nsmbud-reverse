/* sub_60733E9C
 * address: 0x60733E9C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60733E9C(int a1)
{
  int v1; // r1
  int v2; // r0
  unsigned int v3; // r1
  int *v4; // r0
  int result; // r0

  FIELD_U8(a1, 6761) = 0;
  v1 = **(_DWORD **)(FIELD_U32(a1, 6100) + 20);
  FIELD_U32(v1, 20) = 0;
  FIELD_U32(v1, 28) |= 2u;
  v2 = FIELD_U32(a1, 6100);
  v3 = FIELD_U32(v2, 16);
  v4 = *(int **)(v2 + 20);
  if ( v3 > 1 )
    ++v4;
  result = *v4;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
