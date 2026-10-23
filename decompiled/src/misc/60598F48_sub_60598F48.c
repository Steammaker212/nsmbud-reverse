/* sub_60598F48
 * address: 0x60598F48   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60598F48(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r1
  unsigned int *v5; // r4
  int v6; // t1
  unsigned int v7; // r2

  result = sub_605DC144();
  if ( result == 1 )
  {
    v3 = sub_605DBDAC(a1);
    if ( v3 )
    {
      v4 = FIELD_U32(v3, 6900);
      if ( (v4 & 1) != 0 || FIELD_U32(v3, 1216) & 0x1000000 | v4 & 0x40000 )
        FIELD_U8(a1, 13476) = 1;
    }
    v6 = FIELD_U32(a1, 6264);
    v5 = (unsigned int *)(a1 + 6264);
    result = v6;
    v7 = v6 & 0xFFFFFFFD;
    if ( (*(v5 - 1) & 0x20000) != 0 )
      v7 = result | 2;
    *v5 = v7;
  }
  return result;
}
