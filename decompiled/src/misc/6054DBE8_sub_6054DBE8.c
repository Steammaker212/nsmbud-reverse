/* sub_6054DBE8
 * address: 0x6054DBE8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054DBE8(int result)
{
  unsigned int v1; // r1
  int v2; // r3
  int v3; // r1

  v1 = FIELD_U32(result, 3812);
  if ( v1 != 8 )
  {
    if ( v1 >= 8 )
      v1 = 0;
    v2 = FIELD_U32(result, 3768);
    v3 = *(_DWORD *)(result + 4 * v1 + 3648);
    FIELD_U32(v3, 48) = FIELD_U32(result, 3764);
    FIELD_U32(v3, 52) = v2;
    FIELD_U8(v3, 64) |= 0x10u;
  }
  FIELD_U8(result, 3816) = 1;
  return result;
}
