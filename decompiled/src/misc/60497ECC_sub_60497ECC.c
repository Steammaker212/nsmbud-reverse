/* sub_60497ECC
 * address: 0x60497ECC   size: 1284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60497ECC(int a1)
{
  int result; // r0
  int *v3; // r11
  unsigned int v4; // r1
  unsigned int v5; // r0
  bool v6; // cc
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r4
  unsigned int v10; // r6
  unsigned int v11; // r5
  unsigned int v12; // r0
  char v13; // r8
  int v14; // r7
  unsigned int v15; // r5
  unsigned int v16; // r0
  int v17; // r0
  _BYTE *v18; // r8
  unsigned int v19; // r0
  unsigned int v20; // r3
  unsigned int v21; // r5
  unsigned int v22; // r0
  int v23; // r1
  int v24; // r2
  unsigned int v25; // r3
  int v26; // r6
  unsigned int v27; // r4
  unsigned int v28; // r5
  bool v29; // zf
  unsigned int v30; // r4
  int v31; // r1

  if ( FIELD_U32(a1, 60) )
  {
    v3 = (int *)(a1 + 146864);
    result = FIELD_U32(a1, 146864);
  }
  else
  {
    v4 = 0;
    FIELD_U8(a1, 146868) = 0;
    FIELD_U8(a1, 146873) = 0;
    FIELD_U8(a1, 146872) = 0;
    FIELD_U8(a1, 146871) = 0;
    FIELD_U8(a1, 146870) = 0;
    FIELD_U8(a1, 146869) = 0;
    FIELD_U8(a1, 146874) = 0;
    v3 = (int *)(a1 + 146864);
    result = *v3;
    if ( *v3 >= 1 )
    {
      do
      {
        v5 = 0;
        if ( v4 < 4 )
          v5 = v4;
        ++v4;
        *(_DWORD *)(a1 + 20556 * v5 + 5728) |= 0x40u;
        result = *v3;
      }
      while ( (int)v4 < *v3 );
    }
    FIELD_U8(a1, 146853) = 1;
  }
  v6 = result < 1;
  v7 = 0;
  if ( result >= 1 )
    v6 = FIELD_U32(a1, 60) < 1;
  if ( !v6 )
  {
    if ( (result & 1) != 0 )
    {
      v8 = 1;
      v7 = FIELD_U8(a1, 26269);
      if ( result == 1 )
        goto LABEL_20;
    }
    else
    {
      v8 = 0;
      v7 = 0;
      if ( result == 1 )
        goto LABEL_20;
    }
    do
    {
      v9 = v8 + 1;
      v10 = 0;
      if ( v8 + 1 >= 4 )
        v9 = 0;
      if ( v8 < 4 )
        v10 = v8;
      v8 += 2;
      v7 += *(unsigned __int8 *)(a1 + 5728 + 20556 * v9 + 20541) + *(unsigned __int8 *)(a1 + 5728 + 20556 * v10 + 20541);
    }
    while ( (int)v8 < result );
  }
LABEL_20:
  if ( v7 == result )
  {
    if ( FIELD_U8(a1, 4688) )
    {
      sub_605025FC(a1 + 3648);
      FIELD_U16(a1, 4700) = 0;
      sub_6047EABC((_DWORD *)(a1 + 3688));
      result = *v3;
    }
    v11 = 0;
    if ( result >= 1 )
    {
      while ( 1 )
      {
        v12 = 0;
        if ( v11 < 4 )
          v12 = v11;
        if ( sub_604A4CB8(a1 + 20556 * v12 + 5728) == 1 )
          break;
        result = *v3;
        if ( (int)++v11 >= *v3 )
          goto LABEL_52;
      }
      result = *v3;
    }
LABEL_52:
    if ( v11 == result )
    {
      FIELD_U8(a1, 56) = 1;
      StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60CA0680);
    }
    goto LABEL_54;
  }
  v13 = 0;
  v14 = 0;
  if ( result >= 1 )
  {
    v15 = 0;
    v14 = 0;
    do
    {
      if ( FIELD_S32(a1, 60) >= 1 )
      {
        v16 = 0;
        if ( v15 < 4 )
          v16 = v15;
        v17 = a1 + 20556 * v16;
        if ( FIELD_U8(v17, 26269) )
        {
          ++v14;
        }
        else if ( sub_604A72EC(v17 + 5728) == 1 )
        {
          ++v14;
        }
      }
      result = *v3;
      ++v15;
    }
    while ( (int)v15 < *v3 );
  }
  if ( v14 == result )
    v13 = 1;
  FIELD_U8(a1, 4695) = v13;
  if ( FIELD_U8(a1, 4694) )
  {
LABEL_54:
    FIELD_U8(a1, 146853) = 0;
    return 146853;
  }
  v18 = (_BYTE *)(a1 + 146853);
  if ( FIELD_U8(a1, 4691) )
  {
    *v18 = 0;
    if ( FIELD_U8(a1, 4690) )
      return result;
    if ( FIELD_U32(a1, 4676) == 8 )
    {
      if ( result >= 1 )
      {
        v19 = 0;
        do
        {
          v20 = 0;
          if ( v19 < 4 )
            v20 = v19;
          ++v19;
          *(_DWORD *)(a1 + 20556 * v20 + 5728) |= 2u;
        }
        while ( (int)v19 < *v3 );
      }
      FIELD_U8(a1, 56) = 1;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60CA06A0);
    }
    sub_605025FC(a1 + 3648);
    FIELD_U16(a1, 4700) = 0;
    sub_6047EABC((_DWORD *)(a1 + 3688));
    FIELD_U8(a1, 4691) = 0;
    FIELD_U8(a1, 4688) = 1;
    result = *v3;
  }
  *v18 = 1;
  if ( result < 1 )
    return result;
  v21 = 0;
  do
  {
    v22 = 0;
    if ( v21 < 4 )
      v22 = v21;
    result = sub_604A4D48(a1 + 20556 * v22 + 5728);
    if ( result == 1 )
      goto LABEL_85;
    v23 = *v3;
    ++v21;
  }
  while ( (int)v21 < *v3 );
  if ( v23 < 1 )
    return result;
  v24 = FIELD_U32(a1, 146848);
  if ( (v23 & 1) == 0 )
  {
    result = -1;
    v25 = 0;
    if ( v23 == 1 )
      goto LABEL_79;
    goto LABEL_69;
  }
  result = 0;
  v25 = 1;
  if ( FIELD_U32(a1, 26256) != v24 )
    result = -1;
  if ( v23 != 1 )
  {
LABEL_69:
    v26 = a1 + 5728;
    do
    {
      v27 = 0;
      v28 = 0;
      if ( v25 < 4 )
        v27 = v25;
      v29 = *(_DWORD *)(v26 + 20556 * v27 + 20528) == v24;
      v30 = v25 + 1;
      if ( v29 )
        result = v25;
      v25 += 2;
      if ( v30 < 4 )
        v28 = v30;
      if ( *(_DWORD *)(v26 + 20556 * v28 + 20528) == v24 )
        result = v30;
    }
    while ( (int)v25 < v23 );
  }
LABEL_79:
  if ( result >= 0 )
  {
    if ( (unsigned int)result >= 4 )
      result = 0;
    v31 = a1 + 20556 * result;
    if ( FIELD_U8(v31, 26272)
      || !FIELD_U8(v31, 26275) && (result = *(unsigned __int8 *)(a1 + 20556 * result + 26269)) == 0 )
    {
      result = sub_6047F384(a1 + 146876, 0x4000);
      if ( result == 1 )
      {
        FIELD_U32(a1, 87988) |= 2u;
        sub_60502694(a1 + 3648);
LABEL_85:
        result = 0;
        *v18 = 0;
      }
    }
  }
  return result;
}
