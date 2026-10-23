/* sub_6015DBD8
 * address: 0x6015DBD8   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015DBD8(int a1, _DWORD *a2, float *a3)
{
  float v6; // s0
  float v7; // s2
  int v8; // r2
  float v9; // s12
  float v10; // s14
  float v11; // s0
  float v12; // s2
  _DWORD *v13; // r7
  int v14; // r0
  int (__fastcall ***v15)(_DWORD, int *); // r0
  int result; // r0
  int v17; // r1
  int v18; // r2
  float v19[2]; // [sp+0h] [bp-18h] BYREF
  int v20; // [sp+8h] [bp-10h] BYREF
  int v21; // [sp+Ch] [bp-Ch]
  _DWORD *v22; // [sp+10h] [bp-8h]
  int v23; // [sp+14h] [bp-4h]

  v6 = *a3;
  v7 = a3[1];
  v8 = (int)*a3;
  if ( v8 % 16 )
    v9 = (float)(int)((v8 + ((unsigned int)(v8 >> 31) >> 28)) & 0xFFFFFFF0);
  else
    v9 = (float)v8;
  if ( (int)v7 % 16 )
    v10 = (float)(int)(((int)v7 + ((unsigned int)((int)v7 >> 31) >> 28)) & 0xFFFFFFF0);
  else
    v10 = (float)(int)v7;
  if ( (float)v8 == v6 )
    v11 = v9;
  else
    v11 = (float)(int)((v8 + ((unsigned int)(v8 >> 31) >> 28)) & 0xFFFFFFF0);
  if ( (float)(int)v7 == v7 )
    v12 = v10;
  else
    v12 = (float)(int)(((int)v7 + ((unsigned int)((int)v7 >> 31) >> 28)) & 0xFFFFFFF0);
  v19[0] = v11;
  v19[1] = v12;
  sub_601679DC(dword_60C88A70, v19, FIELD_U8(a1, 2), (_BYTE *)(a1 + 3));
  v13 = *(_DWORD **)(dword_60C88A70 + 1792);
  if ( v13
    && sub_6015D180(a1, FIELD_U32(dword_60C88A70, 1792)) == 1
    && (*(int (__fastcall **)(_DWORD *, _DWORD, float *))(*v13 + 40))(v13, 0, a3) == 1
    && ((v22 = v13,
         v14 = v13[76],
         v21 = v13[77],
         v20 = v14,
         (v15 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 12)) == 0)
     || (**v15)(v15, &v20) == 1) )
  {
    result = 1;
    if ( a2 )
    {
      v22 = 0;
      a2[2] = 0;
      v17 = v20;
      v18 = v21;
      a2[3] = v23;
      *a2 = v17;
      a2[1] = v18;
    }
  }
  else
  {
    result = 0;
    if ( a2 )
    {
      *a2 = 0;
      a2[1] = 0;
      a2[2] = 0;
      a2[3] = 0;
    }
  }
  return result;
}
