/* sub_6099E924
 * address: 0x6099E924   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099E924(int *a1, const char *a2, int a3)
{
  int v6; // r7
  unsigned int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  unsigned int v10; // r2
  _DWORD *v11; // r1
  int v12; // r3
  int v13; // r5
  __int64 v14; // r0
  int v15; // r0
  int v16; // r1
  int v17; // r2
  _DWORD *v18; // r7
  unsigned int v19; // r1
  int v20; // r7
  unsigned int v21; // r5
  int v22; // r0
  unsigned int v24; // [sp+0h] [bp-28h] BYREF
  const char *v25; // [sp+4h] [bp-24h]

  v6 = dword_60C5D314;
  if ( dword_60C5D314 >= 1 )
  {
    v7 = 8 * dword_60C5D314 + 8;
    if ( v7 < 8 * dword_60C5D314 )
      v7 = -1;
    if ( !is_mul_ok(8u, dword_60C5D314) )
      v7 = -1;
    v8 = (_DWORD *)sub_608DE334(v7, a3, 4);
    if ( v8 )
    {
      *v8 = 8;
      v8[1] = v6;
      v9 = v8 + 2;
      v10 = 8 * v6 - 8;
      v11 = v9;
      if ( (((unsigned __int8)(v10 >> 3) + 1) & 3) != 0 )
      {
        v12 = -(((unsigned __int8)(v10 >> 3) + 1) & 3);
        v11 = v9;
        do
        {
          *v11 = &sead__SafeStringBase__vtable;
          v11[1] = &byte_60ABC94D;
          v11 += 2;
          ++v12;
        }
        while ( v12 );
      }
      if ( v10 >= 0x18 )
      {
        do
        {
          *v11 = &sead__SafeStringBase__vtable;
          v11[1] = &byte_60ABC94D;
          v11[2] = &sead__SafeStringBase__vtable;
          v11[3] = &byte_60ABC94D;
          v11[4] = &sead__SafeStringBase__vtable;
          v11[5] = &byte_60ABC94D;
          v11[6] = &sead__SafeStringBase__vtable;
          v11[7] = &byte_60ABC94D;
          v11 += 8;
        }
        while ( v11 != &v9[2 * v6] );
      }
      *a1 = v6;
      a1[1] = (int)v9;
    }
    v13 = dword_60C5D314;
    if ( dword_60C5D314 >= 1 )
    {
      v14 = 4LL * (unsigned int)dword_60C5D314;
      if ( !is_mul_ok(4u, dword_60C5D314) )
        HIDWORD(v14) = 1;
      if ( HIDWORD(v14) )
        LODWORD(v14) = -1;
      v15 = sub_608DE334(v14, a3, 4);
      if ( v15 )
      {
        a1[2] = v13;
        a1[3] = v15;
      }
    }
  }
  v16 = a1[2];
  if ( v16 >= 1 )
  {
    v17 = 0;
    do
    {
      v24 = v17++;
      v18 = (_DWORD *)a1[3];
      if ( v16 > v24 )
        v18 += v24;
      *v18 = 0;
      v16 = a1[2];
    }
    while ( v17 < v16 );
  }
  v19 = *a1;
  if ( *a1 >= 1 )
  {
    v20 = 0;
    v21 = 0;
    do
    {
      v22 = a1[1];
      v24 = (unsigned int)&sead__SafeStringBase__vtable;
      v25 = "?";
      if ( v19 > v21 )
        v22 += v20;
      sead__SafeStringBase__operator_assign(v22, (int)&v24);
      v19 = *a1;
      ++v21;
      v20 += 8;
    }
    while ( (int)v21 < *a1 );
  }
  v24 = (unsigned int)&sead__SafeStringBase__vtable;
  v25 = a2;
  return sead__SafeStringBase__operator_assign((int)(a1 + 4), (int)&v24);
}
