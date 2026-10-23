/* sub_6055CBFC
 * address: 0x6055CBFC   size: 1892   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055CBFC(_DWORD *a1)
{
  int *v2; // r1
  int v3; // r0
  int v4; // r1
  _DWORD *v5; // r7
  unsigned int v6; // r10
  int v7; // r4
  int v8; // r1
  int v9; // r5
  unsigned int v10; // r0
  _DWORD *v11; // r0
  int v12; // r1
  int *v13; // r6
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r2
  unsigned int v18; // r0
  float v19; // s16
  int v20; // r6
  unsigned int v21; // r0
  unsigned int v22; // r0
  unsigned int v23; // r0
  unsigned int v24; // r0
  unsigned int v25; // r0
  unsigned int v26; // r0
  unsigned int v27; // r0
  unsigned int v28; // r0
  unsigned int v29; // r0
  _BOOL4 v31; // r1
  int *v32; // [sp+0h] [bp-68h]
  _DWORD *v33; // [sp+4h] [bp-64h]
  int *v34; // [sp+8h] [bp-60h]
  _DWORD *v35; // [sp+Ch] [bp-5Ch]
  _DWORD *v36; // [sp+10h] [bp-58h]
  _DWORD *v37; // [sp+14h] [bp-54h]
  _DWORD *v38; // [sp+18h] [bp-50h]
  _DWORD *v39; // [sp+1Ch] [bp-4Ch]
  _DWORD *v40; // [sp+20h] [bp-48h]
  _DWORD *v41; // [sp+24h] [bp-44h]
  _DWORD *v42; // [sp+28h] [bp-40h]
  _DWORD *v43; // [sp+2Ch] [bp-3Ch]
  _DWORD *v44; // [sp+30h] [bp-38h]

  *(_BYTE *)(a1[3365] + 64) &= ~1u;
  *(_BYTE *)(a1[3366] + 64) &= ~1u;
  v2 = a1 + 3367;
  *(_BYTE *)(a1[3367] + 64) &= ~1u;
  v3 = dword_60CC6D78;
  if ( (*(_BYTE *)(FIELD_U32(dword_60CC6E04, 40)
                 + 520 * *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + 7)
                 + 50)
      & 1) != 0
    || FIELD_U8(dword_60CC6D78, 109051) )
  {
    v4 = *v2;
  }
  else
  {
    if ( FIELD_U32(dword_60CC6D78, 536) == 3 || (v31 = 0, FIELD_S32(dword_60CC6D78, 124) >= 4) )
      v31 = (FIELD_U8(dword_60CC6D78, 521) & 1) == 0;
    v4 = a1[v31 + 3365];
  }
  v5 = a1;
  v6 = 1;
  v7 = 4;
  FIELD_U8(v4, 64) |= 1u;
  v8 = FIELD_U32(v3, 412);
  a1[3435] = v8;
  v34 = a1 + 3435;
  if ( FIELD_U8(v3, 512) )
    v8 = 9;
  a1[3435] = v8;
  v9 = dword_60C8D864;
  a1[3401] = 0;
  v36 = a1 + 3401;
  a1[3404] = 0;
  v37 = a1 + 3404;
  a1[3407] = 0;
  v38 = a1 + 3407;
  a1[3410] = 0;
  v39 = a1 + 3410;
  a1[3413] = 0;
  v40 = a1 + 3413;
  a1[3416] = 0;
  v41 = a1 + 3416;
  a1[3419] = 0;
  v42 = a1 + 3419;
  a1[3422] = 0;
  v43 = a1 + 3422;
  a1[3425] = 0;
  v44 = a1 + 3425;
  a1[3398] = 2;
  v35 = a1 + 3398;
  a1[3399] = 0;
  v33 = a1 + 3399;
  a1[3400] = 3;
  v32 = a1 + 3400;
  do
  {
    if ( sub_6022DC58(v9, v7 - 3) )
    {
      v10 = 0;
      if ( v6 < 0xA )
        v10 = v6;
      ++v6;
      v11 = &a1[3 * v10];
      v11[3398] = 2;
      v11[3399] = v7 - 3;
      v11[3400] = v7;
    }
    ++v7;
  }
  while ( v7 != 13 );
  v12 = 0;
  a1[3434] = 0;
  v13 = a1 + 3434;
  v14 = *v34;
  if ( *v33 == *v34 )
    goto LABEL_21;
  v12 = 1;
  if ( v5[3402] == v14
    || (v12 = 2, v5[3405] == v14)
    || (v12 = 3, v5[3408] == v14)
    || (v12 = 4, v5[3411] == v14)
    || (v12 = 5, v5[3414] == v14)
    || (v12 = 6, v5[3417] == v14)
    || (v12 = 7, v5[3420] == v14)
    || (v12 = 8, v5[3423] == v14) )
  {
LABEL_21:
    *v13 = v12;
  }
  else if ( v5[3426] == v14 )
  {
    *v13 = 9;
  }
  sub_60473DE4(v5 + 11, 0, &dword_60CADD20, 0);
  *((_BYTE *)v5 + 13584) = 1;
  v15 = *v13;
  if ( *v13 < 0 )
  {
    v16 = 10;
    while ( v16 >= 1 )
    {
      --v16;
      v17 = 0;
      if ( (unsigned int)v16 < 0xA )
        v17 = v16;
      if ( v5[3 * v17 + 3398] == 2 )
        goto LABEL_31;
    }
  }
  else if ( v15 > 9 || !v5[3 * v15 + 3398] )
  {
    v16 = 0;
LABEL_31:
    *v13 = v16;
  }
  sub_6055F98C(v5);
  sub_6055F880(v5, 1);
  v18 = FIELD_U32(dword_60C99DEC, 48) - 1;
  if ( v18 > 4 )
    v19 = 0.0;
  else
    v19 = flt_60B04150[v18];
  v20 = 0;
  sub_604741D8(v5 + 11, 5u, &dword_60CADD50, 0);
  sub_6047455C((int)(v5 + 11), 5u, v19);
  sub_6047459C((int)(v5 + 11), 5u);
  *((_BYTE *)v5 + 13749) = 1;
  *((_BYTE *)v5 + 13751) = 1;
  *(_BYTE *)(v5[3351] + 64) &= ~1u;
  *(_BYTE *)(v5[3352] + 64) &= ~1u;
  *(_BYTE *)(v5[3353] + 64) &= ~1u;
  *(_BYTE *)(v5[3354] + 64) &= ~1u;
  *(_BYTE *)(v5[3355] + 64) &= ~1u;
  *(_BYTE *)(v5[3356] + 64) &= ~1u;
  *(_BYTE *)(v5[3357] + 64) &= ~1u;
  *(_BYTE *)(v5[3358] + 64) &= ~1u;
  *(_BYTE *)(v5[3359] + 64) &= ~1u;
  *(_BYTE *)(v5[3360] + 64) &= ~1u;
  if ( *v35 == 2 )
  {
    if ( (unsigned int)*v32 < 0xE )
      v20 = *v32;
    *(_BYTE *)(v5[v20 + 3348] + 64) |= 1u;
  }
  if ( *v36 == 2 )
  {
    v21 = v5[3403];
    if ( v21 >= 0xE )
      v21 = 0;
    *(_BYTE *)(v5[v21 + 3348] + 64) |= 1u;
  }
  if ( *v37 == 2 )
  {
    v22 = v5[3406];
    if ( v22 >= 0xE )
      v22 = 0;
    *(_BYTE *)(v5[v22 + 3348] + 64) |= 1u;
  }
  if ( *v38 == 2 )
  {
    v23 = v5[3409];
    if ( v23 >= 0xE )
      v23 = 0;
    *(_BYTE *)(v5[v23 + 3348] + 64) |= 1u;
  }
  if ( *v39 == 2 )
  {
    v24 = v5[3412];
    if ( v24 >= 0xE )
      v24 = 0;
    *(_BYTE *)(v5[v24 + 3348] + 64) |= 1u;
  }
  if ( *v40 == 2 )
  {
    v25 = v5[3415];
    if ( v25 >= 0xE )
      v25 = 0;
    *(_BYTE *)(v5[v25 + 3348] + 64) |= 1u;
  }
  if ( *v41 == 2 )
  {
    v26 = v5[3418];
    if ( v26 >= 0xE )
      v26 = 0;
    *(_BYTE *)(v5[v26 + 3348] + 64) |= 1u;
  }
  if ( *v42 == 2 )
  {
    v27 = v5[3421];
    if ( v27 >= 0xE )
      v27 = 0;
    *(_BYTE *)(v5[v27 + 3348] + 64) |= 1u;
  }
  if ( *v43 == 2 )
  {
    v28 = v5[3424];
    if ( v28 >= 0xE )
      v28 = 0;
    *(_BYTE *)(v5[v28 + 3348] + 64) |= 1u;
  }
  if ( *v44 == 2 )
  {
    v29 = v5[3427];
    if ( v29 >= 0xE )
      v29 = 0;
    *(_BYTE *)(v5[v29 + 3348] + 64) |= 1u;
  }
  return sub_6081699C(dword_60CC6B68);
}
