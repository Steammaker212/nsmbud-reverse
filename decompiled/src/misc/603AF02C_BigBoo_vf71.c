/* BigBoo_vf71
 * address: 0x603AF02C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BigBoo_vf71(int a1, int a2, int a3)
{
  char v3; // r12
  int v6; // r6
  int v7; // r7

  v6 = FIELD_U32(a3, 64);
  if ( ((unsigned int)&dword_60C7B374 & ~(1614475340 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  v7 = 0;
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B370) == 1 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1156))(v6) )
      return 1;
    if ( FIELD_U32(a3, 136) != 15 )
    {
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 1164))(v6, a2, a3);
      return 1;
    }
  }
  return v7;
}
