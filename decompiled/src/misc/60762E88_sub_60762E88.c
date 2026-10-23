/* sub_60762E88
 * address: 0x60762E88   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60762E88(int a1, int a2)
{
  return (*(_DWORD *)(a1 + 4 * (*((int *)&unk_60AF2250 + a2) >> 5) + 6900)
        & (1 << (*((_DWORD *)&unk_60AF2250 + a2) & 0x1F))) != 0;
}
