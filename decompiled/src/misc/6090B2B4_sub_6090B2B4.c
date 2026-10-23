/* sub_6090B2B4
 * address: 0x6090B2B4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090B2B4(_DWORD *a1, void *a2)
{
  int v4; // r0

  v4 = operator_new_8DE25C(0x34u, a2, 4);
  a1[5] = sub_6091228C(v4);
  (*(void (__fastcall **)(_DWORD *, void *))(*a1 + 8))(a1, a2);
  return sub_609122C0(a1[5]);
}
