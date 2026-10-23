/* sub_607AE618
 * address: 0x607AE618   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AE618(_DWORD *a1)
{
  a1[303] &= ~0x80000u;
  a1[306] &= 0xFFFFDBFB;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1092))(a1);
  a1[3250] = 30;
  sub_607AE4BC((int)a1);
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 1092))(a1);
}
