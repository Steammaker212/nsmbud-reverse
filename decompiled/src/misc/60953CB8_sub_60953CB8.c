/* sub_60953CB8
 * address: 0x60953CB8   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60953CB8(signed int *a1, _DWORD *a2, int a3, int a4)
{
  int v5; // r4
  signed int v6; // r6
  int v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r2
  signed int v10; // r1
  int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r2
  signed int v14; // r1
  signed int result; // r0
  unsigned int v16; // r1
  unsigned int v17; // r2
  signed int v18; // r1
  unsigned int v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r8
  int v22; // r4
  int v23; // r0
  _DWORD *v24; // r0
  int v25; // r4
  unsigned int v26; // r6
  signed int v27; // r10
  unsigned int v28; // r0
  void *v29; // lr
  _QWORD *v30; // r2
  int v31; // r0
  int v32; // r12
  int v33; // r3
  int v34; // r5
  int v35; // r3
  int v39; // [sp+18h] [bp-10h]
  int v40[3]; // [sp+1Ch] [bp-Ch] BYREF
  _QWORD v41[63]; // [sp+28h] [bp+0h] BYREF
  _DWORD v42[6]; // [sp+224h] [bp+1FCh] BYREF
  unsigned __int16 v43; // [sp+23Ch] [bp+214h]

  memset(v41, 0, sizeof(v41));
  v5 = 1;
  v6 = 0;
  do
  {
    v7 = sub_60972394(v42);
    sub_609723AC(v7);
    sub_60972434(v42);
    sub_60972444(v42);
    if ( v6 < 1 )
    {
LABEL_8:
      v10 = 0;
      if ( (unsigned int)v6 < 0x3F )
        v10 = v6;
      ++v6;
      LODWORD(v41[v10]) = v43;
    }
    else
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = 0;
        if ( v8 < 0x3F )
          v9 = v8;
        if ( LODWORD(v41[v9]) == v43 )
          break;
        if ( (int)++v8 >= v6 )
          goto LABEL_8;
      }
    }
    v11 = sub_60972394(v42);
    sub_609723AC(v11);
    sub_60972434(v42);
    sub_60972444(v42);
    if ( v6 < 1 )
    {
LABEL_17:
      v14 = 0;
      if ( (unsigned int)v6 < 0x3F )
        v14 = v6;
      ++v6;
      LODWORD(v41[v14]) = v43;
    }
    else
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = 0;
        if ( v12 < 0x3F )
          v13 = v12;
        if ( LODWORD(v41[v13]) == v43 )
          break;
        if ( (int)++v12 >= v6 )
          goto LABEL_17;
      }
    }
    result = sub_60920DAC(v5);
    if ( !result )
    {
      sub_60972394(v42);
      sub_609723AC(v42);
      sub_60972434(v42);
      sub_60972444(v42);
      result = v43;
      if ( v6 < 1 )
      {
LABEL_27:
        v18 = 0;
        if ( (unsigned int)v6 < 0x3F )
          v18 = v6;
        ++v6;
        LODWORD(v41[v18]) = v43;
      }
      else
      {
        v16 = 0;
        while ( 1 )
        {
          v17 = 0;
          if ( v16 < 0x3F )
            v17 = v16;
          if ( LODWORD(v41[v17]) == v43 )
            break;
          if ( (int)++v16 >= v6 )
            goto LABEL_27;
        }
      }
    }
    ++v5;
  }
  while ( v5 != 63 );
  if ( v6 )
  {
    if ( v6 >= 1 )
    {
      v19 = 32 * v6 + 8;
      if ( v19 < 32 * v6 )
        v19 = -1;
      if ( !is_mul_ok(0x20u, v6) )
        v19 = -1;
      v20 = (_DWORD *)sub_608DE334(v19, a4, 4);
      if ( v20 )
      {
        *v20 = 32;
        v20[1] = v6;
        v21 = v20 + 2;
        v22 = 32 * v6;
        v23 = (int)(v20 + 2);
        do
        {
          v24 = (_DWORD *)sub_60913BB4(v23);
          *v24 = off_60BF9C1C;
          v23 = (int)(v24 + 8);
          v22 -= 32;
        }
        while ( v22 );
        *a1 = v6;
        a1[1] = (signed int)v21;
      }
    }
    result = *a1;
    if ( *a1 )
    {
      v25 = a1[1];
      v26 = 0;
      v39 = v25 + 28;
      do
      {
        v27 = result;
        v28 = 0;
        v29 = (void *)a4;
        if ( v26 < 0x3F )
          v28 = v26;
        v30 = &v41[v28];
        v31 = *(_DWORD *)v30;
        v32 = *((unsigned __int8 *)v30 + 4);
        *(_DWORD *)(v39 + 32 * v26) = *(_DWORD *)v30;
        v33 = a2[1];
        v34 = a2[2];
        v42[0] = *a2;
        v42[1] = v33;
        v42[2] = v34;
        a4 = (int)v29;
        v35 = 132;
        if ( !v32 )
          v35 = 4;
        sub_60913EA4(v25, a3, v29, v35, (int)v42, v31);
        sub_60913A6C(v40, v25, 0);
        result = v27;
        ++v26;
        v25 += 32;
      }
      while ( v27 != v26 );
    }
  }
  return result;
}
