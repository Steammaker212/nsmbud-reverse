/* sub_608BC010
 * address: 0x608BC010   size: 864   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BC010(int a1, int a2)
{
  void *v4; // r6
  _DWORD *v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r0
  _DWORD *v9; // r1
  int v10; // r0
  int v11; // r1
  int v12; // r0
  _DWORD *v13; // r1
  int v14; // r0
  int v15; // r1
  int v16; // r0
  _DWORD *v17; // r1
  int v18; // r0
  int v19; // r1
  int v20; // r0
  _DWORD *v21; // r1
  int v22; // r0
  int v23; // r1
  int v24; // r0
  _DWORD *v25; // r1
  int v26; // r0
  int v27; // r1
  int v28; // r0
  _DWORD *v29; // r1
  int v30; // r0
  int v31; // r1
  int v32; // r0
  _DWORD *v33; // r1
  int result; // r0
  int v35; // r1
  _DWORD *v36; // r1

  FIELD_U16(a1, 572) = FIELD_U16(a2, 8);
  v4 = sub_608C3B10();
  v5 = (_DWORD *)sub_608C2698(v4, 164, 1);
  v5[1] = 50;
  v5[4] = a1 + 640;
  qmemcpy(v5 + 5, (const void *)a2, 0x90u);
  sub_608C2C1C(v4);
  v6 = FIELD_U8(a2, 23);
  if ( FIELD_U8(a2, 23) )
  {
    v7 = 0;
    if ( (v6 & 1) != 0 )
    {
      ++FIELD_U32(a1, 576);
      v7 = 1;
    }
    if ( v6 != 1 )
    {
      v8 = v6 - v7;
      v9 = (_DWORD *)(a1 + 4 * v7 + 576);
      do
      {
        v8 -= 2;
        ++*v9;
        ++v9[1];
        v9 += 2;
      }
      while ( v8 );
    }
  }
  v10 = FIELD_U8(a2, 37);
  if ( FIELD_U8(a2, 37) )
  {
    v11 = 0;
    if ( (v10 & 1) != 0 )
    {
      FIELD_U32(a1, 576) += 2;
      v11 = 1;
    }
    if ( v10 != 1 )
    {
      v12 = v10 - v11;
      v13 = (_DWORD *)(a1 + 4 * v11 + 580);
      do
      {
        v12 -= 2;
        *(v13 - 1) += 2;
        *v13 += 2;
        v13 += 2;
      }
      while ( v12 );
    }
  }
  v14 = FIELD_U8(a2, 51);
  if ( FIELD_U8(a2, 51) )
  {
    v15 = 0;
    if ( (v14 & 1) != 0 )
    {
      FIELD_U32(a1, 576) += 4;
      v15 = 1;
    }
    if ( v14 != 1 )
    {
      v16 = v14 - v15;
      v17 = (_DWORD *)(a1 + 4 * v15 + 580);
      do
      {
        v16 -= 2;
        *(v17 - 1) += 4;
        *v17 += 4;
        v17 += 2;
      }
      while ( v16 );
    }
  }
  v18 = FIELD_U8(a2, 65);
  if ( FIELD_U8(a2, 65) )
  {
    v19 = 0;
    if ( (v18 & 1) != 0 )
    {
      FIELD_U32(a1, 576) += 8;
      v19 = 1;
    }
    if ( v18 != 1 )
    {
      v20 = v18 - v19;
      v21 = (_DWORD *)(a1 + 4 * v19 + 580);
      do
      {
        v20 -= 2;
        *(v21 - 1) += 8;
        *v21 += 8;
        v21 += 2;
      }
      while ( v20 );
    }
  }
  v22 = FIELD_U8(a2, 79);
  if ( FIELD_U8(a2, 79) )
  {
    v23 = 0;
    if ( (v22 & 1) != 0 )
    {
      FIELD_U32(a1, 576) += 16;
      v23 = 1;
    }
    if ( v22 != 1 )
    {
      v24 = v22 - v23;
      v25 = (_DWORD *)(a1 + 4 * v23 + 580);
      do
      {
        v24 -= 2;
        *(v25 - 1) += 16;
        *v25 += 16;
        v25 += 2;
      }
      while ( v24 );
    }
  }
  v26 = FIELD_U8(a2, 93);
  if ( FIELD_U8(a2, 93) )
  {
    v27 = 0;
    if ( (v26 & 1) != 0 )
    {
      FIELD_U32(a1, 576) += 32;
      v27 = 1;
    }
    if ( v26 != 1 )
    {
      v28 = v26 - v27;
      v29 = (_DWORD *)(a1 + 4 * v27 + 580);
      do
      {
        v28 -= 2;
        *(v29 - 1) += 32;
        *v29 += 32;
        v29 += 2;
      }
      while ( v28 );
    }
  }
  v30 = FIELD_U8(a2, 107);
  if ( FIELD_U8(a2, 107) )
  {
    v31 = 0;
    if ( (v30 & 1) != 0 )
    {
      FIELD_U32(a1, 576) += 64;
      v31 = 1;
    }
    if ( v30 != 1 )
    {
      v32 = v30 - v31;
      v33 = (_DWORD *)(a1 + 4 * v31 + 580);
      do
      {
        v32 -= 2;
        *(v33 - 1) += 64;
        *v33 += 64;
        v33 += 2;
      }
      while ( v32 );
    }
  }
  result = FIELD_U8(a2, 121);
  if ( FIELD_U8(a2, 121) )
  {
    v35 = 0;
    if ( (result & 1) != 0 )
    {
      FIELD_U32(a1, 576) += 128;
      v35 = 1;
    }
    if ( result != 1 )
    {
      result -= v35;
      v36 = (_DWORD *)(a1 + 4 * v35 + 580);
      do
      {
        result -= 2;
        *(v36 - 1) += 128;
        *v36 += 128;
        v36 += 2;
      }
      while ( result );
    }
  }
  return result;
}
