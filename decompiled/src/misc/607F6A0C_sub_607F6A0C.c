/* sub_607F6A0C
 * address: 0x607F6A0C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F6A0C(int a1)
{
  char v1; // r12
  int *v2; // r0
  int v3; // r4
  int v4; // r5

  v2 = *(int **)(a1 + 104);
  v3 = 0;
  if ( v2 )
  {
    v4 = *v2;
    if ( ((unsigned int)&dword_60CC5E54 & ~(1618962996 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC5E54) )
    {
      dword_60CC5E50 = (int)&off_60C266E0;
      _cxa_guard_release(&dword_60CC5E54);
    }
    if ( v4 )
    {
      v3 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &dword_60CC5E50);
      if ( v3 )
        return v4;
    }
  }
  return v3;
}
