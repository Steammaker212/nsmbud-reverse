/* sub_60564834
 * address: 0x60564834   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60564834(int *a1)
{
  int *v2; // r5
  double v3; // d0
  float v4; // s16
  float v5; // s2
  int v6; // r0
  unsigned int v7; // r5
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r1
  float *v11; // r2
  int v12; // r0
  bool v14; // zf
  float *v15; // r0
  double v16; // [sp+4h] [bp-24h] BYREF
  float v17; // [sp+Ch] [bp-1Ch]

  v2 = a1 + 1714;
  v3 = ((double (__fastcall *)(int *))*(_DWORD *)(*a1 + 368))(a1);
  v4 = *((float *)&v3 + 1);
  v16 = v3;
  v17 = v5;
  v6 = *v2;
  v7 = 1;
  v8 = v6 - 15;
  if ( v8 <= 8 )
    v7 = (0xFAu >> v8) & 1;
  v9 = sub_60465D48();
  if ( v7 == 1 && v9 && !a1[1842] )
  {
    if ( *((_BYTE *)a1 + 6868) )
    {
      a1[1716] = 2;
      *((_BYTE *)a1 + 6846) = 1;
      v15 = (float *)(a1 + 1840);
    }
    else
    {
      v15 = (float *)(a1 + 1840);
      if ( *((_BYTE *)a1 + 6846) == 2 )
        v15 = (float *)(a1 + 1841);
    }
    *((float *)&v16 + 1) = *v15 + v4;
    if ( a1[1826] )
      a1[1718] = 1;
    return ((int (__fastcall *)(int *, double *, _DWORD, int, _DWORD))sub_605B624C)(
             a1,
             &v16,
             0,
             1,
             *((unsigned __int8 *)a1 + 6878));
  }
  else
  {
    v10 = *((unsigned __int8 *)a1 + 6846);
    v11 = (float *)(a1 + 1838);
    if ( v10 == 2 )
      v11 = (float *)(a1 + 1839);
    *((float *)&v16 + 1) = *v11 + v4;
    if ( *((_BYTE *)a1 + 6878) )
    {
      a1[1718] = 0;
      v12 = 1;
    }
    else
    {
      v12 = 0;
      if ( a1[1826] )
      {
        v14 = *((_BYTE *)a1 + 7378) == 0;
        if ( *((_BYTE *)a1 + 7378) )
          v14 = v10 == 1;
        if ( v14 )
          a1[1718] = 1;
      }
    }
    return ((int (__fastcall *)(int *, double *, _DWORD, int, int))SE_OBJ_JUMPDAI_APP_ref)(a1, &v16, 0, 1, v12);
  }
}
