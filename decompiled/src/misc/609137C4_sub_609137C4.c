/* sub_609137C4
 * address: 0x609137C4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609137C4(int result, char a2)
{
  int v2; // r1
  int v3; // r4
  int v4; // r2
  int v5; // r3
  unsigned int v6; // r1

  v2 = a2 & 0x3F;
  v3 = FIELD_U32(result, 420);
  v4 = v2 - 32;
  v5 = 1 << v2;
  v6 = 1u >> (32 - v2);
  if ( v4 >= 0 )
  {
    v5 = 0;
    v6 = 1 << v4;
  }
  FIELD_U32(result, 416) |= v5;
  FIELD_U32(result, 420) = v3 | v6;
  return result;
}
