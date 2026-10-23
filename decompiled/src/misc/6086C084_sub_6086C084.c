/* sub_6086C084
 * address: 0x6086C084   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086C084(int *a1, _DWORD *a2, int a3, unsigned int a4)
{
  int result; // r0
  int v8; // r5
  void *v9; // r0
  int v10; // r4
  int v11; // r11
  int v12; // r0
  _DWORD *v13; // r7
  int v14; // r0
  int *v15; // r6
  int v16; // r0
  int v17; // r3
  int v18; // r1
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r4
  int v23; // r3
  int v24; // r2
  int v25; // r4
  int v26; // r7
  int v27; // r1
  int v28; // r2
  int i; // r3
  int v30; // r7
  int v31; // r6

  result = 0;
  if ( a2[3] && a2[2] <= a4 )
  {
    v8 = *a2;
    v9 = 0;
    v10 = *(unsigned __int16 *)(*a2 + 170);
    v11 = *(unsigned __int8 *)(*a2 + 169);
    *a1 = *a2;
    *((_WORD *)a1 + 2) = 0;
    *((_BYTE *)a1 + 6) = a2[1];
    if ( a3 && a2[8] )
      v9 = (void *)(a3 + a2[11]);
    a1[11] = (int)v9;
    qmemcpy(v9, *(const void **)(v8 + 104), FIELD_U16(v8, 174));
    if ( a3 )
    {
      v12 = a2[12];
      if ( v12 )
        v12 = a3 + a2[15];
      a1[12] = v12;
      v13 = a1 + 12;
      v14 = a2[20];
      v15 = a1 + 13;
      if ( v14 )
        v14 = a3 + a2[23];
      a1[13] = v14;
      if ( a2[16] )
        v16 = a3 + a2[19];
      else
        v16 = 0;
    }
    else
    {
      v16 = 0;
      a1[12] = 0;
      v13 = a1 + 12;
      a1[13] = 0;
      v15 = a1 + 13;
    }
    v17 = 0;
    a1[10] = v16;
    a1[14] = 0;
    a1[15] = 0;
    a1[16] = a3;
    a1[8] = 0;
    a1[9] = 0;
    v18 = a2[4];
    if ( a3 )
    {
      if ( v18 )
      {
        v17 = a3 + a2[7];
      }
      else
      {
        v18 = 0;
        v17 = 0;
      }
    }
    sub_6087EBD8(a1 + 2, v10, *((unsigned __int8 *)a1 + 6), v17, v18);
    if ( v11 )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        *(_DWORD *)(*v13 + 4 * v20) = *(_DWORD *)(FIELD_U32(v8, 48) + 4 * v20);
        ++v20;
        v21 = FIELD_U32(v8, 152);
        v22 = *v15;
        v23 = *(_DWORD *)(v21 + v19);
        v24 = *(_DWORD *)(v21 + v19 + 4);
        *(_DWORD *)(v22 + v19) = v23;
        v25 = v22 + v19;
        v19 += 8;
        FIELD_U32(v25, 4) = v24;
      }
      while ( v11 != v20 );
    }
    v26 = *a1;
    result = 1;
    if ( *(_WORD *)(*a1 + 170) )
    {
      v27 = *(unsigned __int16 *)(*a1 + 170) - 1;
      v28 = 0;
      for ( i = 0; ; ++i )
      {
        v30 = FIELD_U32(v26, 88);
        v31 = *(unsigned __int16 *)(v30 + v28 + 26);
        if ( i != v31 )
          *(_DWORD *)(a1[11] + *(unsigned __int16 *)(v30 + v28 + 18) + *(unsigned __int8 *)(v30 + 32 * i + 16)) = a1[11] + *(unsigned __int16 *)(v30 + 32 * v31 + 18);
        if ( v27 == i )
          break;
        v26 = *a1;
        v28 += 32;
      }
    }
  }
  return result;
}
