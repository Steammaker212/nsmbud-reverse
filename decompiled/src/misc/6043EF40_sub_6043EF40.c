/* sub_6043EF40
 * address: 0x6043EF40   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043EF40(_DWORD *a1, int a2, void *a3)
{
  a1[5] = a2;
  a1[6] = *(_DWORD *)(sub_60871E18(a2) + 32);
  return sub_6043EB24(a1, a3);
}
