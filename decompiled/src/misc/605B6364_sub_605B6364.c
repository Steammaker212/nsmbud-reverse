/* sub_605B6364
 * address: 0x605B6364   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605B6364(int a1, int *a2, int a3)
{
  char v3; // r12
  int v4; // r6
  int v5; // r4
  int v6; // r5
  bool v7; // zf
  int v8; // r1
  char v9; // [sp+0h] [bp-38h]

  if ( *a2 == 9 )
  {
    if ( FIELD_U8(a1, 6879) )
    {
      v4 = 0;
      v9 = 1;
      do
      {
        if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v4)) != 0 )
        {
          v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 48);
          if ( ((unsigned int)&dword_60C7B37C & ~(1616602124 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( v5
            && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1
            && (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1204))(v5) == 1 )
          {
            *a2 = 8;
            v9 = 0;
          }
        }
        ++v4;
      }
      while ( v4 != 4 );
      if ( (v9 & 1) != 0 )
        *a2 = 12;
    }
    else
    {
      if ( (unsigned __int8)a3 >= 4u )
        a3 = 0;
      v6 = *(_DWORD *)(PlayerMgr_instance + 4 * a3 + 48);
      if ( ((unsigned int)&dword_60C7B37C & ~(1616602336 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) == 1 )
      {
        v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1204))(v6) == 0;
        v8 = 12;
        if ( !v7 )
          v8 = 8;
        *a2 = v8;
      }
    }
  }
}
