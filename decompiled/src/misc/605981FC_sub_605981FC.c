/* sub_605981FC
 * address: 0x605981FC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605981FC(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4
  int v4; // r5

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 144);
  if ( ((unsigned int)&dword_60C9D3DC & ~(1616478740 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3DC) )
  {
    dword_60C9D3D8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C9D3DC);
  }
  v4 = 0;
  if ( v3 && (**v3)(v3, &dword_60C9D3D8) == 1 )
  {
    sub_60597A20((int)v3);
    return 1;
  }
  return v4;
}
