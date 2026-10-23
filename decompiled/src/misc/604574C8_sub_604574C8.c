/* sub_604574C8
 * address: 0x604574C8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604574C8(int result, int a2, int a3)
{
  bool v3; // zf
  char v4; // r2
  int v5; // r1
  char v6; // r1

  if ( a2 != 1 )
  {
    v3 = a3 == 0;
    v4 = FIELD_U8(result, 2597);
    v5 = 1 << a2;
    if ( v3 )
      v6 = v4 & ~(_BYTE)v5;
    else
      v6 = v4 | v5;
    FIELD_U8(result, 2597) = v6;
  }
  return result;
}
