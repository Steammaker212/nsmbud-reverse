/* sub_607F0184
 * address: 0x607F0184   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F0184(int a1)
{
  int v2; // r5

  v2 = dword_60CC6BF4;
  if ( !dword_60CC6BF4 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 104))(a1);
  sub_60819DCC(dword_60CC6BF4, a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 104))(a1);
  return sub_60819E3C(v2, a1);
}
