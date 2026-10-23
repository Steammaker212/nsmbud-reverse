/* sub_6092889C
 * address: 0x6092889C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092889C(int result, signed int a2, int a3)
{
  int v4; // r4
  __int64 v5; // r0

  v4 = result;
  if ( a2 >= 1 )
  {
    v5 = 12LL * (unsigned int)a2;
    if ( !is_mul_ok(0xCu, a2) )
      HIDWORD(v5) = 1;
    if ( HIDWORD(v5) )
      LODWORD(v5) = -1;
    result = sub_608DE334(v5, a3, 4);
    if ( result )
    {
      FIELD_U32(v4, 268) = a2;
      FIELD_U32(v4, 272) = result;
    }
  }
  return result;
}
