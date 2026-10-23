/* sub_6022A7E4
 * address: 0x6022A7E4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022A7E4(int (__fastcall ****a1)(_DWORD, int *), int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v5; // r6
  int v6; // r0

  v3 = *a1;
  if ( ((unsigned int)&dword_60C80400 & ~(1612883968 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  v5 = (int)(v3 + 17);
  if ( !(**v3)(v3, &dword_60C803FC) )
    v5 = 68;
  v6 = *(_DWORD *)(**(_DWORD **)v5 + 16);
  if ( v6 )
    return *(_DWORD *)(v6 + 16 * *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)v5 + 8) + 96 * a2 + 42) + 32) + 2;
  else
    return 0;
}
