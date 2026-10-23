/* sub_602FD614
 * address: 0x602FD614   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FD614(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int result; // r0
  int (__fastcall *v8)(_DWORD *, int); // r5
  int v9; // r0
  int v10; // r1
  _DWORD *v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  float v15; // [sp+0h] [bp-18h] BYREF

  sub_60300AA0();
  v3 = a1 + 1575;
  v2 = (_DWORD *)a1[1575];
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    result = (*(int (__fastcall **)(_DWORD *))(*a1 + 708))(a1);
    if ( result == 1 )
    {
      v8 = *(int (__fastcall **)(_DWORD *, int))(*a1 + 716);
      if ( a1[2126] == -1 )
      {
        v10 = 1;
      }
      else
      {
        sub_60300AE4(a1, &v15);
        v9 = 2;
        v10 = 3;
        if ( fabsf(v15) < 80.0 )
        {
          v9 = 0;
          v10 = 1;
        }
        if ( !a1[3495] )
          v10 = v9;
      }
      return v8(a1, v10);
    }
  }
  else
  {
    v11 = *(_DWORD **)(*v3 + 12);
    v12 = *(_DWORD *)(*v3 + 68);
    if ( *(_DWORD *)(*v3 + 8) > v12 )
      v11 += v12;
    if ( sub_60418548(*v11 + 4) )
    {
      return (*(int (__fastcall **)(_DWORD *))(*a1 + 700))(a1);
    }
    else
    {
      v13 = *(_DWORD *)(*v3 + 12);
      v14 = *(_DWORD *)(*v3 + 68);
      if ( *(_DWORD *)(*v3 + 8) > v14 )
        v13 += 4 * v14;
      result = *(unsigned __int8 *)(*(_DWORD *)v13 + 28);
      if ( (result & 0x20) != 0 )
      {
        a1[2125] = 120;
        sub_603005F4(a1, 15);
        return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C92B3C);
      }
    }
  }
  return result;
}
