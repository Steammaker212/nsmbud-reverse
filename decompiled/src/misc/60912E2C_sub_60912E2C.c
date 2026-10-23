/* sub_60912E2C
 * address: 0x60912E2C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60912E2C(int result, signed int a2, int a3)
{
  int v4; // r5
  __int64 v5; // r0
  int v6; // r1

  v4 = result;
  if ( a2 >= 1 )
  {
    v5 = 4LL * (unsigned int)a2;
    if ( !is_mul_ok(4u, a2) )
      HIDWORD(v5) = 1;
    if ( HIDWORD(v5) )
      LODWORD(v5) = -1;
    v6 = operator_new_8DE2C8(v5, a3, 4);
    FIELD_U32(v4, 48) = v6;
    return nn__os__InitializeMessageQueue(v4, v6, a2);
  }
  return result;
}
