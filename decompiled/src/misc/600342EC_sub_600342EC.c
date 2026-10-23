/* sub_600342EC
 * address: 0x600342EC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600342EC(int a1, int a2)
{
  int result; // r0

  result = FIELD_U32(a1, 64);
  if ( result && *(_BYTE *)(FIELD_U32(a2, 64) + 533) != 1 )
  {
    result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)result + 196))(result, a1, a2);
    if ( result == 1 )
    {
      result = FIELD_U8(a1, 110) | 2;
      FIELD_U8(a1, 110) = result;
    }
  }
  return result;
}
