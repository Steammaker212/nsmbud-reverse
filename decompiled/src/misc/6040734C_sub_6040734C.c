/* sub_6040734C
 * address: 0x6040734C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040734C(int a1)
{
  int v1; // r2
  int v2; // r1
  int v3; // r3
  bool v4; // zf

  v1 = 0;
  v2 = 1;
  while ( 1 )
  {
    v3 = a1 + 16 * v1;
    v4 = (FIELD_U8(v3, 20) & 4) == 0;
    if ( (FIELD_U8(v3, 20) & 4) == 0 )
      v4 = (FIELD_U8(v3, 36) & 4) == 0;
    if ( !v4 )
      break;
    v1 += 2;
    if ( v1 >= 32 )
      return 0;
  }
  return v2;
}
