/* sub_609123D0
 * address: 0x609123D0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609123D0(int a1, void (__fastcall ***a2)(_DWORD, unsigned __int8 *, int), int a3)
{
  unsigned __int8 v5; // [sp+7h] [bp-9h] BYREF

  v5 = 0;
  (**a2)(a2, &v5, 1);
  return ((int (__fastcall *)(_DWORD))off_60C5CAFC[a3 ^ 1])(v5);
}
