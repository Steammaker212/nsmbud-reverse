/* sub_605B348C
 * address: 0x605B348C   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B348C(int a1, _BYTE *a2)
{
  _BYTE *v4; // r6
  int v5; // r7
  char v6; // r12
  int v7; // r8
  int v8; // r0
  int v9; // r7
  char v10; // r9
  int v11; // r0
  int v12; // r0

  v4 = *(_BYTE **)(a1 + 144);
  v5 = (*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  if ( (unsigned __int8)(FIELD_U8(v5, 533) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60C7B384 & ~(1616590044 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
    if ( v4 )
    {
      v7 = (**(int (__fastcall ***)(_BYTE *, int *))v4)(v4, &dword_60C7B380);
      if ( v7 )
        v7 = (int)v4;
    }
    else
    {
      v7 = 0;
    }
    if ( ((unsigned int)&dword_60C7B37C & ~(1616590172 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v5 )
    {
      v8 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378);
      if ( v7 )
      {
        if ( v8 == 1 )
        {
          v9 = FIELD_S8(v5, 84);
          v10 = v9;
          if ( (unsigned __int8)v9 != 255 )
          {
            v11 = v9;
            if ( (unsigned __int8)v9 >= 4u )
              v11 = 0;
            *(_BYTE *)(v7 + 12 * v11 + 6916) = v9;
          }
          v4[552] = 1;
          (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v4 + 68))(v4, v9);
          v12 = *((_DWORD *)a2 + 638);
          if ( (v12 & 0x120) != 0 )
          {
            if ( (unsigned __int8)v9 >= 4u )
              v9 = 0;
            *(_BYTE *)(v7 + 12 * v9 + 6920) = v10;
            FIELD_U8(v7, 6845) = 2;
            v12 = *((_DWORD *)a2 + 638);
          }
          if ( (v12 & 0x40) != 0 && FIELD_U8(v7, 6876) && FIELD_U8(v7, 6845) == 2 )
          {
            *((_DWORD *)a2 + 556) |= 0x20u;
            FIELD_U32(v7, 6824) = 3;
          }
          if ( (a2[2557] & 0x80) != 0 )
          {
            *((_DWORD *)a2 + 556) |= 0x20u;
            FIELD_U8(v7, 6841) = 1;
            FIELD_U32(v7, 6824) = 3;
          }
        }
      }
    }
  }
  sub_605B30EC(a1, (int)a2);
  return sub_605B3224(a1, a2);
}
