/* sub_603F7878
 * address: 0x603F7878   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603F7878(int a1, int a2)
{
  qmemcpy((void *)a2, (const void *)a1, 0x7Bu);
  qmemcpy((void *)(a2 + 123), (const void *)(a1 + 123), 0x3Eu);
}
