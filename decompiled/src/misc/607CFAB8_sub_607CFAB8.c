/* sub_607CFAB8
 * address: 0x607CFAB8   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CFAB8(_DWORD *a1)
{
  a1[309] &= ~0x4000000u;
  *(_DWORD *)(a1[2842] + 208) &= ~0x40u;
  (*(void (__fastcall **)(_DWORD, float))(*(_DWORD *)a1[2842] + 92))(a1[2842], 0.0);
  sub_607D07EC(a1);
  a1[2864] = 30;
  a1[309] &= ~0x2000000u;
  a1[2855] = -1;
  return 11420;
}
