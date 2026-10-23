/* sub_602BFC2C
 * address: 0x602BFC2C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BFC2C(int a1)
{
  int v2; // r5
  int result; // r0

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C9149C + 8))();
  if ( v2 != result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 660))(a1);
    FIELD_U32(a1, 88) = 1078774989;
    return 1078774989;
  }
  return result;
}
