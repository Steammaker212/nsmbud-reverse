/* sub_603C4798
 * address: 0x603C4798   size: 1300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C4798(int a1)
{
  int result; // r0
  _BYTE *v3; // r7
  _BYTE *v4; // r6
  _BYTE *v5; // r5
  int v6; // r1
  int v7; // r0
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r0
  _WORD *v13; // r5
  __int16 v14; // r0
  int v15; // r0
  int v16; // r12
  int v17; // r2
  unsigned int v18; // r1
  int v19; // r8
  unsigned int i; // r9
  unsigned int v21; // r1
  int v22; // r0
  int *v23; // r0
  int *v24; // r1
  unsigned int v25; // r0
  int v26; // r0
  int v27; // r6
  unsigned __int16 v28; // r2
  _WORD *v29; // r10
  int v30; // r0
  unsigned int v31; // r0
  int v32; // r0
  _DWORD *v33; // r6
  int v34; // t1
  unsigned int v35; // r1
  int v36; // r2
  _WORD *v37; // r5
  int *v38; // r1
  int *v39; // r0
  int *v40; // r4
  int v41; // t1
  unsigned int v42; // r1
  unsigned int v43; // r1
  int speed; // [sp+10h] [bp-38h] BYREF
  int target[13]; // [sp+14h] [bp-34h] BYREF

  v3 = (_BYTE *)(a1 + 27021);
  result = FIELD_U8(a1, 27021);
  if ( result )
    return result;
  v4 = (_BYTE *)(a1 + 27020);
  result = FIELD_U8(a1, 27020);
  if ( FIELD_U8(a1, 27020) )
    return result;
  v5 = (_BYTE *)(a1 + 27036);
  if ( FIELD_U8(a1, 27036) )
  {
    if ( !FIELD_U8(a1, 27038) )
    {
      target[0] = 18874368;
      speed = 458752;
      moveValueTo((int *)(a1 + 27000), target, &speed);
      target[0] = FIELD_U32(a1, 27008) ^ 0x80000000;
      if ( sub_6083246C((int *)(a1 + 164), target, (signed int *)(a1 + 27000)) == 1 )
      {
        v6 = FIELD_U32(a1, 26992);
        if ( v6 )
        {
          FIELD_U32(a1, 26992) = v6 - 1;
        }
        else
        {
          *v5 = 0;
          FIELD_U32(a1, 27008) ^= 0x80000000;
          FIELD_U32(a1, 27000) = 0x200000;
        }
      }
    }
    v10 = FIELD_U32(a1, 26996);
    if ( v10 )
    {
      v11 = v10 - 1;
      FIELD_U32(a1, 26996) = v11;
      if ( !v11 )
        FIELD_U16(a1, 14988) = 8;
    }
    goto LABEL_24;
  }
  v7 = FIELD_U32(a1, 80);
  if ( !v7 )
  {
    v9 = FIELD_U32(a1, 27004);
    if ( v9 < 0 )
    {
      if ( v9 == 0x80000000 )
      {
LABEL_19:
        FIELD_U32(a1, 80) = v7 ^ 1;
        *v5 = 1;
        FIELD_U32(a1, 26992) = 120;
        FIELD_U32(a1, 26996) = 8;
        goto LABEL_24;
      }
      v9 = -v9;
    }
    if ( (unsigned int)v9 < 0x35555556 )
      goto LABEL_24;
    goto LABEL_19;
  }
  if ( v7 != 1 )
    goto LABEL_24;
  v8 = FIELD_U32(a1, 27004);
  if ( v8 < 0 )
  {
    if ( v8 == 0x80000000 )
      goto LABEL_24;
    v8 = -v8;
  }
  if ( (unsigned int)v8 < 0x60000001 )
    goto LABEL_19;
LABEL_24:
  result = FIELD_U8(a1, 27038);
  if ( FIELD_U8(a1, 27038) )
    return result;
  v13 = (_WORD *)(a1 + 14988);
  v12 = FIELD_S16(a1, 14988);
  if ( v12 >= 1 )
  {
    v14 = v12 - 1;
    *v13 = v14;
    if ( !v14 )
      FIELD_U16(a1, 15016) = 8;
    goto LABEL_38;
  }
  if ( (unsigned __int16)v12 != 0xFFFF )
  {
    if ( *v3 || *v4 )
      v15 = 0x8000000;
    else
      v15 = 18874368;
    target[0] = v15;
    sub_6083224C((int *)(a1 + 14984), (int *)(a1 + 164), target);
    v16 = FIELD_U32(a1, 164);
    v17 = FIELD_U32(a1, 14984) - v16;
    if ( v17 >= 0 )
    {
LABEL_36:
      if ( (unsigned int)v17 < 0xB60B60 )
      {
        FIELD_U32(a1, 14984) = v16;
        *v13 = -1;
      }
      goto LABEL_38;
    }
    if ( v17 != 0x80000000 )
    {
      v17 = v16 - FIELD_U32(a1, 14984);
      goto LABEL_36;
    }
  }
LABEL_38:
  v18 = FIELD_U8(a1, 27030);
  if ( v18 < 2 )
  {
    result = 0x10000;
    goto LABEL_64;
  }
  v19 = -65536;
  for ( i = 1; (int)i < (int)v18; ++i )
  {
    v25 = 0;
    if ( i < 0x20 )
      v25 = i;
    v26 = 7 * v25;
    v27 = a1 + 4 * v26;
    v29 = (_WORD *)(v27 + 14988);
    v28 = FIELD_U16(v27, 14988);
    if ( (__int16)v28 < 1 )
    {
      if ( v28 == 0xFFFF )
        goto LABEL_62;
      if ( *v3 || FIELD_U8(a1, 27020) )
      {
        v24 = (int *)(a1 + 164);
        target[0] = 0x8000000;
        v23 = (int *)(v27 + 14984);
      }
      else
      {
        target[0] = v19 + 18874368;
        v21 = i - 1;
        v22 = a1 + 14964 + 4 * v26;
        if ( i - 1 >= 0x20 )
          v21 = 0;
        v23 = (int *)(v22 + 20);
        v24 = (int *)(a1 + 14964 + 28 * v21 + 20);
      }
      sub_6083224C(v23, v24, target);
      v32 = FIELD_U32(a1, 164);
      v34 = FIELD_U32(v27, 14984);
      v33 = (_DWORD *)(v27 + 14984);
      v35 = v34 - v32;
      if ( v34 - v32 < 0 )
      {
        if ( v35 == 0x80000000 )
          goto LABEL_62;
        v35 = -v35;
      }
      if ( v35 < 0xB60B60 )
      {
        *v33 = v32;
        *v29 = -1;
      }
    }
    else
    {
      *v29 = v28 - 1;
      if ( v28 == 1 )
      {
        v30 = a1 + 15860;
        if ( i != (unsigned __int8)v18 - 1 )
        {
          v31 = i + 1;
          if ( i + 1 >= 0x20 )
            v31 = 0;
          v30 = a1 + 28 * v31 + 14964;
        }
        FIELD_U16(v30, 24) = 8;
      }
    }
LABEL_62:
    v18 = FIELD_U8(a1, 27030);
    v19 -= 0x10000;
  }
  v4 = (_BYTE *)(a1 + 27020);
  result = -v19;
LABEL_64:
  v37 = (_WORD *)(a1 + 15884);
  v36 = FIELD_S16(a1, 15884);
  if ( v36 >= 1 )
  {
    *v37 = v36 - 1;
    return v36 - 1;
  }
  if ( (unsigned __int16)v36 != 0xFFFF )
  {
    if ( *v3 || *v4 )
    {
      v38 = (int *)(a1 + 164);
      target[0] = 0x8000000;
      v39 = (int *)(a1 + 15880);
    }
    else
    {
      v43 = v18 - 1;
      target[0] = 18874368 - result;
      if ( v43 >= 0x20 )
        v43 = 0;
      v39 = (int *)(a1 + 15880);
      v38 = (int *)(a1 + 28 * v43 + 14984);
    }
    sub_6083224C(v39, v38, target);
    v41 = FIELD_U32(a1, 15880);
    v40 = (int *)(a1 + 15880);
    result = *(v40 - 3929);
    v42 = v41 - result;
    if ( v41 - result >= 0 )
    {
LABEL_73:
      if ( v42 < 0xB60B60 )
      {
        *v40 = result;
        *v37 = -1;
      }
    }
    else if ( v42 != 0x80000000 )
    {
      v42 = -v42;
      goto LABEL_73;
    }
  }
  return result;
}
