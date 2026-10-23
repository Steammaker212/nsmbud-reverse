/* sub_600A6970
 * address: 0x600A6970   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A6970(int a1)
{
  int *v1; // r0
  int v2; // t1
  int *v3; // r1
  int v4; // r1
  int v5; // r0
  unsigned int v6; // r1
  int *v7; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 7096);
  v1 = (int *)(a1 + 7096);
  v3 = *(int **)(v2 + 28);
  if ( FIELD_U32(v2, 24) > 1u )
    ++v3;
  v4 = *v3;
  FIELD_U32(v4, 20) = 0;
  FIELD_U32(v4, 28) |= 2u;
  v5 = *v1;
  v6 = FIELD_U32(v5, 24);
  v7 = *(int **)(v5 + 28);
  if ( v6 > 1 )
    ++v7;
  result = *v7;
  FIELD_U32(result, 24) = 0;
  return result;
}
