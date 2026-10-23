/* sub_6092D8A4
 * address: 0x6092D8A4   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092D8A4(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r10
  unsigned int v6; // r0
  _QWORD *v7; // r0
  _QWORD *v8; // r7
  int v9; // r4
  _QWORD *v10; // r5
  int v11; // r0
  int v12; // r1
  int i; // r12
  int v14; // lr
  unsigned int *v15; // r5
  unsigned int v16; // r11
  unsigned int *v17; // r5
  unsigned int v18; // r3
  unsigned int *v19; // r5
  unsigned int v20; // r3
  unsigned int *v21; // r5
  unsigned int v22; // r3
  unsigned int *v23; // r5
  unsigned int v24; // r3
  int result; // r0
  int v26; // r5
  int v27; // r4
  unsigned int v28; // kr08_4
  unsigned int v29; // r0
  int v30; // r1
  int v31; // r5
  int v32; // r6
  signed int v33; // r4
  __int64 v34; // r0
  int v35; // r0
  int v36; // r6
  int v37; // r7
  int v38; // r4
  unsigned int v39; // r5
  _DWORD *v40; // r0
  _DWORD *v41; // r2
  int v42; // r1
  int *v43; // r2
  _QWORD *v44; // [sp+0h] [bp-30h]
  int v45; // [sp+4h] [bp-2Ch]

  v45 = (a2 < 2) & (a3 ^ 1) | a3;
  sub_60938E68(a1);
  HIDWORD(v5) = a1[2];
  if ( SHIDWORD(v5) >= 1 )
  {
    LODWORD(v5) = 2144;
    v6 = 2144 * HIDWORD(v5) + 8;
    if ( v6 < 2144 * HIDWORD(v5) )
      v6 = -1;
    if ( !is_mul_ok(0x860u, HIDWORD(v5)) )
      v6 = -1;
    v7 = (_QWORD *)sub_608DE334(v6, a4, 4);
    v8 = v7;
    if ( v7 )
    {
      *v7 = v5;
      v9 = 0;
      v10 = v7 + 183;
      v44 = v7 + 1;
      do
      {
        agl_TextureSampler_ref((int)&v8[v9 + 1]);
        agl_TextureSampler_ref((int)&v8[v9 + 44]);
        sub_60919E88(&v8[v9 + 87]);
        sub_6091ABEC(&v8[v9 + 95]);
        agl_TextureSampler_ref((int)&v10[v9 - 44]);
        agl_TextureSampler_ref((int)&v10[v9]);
        agl_TextureSampler_ref((int)&v8[v9 + 226]);
        v9 += 268;
      }
      while ( 268 * HIDWORD(v5) != v9 );
      a1[206] = HIDWORD(v5);
      a1[207] = v44;
    }
  }
  v11 = a1[206];
  if ( v11 )
  {
    v12 = a1[207];
    for ( i = 0; i != v11; ++i )
    {
      v14 = v12 + 2144 * i;
      v15 = (unsigned int *)(v14 + 328);
      FIELD_U16(v14, 316) = 257;
      FIELD_U8(v14, 318) = 0;
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 | 4, v15) );
      v17 = (unsigned int *)(v14 + 672);
      FIELD_U16(v14, 660) = 257;
      FIELD_U8(v14, 662) = 0;
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 | 4, v17) );
      FIELD_U16(v14, 1420) = 257;
      FIELD_U8(v14, 1422) = 1;
      v19 = (unsigned int *)(v14 + 1432);
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 | 4, v19) );
      v21 = (unsigned int *)(v14 + 1784);
      FIELD_U16(v14, 1772) = 257;
      FIELD_U8(v14, 1774) = 1;
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 | 4, v21) );
      v23 = (unsigned int *)(v14 + 2128);
      FIELD_U16(v14, 2116) = 257;
      FIELD_U8(v14, 2118) = 1;
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 | 4, v23) );
      FIELD_U32(v14, 1096) = 0;
      FIELD_U32(v14, 1448) = 0;
    }
  }
  result = v45;
  if ( !v45 )
  {
    v26 = a1[3];
    if ( v26 >= 2 )
    {
      v27 = v26 - 1;
      v28 = 792 * (v26 - 1);
      v29 = v28 + 8;
      if ( v28 + 8 < v28 )
        v29 = -1;
      if ( !is_mul_ok(0x318u, v26 - 1) )
        v29 = -1;
      result = sub_608DE334(v29, a4, 4);
      if ( result )
      {
        v30 = 792 * v26;
        v31 = result + 8;
        *(_DWORD *)result = 792;
        FIELD_U32(result, 4) = v27;
        result += 8;
        v32 = v30 - 792;
        do
        {
          v32 -= 792;
          result = sub_6092C164(result) + 792;
        }
        while ( v32 );
        a1[210] = v27;
        a1[211] = v31;
      }
    }
  }
  v33 = a1[3];
  if ( v33 >= 1 )
  {
    v34 = 4LL * (unsigned int)v33;
    if ( !is_mul_ok(4u, v33) )
      HIDWORD(v34) = 1;
    if ( HIDWORD(v34) )
      LODWORD(v34) = -1;
    v35 = sub_608DE334(v34, a4, 4);
    if ( v35 )
    {
      a1[208] = v33;
      a1[209] = v35;
    }
    result = a1[3];
    if ( result >= 1 )
    {
      v36 = -792;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      do
      {
        v40 = a1 + 8;
        if ( v38 )
        {
          v40 = (_DWORD *)a1[211];
          if ( a1[210] > v39 - 1 )
            v40 = (_DWORD *)((char *)v40 + v36);
        }
        v41 = (_DWORD *)a1[209];
        if ( a1[208] > v39 )
          v41 = (_DWORD *)((char *)v41 + v38);
        *v41 = v40;
        v42 = a1[7];
        v43 = (int *)a1[209];
        if ( a1[6] > v39 )
          v42 += v37;
        if ( a1[208] > v39 )
          v43 = (int *)((char *)v43 + v38);
        sub_6092C454(*v43, v42);
        result = a1[3];
        ++v39;
        v37 += 28;
        v36 += 792;
        v38 += 4;
      }
      while ( (int)v39 < result );
    }
  }
  return result;
}
