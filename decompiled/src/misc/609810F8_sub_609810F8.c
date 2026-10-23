/* sub_609810F8
 * address: 0x609810F8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609810F8(int result, int a2)
{
  int v2; // r4
  int v4; // r6
  int v5; // r5
  int i; // r4

  v2 = result;
  v4 = FIELD_U32(result, 64);
  if ( v4 )
  {
    result = sub_608502F4(FIELD_U32(result, 64), 0);
    FIELD_U32(v4, 44) = 0;
  }
  if ( a2 == 1 )
  {
    v5 = v2 + 40;
    for ( i = FIELD_U32(v2, 44); i != v5; i = FIELD_U32(i, 4) )
      result = sub_609810F8(FIELD_U32(i, 8), 1);
  }
  return result;
}
