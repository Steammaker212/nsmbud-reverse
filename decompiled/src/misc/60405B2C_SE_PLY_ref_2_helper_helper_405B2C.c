/* SE_PLY_ref_2_helper_helper_405B2C
 * address: 0x60405B2C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_ref_2_helper_helper_405B2C(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 16);
  if ( result )
  {
    if ( *(_DWORD *)(FIELD_U32(result, 4) + 164) == 6 )
    {
      (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(result + 4) + 84))(
        FIELD_U32(result, 4),
        232,
        1.0,
        0.0,
        0.0);
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(a1, 16) + 4) + 164))(*(_DWORD *)(FIELD_U32(a1, 16)
                                                                                                 + 4));
      FIELD_U8(a1, 2709) = 1;
      return 1;
    }
  }
  return result;
}
