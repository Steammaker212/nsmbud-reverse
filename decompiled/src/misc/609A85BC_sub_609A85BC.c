/* sub_609A85BC
 * address: 0x609A85BC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A85BC(int a1, int a2)
{
  int v2; // lr
  int v3; // r4
  int v4; // r3
  int v5; // r2
  int result; // r0
  int v7; // r3

  v2 = FIELD_U32(a1, 176);
  v3 = FIELD_U32(a2, 4);
  v4 = 1;
  v5 = 1;
  if ( v3 >> v2 > 1 )
    v4 = v3 >> v2;
  FIELD_U32(a2, 4) = v4;
  result = FIELD_U32(a1, 176);
  v7 = FIELD_U32(a2, 8);
  if ( v7 >> result > 1 )
    v5 = v7 >> result;
  FIELD_U32(a2, 8) = v5;
  return result;
}
