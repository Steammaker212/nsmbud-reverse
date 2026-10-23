/* sub_60847A04
 * address: 0x60847A04   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60847A04(int a1, int a2, int a3)
{
  int v5; // r6

  v5 = sub_60847FB8(a2, a3);
  ((void (__fastcall *)(int))loc_60847E2C)(a2);
  return ((int (__fastcall *)(_DWORD, int, int))loc_60847E7C)(FIELD_U32(a1, 8), a2, v5);
}
