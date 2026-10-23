/* sub_604A8338
 * address: 0x604A8338   size: 1272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A8338(int a1)
{
  int result; // r0
  int *v3; // r9
  unsigned int v4; // r1
  unsigned int v5; // r0
  int v6; // r7
  unsigned int v7; // r2
  int v8; // r1
  unsigned int v9; // r4
  int v10; // r4
  unsigned int v11; // r2
  int v12; // r3
  unsigned int v13; // r4
  unsigned int v14; // r6
  bool v15; // zf
  unsigned int v16; // r4
  unsigned int v17; // r5
  unsigned int v18; // r0
  char v19; // r4
  int v20; // r5
  unsigned int v21; // r6
  unsigned int v22; // r0
  int v23; // r0
  _BYTE *v24; // r10
  unsigned int v25; // r0
  unsigned int v26; // r2
  unsigned int v27; // r6
  unsigned int v28; // r0
  int v29; // r0

  if ( FIELD_U32(a1, 60) )
  {
    v3 = (int *)(a1 + 279736);
    result = FIELD_U32(a1, 279736);
    if ( result < 1 )
      goto LABEL_17;
LABEL_9:
    if ( FIELD_S32(a1, 60) >= 1 )
    {
      v6 = -1;
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = 0;
        if ( v7 < 4 )
          v9 = v7;
        v10 = a1 + 20556 * v9;
        if ( !FIELD_U32(v10, 24260) )
          v6 = v7;
        ++v7;
        v8 += FIELD_U8(v10, 24273);
      }
      while ( (int)v7 < result );
      goto LABEL_35;
    }
    v8 = 0;
    if ( (result & 1) != 0 )
    {
      v6 = FIELD_U32(a1, 24260);
      v11 = 1;
      if ( v6 )
        v6 = -1;
      if ( result == 1 )
      {
LABEL_35:
        if ( v8 != result )
          goto LABEL_44;
LABEL_36:
        if ( FIELD_U8(a1, 86996) )
        {
          sub_60502548(a1 + 85956);
          FIELD_U16(a1, 87008) = 0;
          sub_6047EABC((_DWORD *)(a1 + 85996));
          result = *v3;
        }
        v17 = 0;
        if ( result >= 1 )
        {
          while ( 1 )
          {
            v18 = 0;
            if ( v17 < 4 )
              v18 = v17;
            if ( sub_604A4CB8(a1 + 20556 * v18 + 3732) )
              break;
            result = *v3;
            if ( (int)++v17 >= *v3 )
              goto LABEL_67;
          }
          result = *v3;
        }
LABEL_67:
        if ( v17 == result )
        {
          FIELD_U8(a1, 56) = 1;
          StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60CA14F0);
        }
        goto LABEL_69;
      }
    }
    else
    {
      v6 = -1;
      v11 = 0;
      if ( result == 1 )
        goto LABEL_35;
    }
    v12 = a1 + 3732;
    v8 = 0;
    do
    {
      v13 = 0;
      v14 = 0;
      if ( v11 < 4 )
        v13 = v11;
      v15 = *(_DWORD *)(v12 + 20556 * v13 + 20528) == 0;
      v16 = v11 + 1;
      if ( v15 )
        v6 = v11;
      v11 += 2;
      if ( v16 < 4 )
        v14 = v16;
      if ( !*(_DWORD *)(v12 + 20556 * v14 + 20528) )
        v6 = v16;
    }
    while ( (int)v11 < result );
    goto LABEL_35;
  }
  v4 = 0;
  FIELD_U8(a1, 279700) = 0;
  FIELD_U8(a1, 279705) = 0;
  FIELD_U8(a1, 279704) = 0;
  FIELD_U8(a1, 279703) = 0;
  FIELD_U8(a1, 279702) = 0;
  FIELD_U8(a1, 279701) = 0;
  FIELD_U8(a1, 279706) = 0;
  v3 = (int *)(a1 + 279736);
  result = *v3;
  if ( *v3 >= 1 )
  {
    do
    {
      v5 = 0;
      if ( v4 < 4 )
        v5 = v4;
      ++v4;
      *(_DWORD *)(a1 + 20556 * v5 + 3732) |= 0x40u;
      result = *v3;
    }
    while ( (int)v4 < *v3 );
  }
  FIELD_U8(a1, 279730) = 1;
  if ( result >= 1 )
    goto LABEL_9;
LABEL_17:
  v6 = -1;
  if ( !result )
    goto LABEL_36;
LABEL_44:
  v19 = 0;
  v20 = 0;
  if ( result >= 1 )
  {
    v21 = 0;
    v20 = 0;
    do
    {
      if ( FIELD_S32(a1, 60) >= 1 )
      {
        v22 = 0;
        if ( v21 < 4 )
          v22 = v21;
        v23 = a1 + 20556 * v22;
        if ( FIELD_U8(v23, 24273) )
        {
          ++v20;
        }
        else if ( sub_604A72EC(v23 + 3732) )
        {
          ++v20;
        }
      }
      result = *v3;
      ++v21;
    }
    while ( (int)v21 < *v3 );
  }
  if ( v20 == result )
    v19 = 1;
  FIELD_U8(a1, 87003) = v19;
  if ( FIELD_U8(a1, 87002) )
  {
LABEL_69:
    FIELD_U8(a1, 279730) = 0;
    return 279730;
  }
  v24 = (_BYTE *)(a1 + 279730);
  if ( FIELD_U8(a1, 86999) )
  {
    *v24 = 0;
    if ( FIELD_U8(a1, 86998) )
      return result;
    if ( FIELD_U32(a1, 86984) == 12 )
    {
      if ( result >= 1 )
      {
        v25 = 0;
        do
        {
          v26 = 0;
          if ( v25 < 4 )
            v26 = v25;
          ++v25;
          *(_DWORD *)(a1 + 20556 * v26 + 3732) |= 2u;
        }
        while ( (int)v25 < *v3 );
      }
      FIELD_U8(a1, 56) = 1;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60CA1650);
    }
    sub_60502548(a1 + 85956);
    FIELD_U16(a1, 87008) = 0;
    sub_6047EABC((_DWORD *)(a1 + 85996));
    FIELD_U8(a1, 86999) = 0;
    FIELD_U8(a1, 86996) = 1;
    result = *v3;
  }
  *v24 = 1;
  if ( result >= 1 )
  {
    v27 = 0;
    do
    {
      v28 = 0;
      if ( v27 < 4 )
        v28 = v27;
      if ( sub_604A4D48(a1 + 20556 * v28 + 3732) )
        goto LABEL_83;
      result = *v3;
    }
    while ( (int)++v27 < *v3 );
  }
  if ( v6 >= 0 )
  {
    if ( (unsigned int)v6 >= 4 )
      v6 = 0;
    v29 = a1 + 20556 * v6;
    if ( FIELD_U8(v29, 24276)
      || (result = FIELD_U8(v29, 24279)) == 0
      && (result = *(unsigned __int8 *)(a1 + 20556 * v6 + 24273), !*(_BYTE *)(a1 + 20556 * v6 + 24273)) )
    {
      result = sub_6047F384(a1 + 277668, 0x4000);
      if ( result == 1 )
      {
        FIELD_U32(a1, 88072) |= 2u;
        sub_60502694(a1 + 85956);
LABEL_83:
        result = 0;
        *v24 = 0;
      }
    }
  }
  return result;
}
