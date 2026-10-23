/* sub_6056DC3C
 * address: 0x6056DC3C   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6056DC3C(int a1, int a2)
{
  char v2; // r12
  _DWORD *v4; // r7
  int v5; // r5
  int v6; // r8
  int (__fastcall ***v7)(_DWORD, int *); // r6
  int v8; // r5
  int v9; // r11
  int v10; // r8
  int (__fastcall ***v11)(_DWORD, int *); // r6
  int v12; // [sp+14h] [bp-2Ch]

  v4 = (_DWORD *)(a1 + 7456);
  if ( a2 )
  {
    v5 = 0;
    v6 = 7420;
    v12 = a1 + 7452;
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + v6 + 16) != 1 || (*v4 & (1 << v5)) == 0 )
        goto LABEL_15;
      if ( *(_DWORD *)(a1 + v6) != 3 )
        break;
      v7 = (int (__fastcall ***)(_DWORD, int *))sub_607891A0(PlayerMgr_instance, v5);
      if ( v7 )
        goto LABEL_13;
LABEL_15:
      ++v5;
      v6 += 4;
      if ( v5 == 4 )
        return;
    }
    v7 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v5 + 48);
    if ( ((unsigned int)&dword_60C7B37C & ~(1616305436 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( !v7 || !(**v7)(v7, &dword_60C7B378) )
      goto LABEL_15;
LABEL_13:
    if ( !*(_BYTE *)(v12 + v5) )
    {
      ((void (__fastcall *)(int, int (__fastcall ***)(_DWORD, int *), _DWORD, int))loc_6056D17C)(
        a1,
        v7,
        (unsigned __int8)(*(_DWORD *)(a1 + v6) - 1),
        v5);
      *(_DWORD *)(a1 + v6 + 16) = 2;
    }
    goto LABEL_15;
  }
  v8 = 0;
  v9 = a1 + 7420;
  v10 = a1 + 7436;
  do
  {
    if ( *(_DWORD *)(v10 + 4 * v8) == 1 && (*v4 & (1 << v8)) != 0 )
    {
      if ( *(_DWORD *)(v9 + 4 * v8) == 3 )
      {
        v11 = (int (__fastcall ***)(_DWORD, int *))sub_607891A0(PlayerMgr_instance, v8);
        if ( v11 )
          goto LABEL_28;
      }
      else
      {
        v11 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v8 + 48);
        if ( ((unsigned int)&dword_60C7B37C & ~(1616305784 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( v11 && (**v11)(v11, &dword_60C7B378) == 1 )
        {
LABEL_28:
          ((void (__fastcall *)(int, int (__fastcall ***)(_DWORD, int *), _DWORD, int))loc_6056D17C)(
            a1,
            v11,
            (unsigned __int8)(*(_DWORD *)(v9 + 4 * v8) - 1),
            v8);
          *(_DWORD *)(v10 + 4 * v8) = 2;
        }
      }
    }
    ++v8;
  }
  while ( v8 != 4 );
}
