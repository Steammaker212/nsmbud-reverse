/* sub_6044F858
 * address: 0x6044F858   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044F858(_DWORD *a1)
{
  a1[215] = 0;
  a1[235] = 0;
  a1[214] = (a1[214] + 1) % 2;
  return memset(a1 + 237, 0, 300);
}
