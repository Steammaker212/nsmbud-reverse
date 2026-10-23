/* sub_608C9840
 * address: 0x608C9840   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C9840(int a1, float a2)
{
  int result; // r0
  int v4; // r6
  __int16 v5; // r0
  _WORD *v6; // r9
  bool v7; // zf
  int v8; // r1
  int v9; // r0
  _DWORD *v10; // r6
  int v11; // r2
  int v12; // r1
  _DWORD *v13; // r3
  char *v14; // r5
  int v15; // r7
  float v16; // s16
  void *v17; // r0
  float *v18; // r0
  int v19; // r1
  bool v20; // zf
  int v21; // r1
  int v22; // r7
  int v23; // r5
  int v24; // r6
  int v25; // r5
  int v26; // r6
  int v27; // r5
  _BYTE v28[96]; // [sp+10h] [bp-F0h] BYREF
  _BYTE v29[144]; // [sp+70h] [bp-90h] BYREF

  result = FIELD_U8(a1, 412);
  if ( result )
  {
    v4 = 0;
    v6 = (_WORD *)(a1 + 424);
    v5 = FIELD_U16(a1, 424);
    v7 = (v5 & 1) == 0;
    if ( (v5 & 1) != 0 )
      v7 = FIELD_U8(a1, 413) == 0;
    if ( !v7 && !FIELD_U8(a1, 414) )
    {
      v8 = FIELD_U32(a1, 400);
      if ( v8 >= 1 )
      {
        v9 = FIELD_U32(a1, 432);
        if ( (v8 & 3) != 0 )
        {
          v10 = (_DWORD *)(a1 + 12);
          v11 = 0;
          do
          {
            ++v11;
            *v10 = v9;
            v10 += 50;
          }
          while ( (v8 & 3) != v11 );
        }
        else
        {
          v11 = 0;
        }
        if ( (unsigned int)(v8 - 1) >= 3 )
        {
          v12 = v8 - v11;
          v13 = (_DWORD *)(a1 + 200 * v11 + 612);
          do
          {
            *(v13 - 150) = v9;
            *(v13 - 100) = v9;
            *(v13 - 50) = v9;
            *v13 = v9;
            v13 += 200;
            v12 -= 4;
          }
          while ( v12 );
        }
        v14 = (char *)(a1 + 16);
        v15 = 0;
        do
        {
          sub_608CA4A0(a1, v29, a1 + 460, FIELD_U32(a1, 540), a2, v15, 0);
          memset(v28, 0, sizeof(v28));
          ((void (__fastcall *)(int, _BYTE *, _DWORD, int, _DWORD, _BYTE *))loc_608CA9B8)(
            a1,
            v28,
            0,
            a1 + 460,
            FIELD_U32(a1, 540),
            v29);
          qmemcpy(v14, v28, 0x60u);
          ++v15;
          v14 += 200;
        }
        while ( v15 < FIELD_U32(a1, 400) );
      }
      v16 = FIELD_F32(a1, 428);
      v17 = sub_608065A0();
      a2 = sub_608B69EC((int)v17);
      if ( FIELD_S32(a1, 400) >= 1 )
      {
        a2 = v16 * a2;
        v18 = (float *)(a1 + 8);
        v19 = 0;
        do
        {
          *v18 = a2;
          ++v19;
          v18 += 50;
        }
        while ( v19 < FIELD_U32(a1, 400) );
      }
      v4 = 1;
      FIELD_U8(a1, 414) = 1;
      v5 = *v6 & 0xFFF2;
      *v6 = v5;
    }
    if ( FIELD_U8(a1, 414) )
    {
      v20 = (v5 & 2) == 0;
      if ( (v5 & 2) != 0 )
        v20 = FIELD_U8(a1, 413) == 0;
      if ( !v20 )
      {
        v21 = FIELD_U8(a1, 415);
        v4 = 2;
        FIELD_U8(a1, 416) = v21;
        *v6 = v5 & 0xFFFD;
        if ( !v21 )
          v4 = 1;
      }
    }
    result = FIELD_U32(a1, 400);
    if ( result >= 1 )
    {
      v22 = 0;
      v23 = a1;
      do
      {
        sub_608CB64C(v23, a2);
        result = FIELD_U32(a1, 400);
        ++v22;
        v23 += 200;
      }
      while ( v22 < result );
    }
    if ( v4 == 1 )
    {
      if ( result >= 1 )
      {
        v26 = 0;
        v27 = a1;
        do
        {
          sub_608CB5C8(v27, 0);
          result = FIELD_U32(a1, 400);
          ++v26;
          v27 += 200;
        }
        while ( v26 < result );
      }
    }
    else if ( v4 == 2 && result >= 1 )
    {
      v24 = 0;
      v25 = a1;
      do
      {
        sub_608CB5C8(v25, 2);
        result = FIELD_U32(a1, 400);
        ++v24;
        v25 += 200;
      }
      while ( v24 < result );
    }
  }
  return result;
}
