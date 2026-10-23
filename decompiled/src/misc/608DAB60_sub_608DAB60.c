/* sub_608DAB60
 * address: 0x608DAB60   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DAB60(_DWORD *a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r6
  int result; // r0
  char v6; // r12
  char *v7; // r6
  int v8; // r7
  char v9; // r12
  bool v10; // zf
  char *v11; // r7
  int v12; // r0
  int (__fastcall ***v13)(_DWORD, int *); // r5
  int v14; // r6
  int v15; // r0

  v3 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619897224 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v4 = (int)(v3 + 48);
  if ( !(**v3)(v3, &dword_60CC6AE4) )
    v4 = 192;
  result = *(unsigned __int8 *)v4;
  if ( *(_BYTE *)v4 )
  {
    result = sub_608AA5FC((int)(a1 + 2));
    if ( result == 1 )
    {
      v7 = *(char **)(dword_60CCFAF4 + 20);
      if ( ((unsigned int)&dword_60CC6AE8 & ~(1619897384 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
      {
        dword_60CC6AE4 = (int)&off_60C280A0;
        _cxa_guard_release(&dword_60CC6AE8);
      }
      v8 = (int)(v7 + 192);
      if ( !(**(int (__fastcall ***)(char *, int *))v7)(v7, &dword_60CC6AE4) )
        v8 = 192;
      v10 = *(_BYTE *)v8 == 0;
      if ( *(_BYTE *)v8 )
      {
        v7 = (char *)a1[10];
        v10 = v7 == 0;
      }
      if ( !v10 )
      {
        v11 = 0;
        do
        {
          v12 = sub_608AB144((int)(a1 + 2), (int)(v11 + 0x4000000));
          sub_608AC690(v12, 0);
          ++v11;
        }
        while ( v7 != v11 );
      }
      v13 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
      if ( ((unsigned int)&dword_60CC6AE8 & ~(1619897568 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
      {
        dword_60CC6AE4 = (int)&off_60C280A0;
        _cxa_guard_release(&dword_60CC6AE8);
      }
      v14 = (int)(v13 + 48);
      if ( !(**v13)(v13, &dword_60CC6AE4) )
        v14 = 192;
      if ( *(_BYTE *)v14 )
      {
        sub_608DC84C(a1[114], 0);
        v15 = a1[115];
        if ( v15 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 4))(v15);
          a1[115] = 0;
        }
      }
      sub_608DADE4(a1);
      return sub_608DCEB0(a1[114]);
    }
  }
  return result;
}
