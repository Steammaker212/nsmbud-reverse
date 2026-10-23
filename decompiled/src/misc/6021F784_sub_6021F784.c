/* sub_6021F784
 * address: 0x6021F784   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021F784(_DWORD *a1, int *a2, int *a3, unsigned int a4)
{
  int v7; // r6
  int v8; // r4
  signed int v9; // r7
  unsigned int v10; // r11
  int v12; // r8
  unsigned int U32; // r0
  int v14; // r5
  unsigned int v15; // r11
  unsigned int v16; // r7
  int v17; // r1
  int v18; // r0
  int v19; // r1
  int v21; // r2
  int *v22; // [sp+4h] [bp-44h]
  int v24; // [sp+Ch] [bp-3Ch]
  int v25; // [sp+10h] [bp-38h]
  int v26; // [sp+14h] [bp-34h]
  _DWORD v27[12]; // [sp+18h] [bp-30h] BYREF

  v7 = dword_60AFD488[5 * *a3 + a4];
  v8 = sub_601A443C(dword_60C89E18, *a3, a3[1]);
  if ( FIELD_S32(v8, 28) < 1 )
  {
    v10 = 0;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    do
    {
      if ( sub_60183038(v8, v9++, v7) != 0 )
        ++v10;
    }
    while ( v9 < FIELD_U32(v8, 28) );
  }
  if ( !a4 )
  {
    if ( a1[5] )
      --v10;
    v26 = 0;
    goto LABEL_19;
  }
  if ( a1[4] )
    --v10;
  v26 = 1;
  if ( a4 == 1 )
  {
LABEL_19:
    if ( a1[6] )
      --v10;
    v25 = 0;
    goto LABEL_22;
  }
  if ( a1[5] )
    --v10;
  if ( a4 == 2 )
  {
    v25 = 1;
    v26 = 0;
LABEL_22:
    if ( a1[7] )
      --v10;
    v24 = 0;
    goto LABEL_25;
  }
  if ( a1[6] )
    --v10;
  if ( a4 == 3 )
  {
    v24 = 1;
    v25 = 0;
    v26 = 0;
  }
  else
  {
    v12 = 1;
    v25 = 0;
    if ( a1[7] )
      --v10;
    v26 = 0;
    v24 = 0;
    if ( a4 == 4 )
      goto LABEL_27;
  }
LABEL_25:
  v12 = 0;
  if ( a1[8] )
    --v10;
LABEL_27:
  U32 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
  if ( FIELD_S32(v8, 28) <= 0 )
    return 0;
  v22 = a2;
  v14 = (U32 * (unsigned __int64)v10) >> 32;
  v15 = a4;
  v16 = 0;
  while ( 1 )
  {
    if ( !sub_60183038(v8, v16, v7) )
      goto LABEL_46;
    v17 = a3[1];
    v27[0] = *a3;
    v27[1] = v17;
    v27[2] = v16;
    v18 = sub_601DFFE4((int)v27);
    if ( a4 )
      v19 = a1[4] == v18;
    else
      v19 = 0;
    if ( !v26 )
      v19 |= a1[5] == v18;
    if ( !v25 )
      v19 |= a1[6] == v18;
    if ( !v24 )
      v19 |= a1[7] == v18;
    if ( !v12 )
      break;
    if ( !v19 )
      goto LABEL_43;
LABEL_46:
    if ( (signed int)++v16 >= FIELD_U32(v8, 28) )
      return 0;
  }
  if ( v19 | (a1[8] == v18) )
    goto LABEL_46;
LABEL_43:
  if ( v14 )
  {
    if ( v14 > 0 )
      --v14;
    goto LABEL_46;
  }
  v21 = a3[1];
  if ( a4 >= 5 )
    v15 = 0;
  *v22 = *a3;
  v22[1] = v21;
  v22[2] = v16;
  a1[v15 + 4] = v18;
  return 1;
}
