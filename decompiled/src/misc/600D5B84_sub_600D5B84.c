/* sub_600D5B84
 * address: 0x600D5B84   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D5B84(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r4
  void (__fastcall ***v5)(_DWORD, int *); // r5
  int v6; // r0

  v4 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
  v5 = *(void (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C8439C & ~(1611488160 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8439C) )
  {
    dword_60C84398 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C8439C);
  }
  if ( v5 )
    (**v5)(v5, &dword_60C84398);
  if ( ((unsigned int)&dword_60C823D4 & ~(1611488268 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C823D4) )
  {
    dword_60C823D0 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C823D4);
  }
  if ( v4 )
  {
    v6 = (**v4)(v4, &dword_60C823D0);
    if ( v6 )
      v6 = (int)v4;
  }
  else
  {
    v6 = 0;
  }
  SE_OBJ_PNGN_ICEBALL_DISAPP_ref(v6);
  return 1;
}
