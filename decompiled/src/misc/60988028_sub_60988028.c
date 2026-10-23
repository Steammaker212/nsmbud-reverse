/* sub_60988028
 * address: 0x60988028   size: 1400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60988028(
        int *a1,
        _WORD *a2,
        unsigned int *a3,
        _DWORD *a4,
        unsigned int a5,
        unsigned __int16 *a6,
        int a7,
        int a8,
        unsigned int a9,
        _BYTE *a10,
        int a11)
{
  unsigned __int16 *v12; // r8
  unsigned int v13; // r6
  unsigned int v14; // r10
  unsigned int v17; // r11
  int v18; // r0
  int v19; // r2
  unsigned __int16 *v20; // lr
  int v21; // r12
  unsigned __int16 *v22; // r6
  unsigned __int16 *v23; // r1
  int result; // r0
  int v25; // r3
  int v26; // r1
  unsigned int v27; // r2
  unsigned __int16 *v28; // r1
  int v29; // r0
  unsigned int v30; // r2
  int v31; // r2
  int v32; // r3
  bool v33; // zf
  unsigned int v34; // r1
  int v35; // [sp+18h] [bp-40h]
  int v36; // [sp+1Ch] [bp-3Ch]
  int v37; // [sp+20h] [bp-38h]
  unsigned __int16 *v38; // [sp+24h] [bp-34h]
  unsigned int v39; // [sp+24h] [bp-34h]
  int v41; // [sp+2Ch] [bp-2Ch] BYREF
  _DWORD v42[10]; // [sp+30h] [bp-28h] BYREF

  v12 = a6;
  v13 = a5;
  v14 = 0;
  v42[0] = 0;
  v41 = 0;
  *a3 = 0;
  *a4 = 0;
  *a2 = 0;
  v17 = (unsigned int)&a6[a7];
  v18 = a8;
  if ( a8 >= 1 )
  {
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v36 = 0;
    v38 = 0;
    v35 = 0;
    v37 = 0;
    while ( 2 )
    {
      v23 = v12;
LABEL_4:
      result = 2;
      if ( (unsigned int)v23 >= v17 )
        return result;
      while ( 1 )
      {
        v25 = *v23;
        if ( (v25 | 1) != 0xF )
        {
          if ( v25 == 10 && ++v19 >= a9 )
          {
            ++v21;
            v19 = 0;
          }
          v18 = a8;
          ++v23;
          if ( v21 >= a8 )
          {
LABEL_29:
            v12 = v23;
            goto LABEL_30;
          }
          goto LABEL_4;
        }
        if ( v25 == 14 )
        {
          v12 = (unsigned __int16 *)((char *)v23 + v23[3] + 8);
          if ( (unsigned int)v12 > v17 )
            goto LABEL_28;
        }
        else if ( v25 != 15 || (v12 = v23 + 3, (unsigned int)(v23 + 3) > v17) )
        {
LABEL_28:
          nullsub_127();
          return 3;
        }
        if ( !v23[1] )
          break;
LABEL_12:
        v23 = v12;
        if ( (unsigned int)v12 >= v17 )
          return result;
      }
      switch ( v23[2] )
      {
        case 1u:
          v20 = v23;
          v37 = ((__int64)v12 - (unsigned int)v23) / 2;
          if ( v21 >= a8 )
            goto LABEL_31;
          continue;
        case 2u:
          v22 = v23;
          v35 = ((__int64)v12 - (unsigned int)v23) / 2;
          v18 = a8;
          if ( v21 >= a8 )
            goto LABEL_30;
          continue;
        case 3u:
          v38 = v23;
          v36 = ((__int64)v12 - (unsigned int)v23) / 2;
          v18 = a8;
          if ( v21 < a8 )
            continue;
          v38 = v23;
          break;
        case 4u:
          v18 = a8;
          ++v21;
          v19 = 0;
          v23 = v12;
          if ( v21 >= a8 )
            goto LABEL_29;
          goto LABEL_4;
        default:
          goto LABEL_12;
      }
      break;
    }
LABEL_30:
    v23 = v20;
    if ( v20 )
    {
LABEL_31:
      (*(void (__fastcall **)(int *, unsigned __int16 *, _WORD *, _DWORD *, int *, unsigned int, unsigned __int16 *, int, int))(*a1 + 48))(
        a1,
        v23,
        a2,
        v42,
        &v41,
        a5,
        v23,
        v37,
        a11);
      v18 = a8;
    }
    if ( v22 )
    {
      (*(void (__fastcall **)(int *, unsigned __int16 *, _WORD *, _DWORD *, int *, unsigned int, unsigned __int16 *, int, int))(*a1 + 48))(
        a1,
        v22,
        a2,
        v42,
        &v41,
        a5,
        v22,
        v35,
        a11);
      v18 = a8;
    }
    v13 = a5;
    if ( v38 )
    {
      (*(void (__fastcall **)(int *, unsigned __int16 *, _WORD *, _DWORD *, int *, unsigned int, unsigned __int16 *, int, int))(*a1 + 48))(
        a1,
        v38,
        a2,
        v42,
        &v41,
        a5,
        v38,
        v36,
        a11);
      v13 = a5;
      v18 = a8;
    }
  }
  v26 = 0;
  v27 = 0;
  if ( (unsigned int)v12 >= v17 )
    goto LABEL_71;
  v27 = 0;
  v14 = 0;
  while ( 2 )
  {
    v39 = v27;
    while ( 1 )
    {
      v28 = v12;
      v29 = v42[0] + 1;
      if ( v42[0] + 1 >= v13 )
      {
        nullsub_127();
        v26 = 5;
        goto LABEL_70;
      }
      v30 = *v12;
      if ( (v30 | 1) != 0xF )
        break;
      if ( v30 == 15 )
      {
        v12 += 3;
        if ( (unsigned int)(v28 + 3) > v17 )
          goto LABEL_68;
      }
      else if ( v30 != 14 || (v12 = (unsigned __int16 *)((char *)v12 + v12[3] + 8), (unsigned int)v12 > v17) )
      {
LABEL_68:
        nullsub_127();
        v26 = 3;
        goto LABEL_70;
      }
      v31 = v28[1];
      if ( v31 == 1 )
      {
        (*(void (__fastcall **)(int *, unsigned __int16 *, _WORD *, _DWORD *, int *, unsigned int, unsigned __int16 *, int, int))(*a1 + 52))(
          a1,
          v28,
          a2,
          v42,
          &v41,
          v13,
          v28,
          v12 - v28,
          a11);
        goto LABEL_57;
      }
      if ( v28[1] )
      {
        v32 = *a1;
        if ( v31 == 201 )
          (*(void (__fastcall **)(int *, unsigned __int16 *, _WORD *, _DWORD *, int *, unsigned int, unsigned __int16 *, int, int))(v32 + 60))(
            a1,
            v28,
            a2,
            v42,
            &v41,
            v13,
            v28,
            v12 - v28,
            a11);
        else
          (*(void (__fastcall **)(int *, unsigned __int16 *, _WORD *, _DWORD *, int *, unsigned int, unsigned __int16 *, int, int))(v32 + 64))(
            a1,
            v28,
            a2,
            v42,
            &v41,
            v13,
            v28,
            v12 - v28,
            a11);
        goto LABEL_57;
      }
      if ( v28[2] )
      {
        if ( v28[2] == 4 )
        {
          v27 = v39;
          v26 = 1;
          if ( a8 != -1 )
            goto LABEL_72;
          v26 = 4;
          goto LABEL_75;
        }
LABEL_56:
        (*(void (__fastcall **)(int *, unsigned __int16 *, _WORD *, _DWORD *, int *, unsigned int, unsigned __int16 *, int, int))(*a1 + 48))(
          a1,
          v28,
          a2,
          v42,
          &v41,
          v13,
          v28,
          v12 - v28,
          a11);
LABEL_57:
        v13 = a5;
        goto LABEL_58;
      }
      if ( !a10[1] )
        goto LABEL_56;
LABEL_58:
      v14 = 0;
      if ( (unsigned int)v12 >= v17 )
      {
        v26 = 0;
LABEL_70:
        v18 = a8;
        v27 = v39;
        goto LABEL_71;
      }
    }
    if ( v30 < 0x20 )
    {
      if ( v30 == 10 )
      {
        if ( a8 != -1 && v39 + 1 >= a9 )
        {
          v26 = (unsigned int)(v12 + 1) < v17;
          goto LABEL_72;
        }
        ++v14;
        ++v39;
      }
    }
    else
    {
      v14 = 0;
      ++v41;
    }
    ++v12;
    v26 = 0;
    a2[v42[0]] = v30;
    v42[0] = v29;
    v18 = a8;
    v27 = v39;
    if ( (unsigned int)v12 < v17 )
      continue;
    break;
  }
LABEL_71:
  if ( v18 == -1 )
  {
LABEL_75:
    result = v26;
    if ( v27 >= a9 )
      result = 4;
    if ( v26 )
      result = v26;
  }
  else
  {
LABEL_72:
    result = v26;
  }
  v33 = v14 == 0;
  v34 = v42[0];
  if ( v14 )
    v33 = *a10 == 0;
  if ( !v33 )
  {
    if ( v42[0] >= v14 )
      v34 = v42[0] - v14;
    else
      v34 = 0;
    v42[0] = v34;
  }
  *a3 = v34;
  *a4 = v41;
  a2[v34] = 0;
  return result;
}
