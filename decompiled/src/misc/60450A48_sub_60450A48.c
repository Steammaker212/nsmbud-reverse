/* sub_60450A48
 * address: 0x60450A48   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60450A48(int a1, _DWORD *a2, int a3, int a4, unsigned int a5)
{
  unsigned int v5; // r12
  int v7; // [sp+0h] [bp-18h]

  v5 = a5;
  if ( a5 >= 0xC )
    v5 = 0;
  return sub_604504CC(
           *(_DWORD *)(a1 + 4 * v5 + 16),
           a2,
           a3,
           a4,
           v7,
           *(_DWORD *)(*(_DWORD *)(a1 + 4 * v5 + 16) + 36),
           *(_DWORD *)(*(_DWORD *)(a1 + 4 * v5 + 16) + 40));
}
