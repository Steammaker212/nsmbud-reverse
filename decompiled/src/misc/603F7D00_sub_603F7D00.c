/* sub_603F7D00
 * address: 0x603F7D00   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F7D00(int a1, int a2)
{
  sub_603F7BC8(a1);
  qmemcpy((void *)a2, (const void *)a1, 0x960u);
  qmemcpy((void *)(a2 + 2400), (const void *)(a1 + 2400), 0x24u);
  return sub_603F7BC8(a1);
}
