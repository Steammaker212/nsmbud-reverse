/* sub_60857344
 * address: 0x60857344   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60857344(int a1, int a2, int a3)
{
  int result; // r0

  result = FIELD_U32(a1, 12);
  if ( result )
  {
    sub_60853FDC(a2, a1);
    (*(void (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 12) + 80))(FIELD_U32(a1, 12), a2, a3);
    return sub_60854010(a2);
  }
  return result;
}
