/* sub_6061BD0C
 * address: 0x6061BD0C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061BD0C(int a1, int a2)
{
  int v2; // r4
  int result; // r0

  v2 = FIELD_U32(a1, 144);
  result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  if ( (unsigned __int8)(FIELD_U8(result, 533) - 1) <= 1u )
  {
    result += 7128;
    *(float *)result = FIELD_F32(v2, 108) - FIELD_F32(v2, 584);
  }
  return result;
}
