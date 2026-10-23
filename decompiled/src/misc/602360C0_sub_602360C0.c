/* sub_602360C0
 * address: 0x602360C0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602360C0(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r0

  v4 = FIELD_U32(a1, 52);
  result = a1 + 52;
  v3 = v4;
  if ( v4 && FIELD_U32(a1, 56) == FIELD_U32(v3, 32) )
  {
    v5 = sub_60881DE8(result);
    if ( FIELD_S32(v5, 352) >= 1 )
    {
      if ( FIELD_U8(v5, 8) )
        sub_60881D68();
    }
    FIELD_U32(a1, 52) = 0;
    FIELD_U32(a1, 56) = -1;
    return 0;
  }
  return result;
}
