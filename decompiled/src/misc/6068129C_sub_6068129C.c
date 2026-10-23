/* sub_6068129C
 * address: 0x6068129C   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068129C(int *a1)
{
  int result; // r0
  int *v3; // r5
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  unsigned int v8; // r2
  unsigned int v9; // r3
  _DWORD *v10; // r3
  _DWORD *v11; // r5
  _DWORD *v12; // r3
  int v13; // t1

  v3 = a1 + 1873;
  result = a1[1873];
  if ( !result || (*v3 = result - 1, result <= 31) )
  {
    (*(void (__fastcall **)(int *))(*a1 + 220))(a1);
    if ( a1[1878] )
    {
      v4 = (_DWORD *)a1[1528];
      v5 = v4[3];
      v6 = v4[2];
      v7 = v4[17];
      if ( v6 > v7 )
        v5 += 4 * v7;
      if ( (*(_BYTE *)(*(_DWORD *)v5 + 28) & 0x20) != 0 )
        (*(void (__fastcall **)(int *))(*a1 + 204))(a1);
    }
    result = *v3;
    if ( !*v3 )
    {
      if ( *((_BYTE *)a1 + 7561) )
        return (*(int (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60CB8238);
      v8 = a1[1881];
      v9 = v8;
      if ( a1[1877] == 1 )
        v9 = v8 + 16;
      if ( v9 >= 0x20 )
        v9 = 0;
      v10 = (_DWORD *)(EnemyCounterMaybe_instance + 20 * v9);
      v11 = v10 + 74;
      if ( v10[74] == 256 )
      {
        return (*(int (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60CB8238);
      }
      else
      {
        a1[1880] = v10[71];
        v13 = v10[73];
        v12 = v10 + 73;
        a1[1882] = 10 * v13;
        *((_BYTE *)a1 + 7560) = *((_BYTE *)v12 + 8);
        *((_BYTE *)a1 + 7561) = *((_BYTE *)v12 + 9);
        a1[1881] = v8 + 1;
        *((_BYTE *)a1 + 7597) = 0;
        if ( *v11 == 1 )
        {
          *((_BYTE *)a1 + 7597) = 1;
          a1[1882] = *v12;
        }
        return (*(int (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60CB81F8);
      }
    }
  }
  return result;
}
