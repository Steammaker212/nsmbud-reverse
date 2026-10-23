/* sub_60915FCC
 * address: 0x60915FCC   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60915FCC(int a1, void *a2)
{
  _DWORD *v4; // r6
  int v5; // r10
  unsigned __int16 v6; // r0
  int v7; // r6
  int v8; // r5
  signed int v9; // r7
  __int64 v10; // r0
  int v11; // r0
  int v12; // r3
  int v13; // r1
  int v14; // r6
  int v15; // r5
  char *v16; // r7
  int v17; // r6
  int v18; // r5
  char *v19; // r7
  unsigned __int16 v20; // r0
  unsigned int v21; // r0
  unsigned int v22; // r0
  unsigned int v23; // r0
  unsigned int v24; // r5
  __int64 v25; // r0
  unsigned int v26; // kr00_4
  int v27; // r0
  _DWORD *v28; // r3
  int v29; // r0
  _DWORD *v30; // r1
  int v31; // r2
  int v32; // r0
  _DWORD *v33; // r1
  int v34; // r0
  char *i; // [sp+8h] [bp-40h]
  _DWORD v37[3]; // [sp+Ch] [bp-3Ch] BYREF
  _DWORD v38[12]; // [sp+18h] [bp-30h] BYREF

  sub_60915B1C(a1, a2);
  v4 = (_DWORD *)operator_new_8DE25C(0x1Cu, a2, 4);
  sub_60913BB4((int)v4);
  *v4 = off_60BF9C1C;
  sub_60913D88((int)v4, 0x400000, (int)a2, 4, 1);
  sub_60913A6C(v38, (int)v4, 0);
  v37[0] = v38[0];
  v37[1] = v38[1];
  v37[2] = v38[2];
  sub_60918E08(a1 + 240, v37, 0x400000);
  v5 = dword_60CCF464;
  v6 = sub_608F28CC(dword_60CCF464);
  FIELD_U16(a1, 196) = v6;
  v7 = v6;
  v8 = FIELD_U32(v5, 232);
  v9 = v8 - v6;
  if ( v9 >= 1 )
  {
    v10 = 104LL * (unsigned int)v9;
    if ( !is_mul_ok(0x68u, v9) )
      HIDWORD(v10) = 1;
    if ( HIDWORD(v10) )
      LODWORD(v10) = -1;
    v11 = sub_608DE334(v10, (int)a2, 4);
    if ( v11 )
    {
      v12 = 0;
      v13 = 104 * v8 - 104 * v7;
      do
      {
        v14 = v11 + v12;
        v12 += 104;
        FIELD_U8(v14, 100) = 0;
      }
      while ( v13 != v12 );
      FIELD_U32(a1, 188) = v9;
      FIELD_U32(a1, 192) = v11;
    }
  }
  sead__PtrArrayImpl__allocBuffer(a1 + 200, FIELD_U32(a1, 188), (int)a2, 4);
  v15 = FIELD_U32(a1, 188);
  if ( v15 )
  {
    v16 = *(char **)(a1 + 192);
    v17 = 0;
    for ( i = v16; (v15 & 3) != v17; v16 += 104 )
    {
      memset(v16, 0, 0x64u);
      ++v17;
    }
    if ( (unsigned int)(v15 - 1) >= 3 )
    {
      v18 = v15 - v17;
      v19 = &i[104 * v17 + 312];
      do
      {
        memset(v19 - 312, 0, 0x64u);
        memset(v19 - 208, 0, 0x64u);
        memset(v19 - 104, 0, 0x64u);
        memset(v19, 0, 0x64u);
        v19 += 416;
        v18 -= 4;
      }
      while ( v18 );
    }
  }
  if ( FIELD_U8(v5, 366) )
    FIELD_U32(a1, 40) |= 8u;
  v20 = sub_608F28E8(v5);
  FIELD_U16(a1, 220) = v20;
  v21 = (FIELD_U32(v5, 228) - v20) | ((FIELD_U32(v5, 228) - (unsigned int)v20) >> 1);
  v22 = v21 | (v21 >> 2) | ((v21 | (v21 >> 2)) >> 4);
  v23 = (v22 | (v22 >> 8) | ((v22 | (v22 >> 8)) >> 16)) + 1;
  if ( v23 >> 1 )
  {
    v24 = v23 >> 1;
    v26 = v23 >> 1;
    v25 = 12LL * (v23 >> 1);
    if ( !is_mul_ok(0xCu, v26) )
      HIDWORD(v25) = 1;
    if ( HIDWORD(v25) )
      LODWORD(v25) = -1;
    v27 = sub_608DE334(v25, (int)a2, 4);
    if ( v27 )
    {
      v28 = (_DWORD *)v27;
      do
      {
        *v28 = 0;
        v28[2] = 0;
        v28 += 3;
      }
      while ( v28 != (_DWORD *)(v27 + 12 * v24) );
      FIELD_U32(a1, 212) = v24;
      FIELD_U32(a1, 216) = v27;
    }
  }
  v29 = FIELD_U32(a1, 212);
  if ( v29 )
  {
    v30 = *(_DWORD **)(a1 + 216);
    v31 = 0;
    if ( (v29 & 1) != 0 )
    {
      *v30 = -1;
      v30[1] = 0;
      v30[2] = 0;
      v31 = 1;
    }
    if ( v29 != 1 )
    {
      v32 = v29 - v31;
      v33 = &v30[3 * v31 + 5];
      do
      {
        *(v33 - 5) = -1;
        *(v33 - 4) = 0;
        *(v33 - 3) = 0;
        *(v33 - 2) = -1;
        *(v33 - 1) = 0;
        *v33 = 0;
        v33 += 6;
        v32 -= 2;
      }
      while ( v32 );
    }
  }
  v34 = sub_60920E00(43);
  return dword_60CC72E4(FIELD_U32(a1, 28), &dword_60B45CCC, v34);
}
