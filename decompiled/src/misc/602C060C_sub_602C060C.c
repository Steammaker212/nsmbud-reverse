/* sub_602C060C
 * address: 0x602C060C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C060C(_DWORD **a1)
{
  int v2; // r5
  int result; // r0

  v2 = (*(int (__fastcall **)(_DWORD *))(*a1[1524] + 8))(a1[1524]);
  result = (*(int (**)(void))(dword_60C9149C + 8))();
  if ( v2 != result )
    return ((int (__fastcall *)(_DWORD **))(*a1)[165])(a1);
  return result;
}
