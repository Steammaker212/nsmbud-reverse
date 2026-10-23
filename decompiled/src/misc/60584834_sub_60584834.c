/* sub_60584834
 * address: 0x60584834   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60584834(int a1, _BYTE *a2, int a3)
{
  char v3; // r12
  int v6; // r6

  if ( ((unsigned int)&dword_60C88A68 & ~(1616398416 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A68) )
  {
    dword_60C88A64 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60C88A68);
  }
  v6 = 0;
  if ( a2 )
  {
    if ( (**(int (__fastcall ***)(_BYTE *, int *))a2)(a2, &dword_60C88A64) == 1 )
    {
      if ( a2[7321] )
      {
        (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a2 + 192))(a2, &dword_60CB117C);
        v6 = 1;
        if ( (unsigned __int8)(FIELD_U8(a3, 533) - 1) <= 1u )
          sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6551));
      }
    }
  }
  return v6;
}
