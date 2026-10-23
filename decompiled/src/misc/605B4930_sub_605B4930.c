/* sub_605B4930
 * address: 0x605B4930   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605B4930(int a1, _BYTE *a2, int a3)
{
  int v5; // r4
  int v6; // r7
  char v7; // r12
  bool v8; // zf
  bool v9; // zf
  int v10; // r0
  int v11; // r1
  float v12; // s0

  v5 = FIELD_U32(a1, 144);
  v6 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a2 + 32))(a2);
  if ( ((unsigned int)&dword_60C7B384 & ~(1616595304 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
  {
    dword_60C7B380 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C7B384);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B380) == 1 )
  {
    v8 = (a2[2533] & 0x80) == 0;
    if ( (a2[2533] & 0x80) != 0 )
      v8 = (a2[2541] & 0x80) == 0;
    if ( !v8 )
    {
      v9 = (a2[2531] & 1) == 0;
      if ( (a2[2531] & 1) != 0 )
        v9 = (a2[2539] & 1) == 0;
      if ( v9 )
      {
        v10 = 6828;
        v11 = 1;
      }
      else
      {
        v12 = (float)(FIELD_F32(v5, 108) - FIELD_F32(v5, 584))
            - (float)(FIELD_F32(v6, 108) - FIELD_F32(v6, 584));
        if ( a3 )
        {
          if ( v12 > 0.0 )
            FIELD_U32(v5, 6824) = a3;
          return;
        }
        if ( v12 >= 0.0 )
          return;
        v10 = 6824;
        v11 = 0;
      }
      *(_DWORD *)(v5 + v10) = v11;
    }
  }
}
