/* sub_608C9544
 * address: 0x608C9544   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C9544(int a1, float a2)
{
  int result; // r0
  _WORD *v4; // r9
  int v5; // r2
  int v6; // r1
  _DWORD *v7; // r5
  int v8; // r3
  int v9; // r2
  _DWORD *v10; // r7
  float v11; // s16
  void *v12; // r0
  float *v13; // r0
  int v14; // r1
  char *v15; // r5
  int v16; // r7
  unsigned int v17; // r5
  int v18; // r6
  int v19; // r5
  int v20; // r7
  int v21; // r6
  _BYTE v22[96]; // [sp+10h] [bp-F0h] BYREF
  _BYTE v23[144]; // [sp+70h] [bp-90h] BYREF

  result = FIELD_U8(a1, 413);
  if ( result )
  {
    v4 = (_WORD *)(a1 + 424);
    result = FIELD_U16(a1, 424);
    if ( (result & 4) != 0 )
    {
      v5 = FIELD_U32(a1, 400);
      if ( v5 >= 1 )
      {
        v6 = FIELD_U32(a1, 432);
        if ( (v5 & 3) != 0 )
        {
          v7 = (_DWORD *)(a1 + 12);
          v8 = 0;
          do
          {
            ++v8;
            *v7 = v6;
            v7 += 50;
          }
          while ( (v5 & 3) != v8 );
        }
        else
        {
          v8 = 0;
        }
        if ( (unsigned int)(v5 - 1) >= 3 )
        {
          v9 = v5 - v8;
          v10 = (_DWORD *)(a1 + 200 * v8 + 612);
          do
          {
            *(v10 - 150) = v6;
            *(v10 - 100) = v6;
            *(v10 - 50) = v6;
            *v10 = v6;
            v10 += 200;
            v9 -= 4;
          }
          while ( v9 );
        }
      }
      result &= 0xFFFBu;
      *v4 = result;
    }
    if ( (result & 0x40) != 0 )
    {
      v11 = FIELD_F32(a1, 428);
      v12 = sub_608065A0();
      a2 = sub_608B69EC((int)v12);
      if ( FIELD_S32(a1, 400) >= 1 )
      {
        a2 = v11 * a2;
        v13 = (float *)(a1 + 8);
        v14 = 0;
        do
        {
          *v13 = a2;
          ++v14;
          v13 += 50;
        }
        while ( v14 < FIELD_U32(a1, 400) );
      }
      result = *v4 & 0xFFBF;
      *v4 = result;
    }
    if ( (result & 8) != 0 )
    {
      if ( FIELD_S32(a1, 400) >= 1 )
      {
        v15 = (char *)(a1 + 16);
        v16 = 0;
        do
        {
          sub_608CA4A0(a1, v23, a1 + 460, FIELD_U32(a1, 540), a2, v16, 0);
          memset(v22, 0, sizeof(v22));
          ((void (__fastcall *)(int, _BYTE *, _DWORD, int, _DWORD, _BYTE *))loc_608CA9B8)(
            a1,
            v22,
            0,
            a1 + 460,
            FIELD_U32(a1, 540),
            v23);
          qmemcpy(v15, v22, 0x60u);
          ++v16;
          v15 += 200;
        }
        while ( v16 < FIELD_U32(a1, 400) );
        LOWORD(result) = *v4;
      }
      result &= 0xFFF7u;
      *v4 = result;
    }
    if ( (result & 0x10) != 0 )
    {
      v17 = ((int (__fastcall *)(float))loc_608C6850)(FIELD_F32(a1, 444));
      if ( FIELD_S32(a1, 400) >= 1 )
      {
        if ( v17 >> 7 <= 0x7C )
        {
          v20 = 0;
          v21 = a1;
          do
          {
            sub_608CB688(v21, 1, v17);
            ++v20;
            v21 += 200;
          }
          while ( v20 < FIELD_U32(a1, 400) );
        }
        else
        {
          v18 = 0;
          v19 = a1;
          do
          {
            sub_608CB688(v19, 0, 0);
            ++v18;
            v19 += 200;
          }
          while ( v18 < FIELD_U32(a1, 400) );
        }
      }
      result = *v4 & 0xFFEF;
      *v4 = result;
    }
    if ( (result & 0x20) != 0 )
    {
      sub_608C97A8(a1);
      result = *v4 & 0xFFDF;
      *v4 = result;
    }
  }
  return result;
}
