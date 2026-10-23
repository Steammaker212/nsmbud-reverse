/* sub_607F9684
 * address: 0x607F9684   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F9684(int a1)
{
  int v2; // r5

  v2 = a1 + 760;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  sub_609580C8(dword_60CD0B40, v2);
  return sub_609580C8(dword_60CD0B40, a1 + 828);
}
