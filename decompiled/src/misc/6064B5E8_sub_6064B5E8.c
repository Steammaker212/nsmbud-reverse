/* sub_6064B5E8
 * address: 0x6064B5E8   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064B5E8(int a1, _DWORD *a2)
{
  char v2; // r12
  int v4; // r5
  _DWORD *v5; // r7
  int v6; // r6
  _BYTE *v7; // r0
  int v8; // r1
  _BYTE *v10; // [sp+8h] [bp-28h]

  v4 = 0;
  *a2 = 0;
  v5 = *(_DWORD **)(a1 + 6360);
  if ( v5 )
  {
    v4 = 0;
    v10 = (_BYTE *)(a1 + 7442);
    do
    {
      if ( *v5 )
      {
        v6 = *(_DWORD *)(*v5 + 2196);
        if ( (unsigned int)FIELD_U8(v6, 533) - 1 <= 1 )
        {
          if ( ((unsigned int)&dword_60C7B37C & ~(1617213056 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          ++v4;
          if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) == 1 )
          {
            v7 = (_BYTE *)(v6 + 6900);
            if ( !*v10 && (*v7 & 2) != 0 )
              *a2 |= 1u;
            v8 = *(_DWORD *)v7;
            if ( (*(_DWORD *)v7 & 0x20) != 0 )
            {
              *a2 |= 2u;
              v8 = *(_DWORD *)v7;
            }
            if ( (v8 & 0x40) != 0 )
              *a2 |= 4u;
          }
        }
      }
      v5 = (_DWORD *)v5[1];
    }
    while ( v5 );
  }
  return v4;
}
