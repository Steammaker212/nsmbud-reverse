/* sub_602B825C
 * address: 0x602B825C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602B825C(int a1, int a2, int a3)
{
  char v3; // r12
  char *v7; // r5
  unsigned int v8; // r0

  if ( FIELD_U32(a3, 136) != 15 )
  {
    v7 = *(char **)(a3 + 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613464204 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v7 )
    {
      if ( (**(int (__fastcall ***)(char *, int *))v7)(v7, &dword_60C7B378) == 1 )
      {
        (*(void (__fastcall **)(char *, int, int))(*(_DWORD *)v7 + 1164))(v7, a2, a3);
        if ( (v7[1217] & 1) != 0 )
        {
          v8 = v7[84];
          if ( v8 <= 3 )
            *(_WORD *)(a1 + 2 * v8 + 6140) = 32;
        }
      }
    }
  }
}
