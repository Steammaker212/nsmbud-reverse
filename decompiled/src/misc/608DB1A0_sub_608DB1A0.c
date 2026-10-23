/* sub_608DB1A0
 * address: 0x608DB1A0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608DB1A0(int a1, _DWORD *a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r4
  int v8; // r7

  v7 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619898832 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v8 = (int)(v7 + 48);
  if ( !(**v7)(v7, &dword_60CC6AE4) )
    v8 = 192;
  return *(_BYTE *)v8 && sub_608AD1B0(a1 + 8, a2, a3, 0) == 0;
}
