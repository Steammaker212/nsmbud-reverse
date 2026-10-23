/* sub_6065DB20
 * address: 0x6065DB20   size: 1392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065DB20(int a1, int a2)
{
  char v2; // r12
  float *v3; // r4
  _BYTE *v4; // r8
  _DWORD *v5; // r11
  _BYTE *v6; // r0
  _DWORD *v7; // r5
  int v8; // r10
  int v9; // r9
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int result; // r0
  int v14; // r2
  int v15; // r2
  int v16; // r2
  int *v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r7
  int v21; // r2
  int v22; // r1
  int v23; // r2
  bool v24; // zf
  int v25; // r1
  int v28; // [sp+60h] [bp-38h]
  int v29; // [sp+64h] [bp-34h]
  int v30; // [sp+68h] [bp-30h]
  int v31; // [sp+6Ch] [bp-2Ch]

  FIELD_U32(a1, 6948) = 0;
  v3 = (float *)(a1 + 6948);
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  FIELD_U8(a1, 6916) = 0;
  v4 = (_BYTE *)(a1 + 6916);
  FIELD_U32(a1, 6892) = 0;
  v5 = (_DWORD *)(a1 + 6892);
  FIELD_U8(a1, 6968) = 0;
  v6 = (_BYTE *)(a1 + 6968);
  v6[3] = 0;
  v6[2] = 0;
  v6[1] = 0;
  v7 = *((_DWORD **)v6 - 70);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(*v7 + 2196);
      if ( (*(_BYTE *)(*v7 + 2232) & 1) == 0 )
        *v3 = FIELD_F32(v8, 124) + *v3;
      if ( (unsigned __int8)(FIELD_U8(v8, 533) - 1) > 1u )
      {
        ++*v5;
        if ( Actor__getProfileId((Actor *)v8) == 641 || Actor__getProfileId((Actor *)v8) == 644 )
          FIELD_U16(a1, 6946) = 15;
        goto LABEL_35;
      }
      v9 = FIELD_S8(v8, 84);
      v10 = (*v5)++;
      if ( (unsigned __int8)v9 != 255 )
        break;
LABEL_35:
      *v4 = 1;
      v7 = (_DWORD *)v7[1];
      if ( !v7 )
        goto LABEL_36;
    }
    if ( FIELD_U8(v8, 533) == 2 )
    {
      *v5 = v10 + 2;
      if ( ((unsigned int)&dword_60C7B408 & ~(1617288468 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
      {
        dword_60C7B404 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B408);
      }
      if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B404) != 1 || !FIELD_U32(v8, 11356) )
        goto LABEL_22;
    }
    else
    {
      if ( ((unsigned int)&dword_60C7B374 & ~(1617288636 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B370) != 1
        || (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 1064))(v8) != 1 )
      {
        goto LABEL_22;
      }
    }
    ++*v5;
LABEL_22:
    if ( ((unsigned int)&dword_60C7B37C & ~(1617288752 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378) == 1 )
    {
      v11 = 2;
      if ( (FIELD_U8(v8, 1210) & 0x11) == 0 )
        v11 = 1;
    }
    else
    {
      v11 = 1;
    }
    *(&v28 + v9) = v11;
    if ( (char)v9 <= 3 )
    {
      v12 = a1;
      if ( (unsigned __int8)v9 < 4u )
        v12 = a1 + v9;
      FIELD_U8(v12, 6968) = 1;
    }
    goto LABEL_35;
  }
LABEL_36:
  result = a2;
  if ( !a2 )
  {
    v14 = v28;
    if ( FIELD_U32(a1, 6952) )
    {
      result = v28 == 0;
    }
    else if ( v28 )
    {
      if ( v28 == 1 )
      {
        v14 = 1;
        result = 1;
      }
      else
      {
        result = 2;
      }
    }
    else
    {
      v14 = 0;
      result = 0;
    }
    FIELD_U32(a1, 6952) = v14;
    v15 = v29;
    if ( FIELD_U32(a1, 6956) )
    {
      if ( !v29 )
        result = 1;
    }
    else if ( v29 )
    {
      if ( v29 == 1 )
      {
        v15 = 1;
        result = 1;
      }
      else
      {
        result = 2;
      }
    }
    else
    {
      v15 = 0;
    }
    FIELD_U32(a1, 6956) = v15;
    v16 = v30;
    if ( FIELD_U32(a1, 6960) )
    {
      if ( !v30 )
        result = 1;
    }
    else if ( v30 )
    {
      if ( v30 == 1 )
      {
        v16 = 1;
        result = 1;
      }
      else
      {
        result = 2;
      }
    }
    else
    {
      v16 = 0;
    }
    FIELD_U32(a1, 6960) = v16;
    v17 = (int *)(a1 + 6964);
    v18 = v31;
    if ( FIELD_U32(a1, 6964) )
    {
      if ( !v31 )
      {
        result = 1;
        v19 = 0;
LABEL_68:
        *v17 = v19;
LABEL_71:
        v20 = 0x800000;
        if ( result == 2 )
          v20 = 0x1000000;
        FIELD_U32(a1, 6360) += v20;
        v21 = 0x400000;
        if ( result == 2 )
          v21 = 0x800000;
        v22 = FIELD_U32(a1, 6396) + v21;
        v23 = 16;
        FIELD_U32(a1, 6396) = v22;
        if ( result == 2 )
          v23 = 32;
        v24 = result == 2;
        v25 = 16;
        result = 0x1000000;
        if ( v24 )
          v25 = 4;
        FIELD_U32(a1, 6368) = v23;
        FIELD_U32(a1, 6404) = v25;
        FIELD_U32(a1, 6376) = 0x1000000;
        FIELD_U32(a1, 6412) = 0x800000;
        return result;
      }
    }
    else
    {
      if ( v31 )
      {
        v19 = 1;
        result = 1;
        if ( v31 != 1 )
        {
          v19 = v31;
          result = 2;
        }
        goto LABEL_68;
      }
      v18 = 0;
    }
    *v17 = v18;
    if ( !result )
      return result;
    goto LABEL_71;
  }
  return result;
}
