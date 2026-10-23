/* sub_608B10A0
 * address: 0x608B10A0   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608B10A0(int *a1, int a2)
{
  int v3; // r8
  int v4; // r0
  int v5; // r2
  int v6; // r7
  int v7; // r12
  int v8; // r3
  int v9; // lr
  int v10; // r5
  int v11; // r6
  int v12; // r3
  int v13; // r3
  int v14; // r2
  int v15; // r2
  int v16; // r3
  int v17; // r0
  bool v18; // zf
  _BYTE *v19; // r0
  int v20; // r3
  int v21; // r1
  int v22; // r0
  int v23; // r2
  int i; // r1

  v3 = a2;
  v4 = *a1;
  if ( v4 )
  {
    v5 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 )
    {
      v6 = FIELD_U32(v4, 4);
      v7 = FIELD_U32(v5, 4);
      a2 = v6;
      v8 = v6;
      if ( v7 < v6 )
        a2 = FIELD_U32(v5, 4);
      if ( a2 >= 1 )
      {
        v9 = FIELD_U32(v4, 4);
        v10 = 0;
        if ( v6 > v7 )
          v9 = FIELD_U32(v5, 4);
        if ( (a2 & 1) != 0 )
        {
          **(_DWORD **)v4 = **(_DWORD **)v5;
          v10 = 1;
        }
        if ( v9 != 1 )
        {
          do
          {
            *(_DWORD *)(*(_DWORD *)v4 + 4 * v10) = *(_DWORD *)(*(_DWORD *)v5 + 4 * v10);
            v11 = *(_DWORD *)v5 + 4 * v10;
            v12 = *(_DWORD *)v4 + 4 * v10;
            v10 += 2;
            FIELD_U32(v12, 4) = FIELD_U32(v11, 4);
          }
          while ( v10 < a2 );
        }
        v8 = FIELD_U32(v4, 4);
      }
      if ( a2 < v8 )
      {
        v13 = ~v6;
        if ( ~v7 > ~v6 )
          v13 = ~v7;
        v14 = -4 - 4 * v13;
        do
        {
          ++a2;
          *(_DWORD *)(*(_DWORD *)v4 + v14) = 0;
          v14 += 4;
        }
        while ( a2 < FIELD_U32(v4, 4) );
      }
    }
    else
    {
      a2 = FIELD_U32(v4, 4);
      if ( a2 >= 1 )
      {
        a2 = 0;
        v15 = 0;
        v16 = 0;
        do
        {
          ++v16;
          *(_DWORD *)(*(_DWORD *)v4 + v15) = 0;
          v15 += 4;
        }
        while ( v16 < FIELD_U32(v4, 4) );
      }
    }
  }
  v17 = a1[1];
  v18 = v17 == 0;
  if ( v17 )
  {
    a2 = FIELD_U32(v3, 4);
    v18 = a2 == 0;
  }
  if ( !v18 )
  {
    FIELD_U8(v17, 192) = FIELD_U8(a2, 192);
    v19 = (_BYTE *)a1[1];
    if ( v19[192] )
    {
      qmemcpy(v19, *(const void **)(v3 + 4), 0xC0u);
      v20 = FIELD_U32(v3, 4);
      v21 = a1[1];
      v22 = FIELD_U32(v20, 200);
      v23 = FIELD_U32(v21, 200);
      if ( v22 >= v23 )
        v22 = FIELD_U32(v21, 200);
      if ( v22 >= 1 )
      {
        **(_BYTE **)(v21 + 196) = **(_BYTE **)(v20 + 196);
        if ( v22 != 1 )
        {
          for ( i = 1; i < v22; ++i )
            *(_BYTE *)(*(_DWORD *)(a1[1] + 196) + i) = *(_BYTE *)(*(_DWORD *)(FIELD_U32(v3, 4) + 196) + i);
        }
        v21 = a1[1];
        v23 = FIELD_U32(v21, 200);
      }
      if ( v22 < v23 && v23 )
      {
        do
        {
          *(_BYTE *)(FIELD_U32(v21, 196) + v22++) = 0;
          v21 = a1[1];
        }
        while ( FIELD_U32(v21, 200) );
      }
    }
  }
  if ( a1[2] )
  {
    if ( FIELD_U32(v3, 8) )
    {
      sub_608B470C();
      return a1;
    }
    sub_608B46CC();
  }
  return a1;
}
