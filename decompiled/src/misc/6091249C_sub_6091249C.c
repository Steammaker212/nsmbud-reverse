/* sub_6091249C
 * address: 0x6091249C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091249C(int a1, void (__fastcall ***a2)(_DWORD, int *, int), int a3)
{
  int v5; // [sp+4h] [bp-Ch] BYREF

  v5 = 0;
  (**a2)(a2, &v5, 4);
  return ((int (__fastcall *)(int))off_60C5CAFC[(a3 ^ 1) + 4])(v5);
}
