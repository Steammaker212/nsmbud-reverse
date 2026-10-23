/* sub_6019EBE8
 * address: 0x6019EBE8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019EBE8(int a1)
{
  int v2; // r5
  int v3; // r0
  bool v4; // zf
  int v5; // r1
  int result; // r0

  v2 = sub_6019E7D8(a1);
  v3 = sub_6019E9D4(a1);
  v4 = v2 == 0;
  if ( v2 )
    v4 = v3 == 0;
  if ( !v4 )
  {
    v5 = FIELD_U32(v2, 240);
    FIELD_U32(v2, 240) = FIELD_U32(v3, 240);
    FIELD_U32(v3, 240) = v5;
  }
  result = sub_6019E9D4(a1);
  if ( result )
    return sub_6019D8CC(result);
  return result;
}
