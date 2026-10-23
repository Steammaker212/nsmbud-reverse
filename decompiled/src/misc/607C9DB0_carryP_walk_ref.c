/* carryP_walk_ref
 * address: 0x607C9DB0   size: 2184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall carryP_walk_ref(int a1, int a2, float a3, float a4, float a5)
{
  _BOOL4 v9; // r0
  int v10; // r2
  bool v11; // zf
  int v12; // r7
  int v13; // r4
  int *v14; // r6
  int v15; // r0
  char *v16; // r7
  int *v17; // r8
  char *v18; // r11
  signed int v19; // r5
  int v20; // r0
  bool v21; // cc
  int v22; // r7
  int v23; // r1
  int i; // r3
  char *v25; // r6
  const void *v26; // r8
  signed int v27; // r5
  unsigned int v28; // r5
  int v29; // r2
  int v30; // r6
  int v31; // r7
  _BOOL4 v32; // r0
  int v33; // r1
  unsigned int v34; // r8
  int v35; // r9
  _BOOL4 v36; // r0
  int v37; // r0
  int v38; // r6
  bool v39; // zf
  float v40; // s3
  int *v41; // r0
  char *v42; // r8
  signed int j; // r7
  int v44; // r0
  bool v45; // zf
  unsigned int result; // r0
  float v47; // s16
  float v48; // s18
  float v49; // s16
  float v50; // s0
  _DWORD *v51; // [sp+4h] [bp-7Ch]
  int v52; // [sp+8h] [bp-78h]
  int v53; // [sp+Ch] [bp-74h]
  int v54; // [sp+10h] [bp-70h]
  int v55; // [sp+14h] [bp-6Ch]
  int (**v56)(); // [sp+18h] [bp-68h] BYREF
  char *v57; // [sp+1Ch] [bp-64h]
  int v58; // [sp+20h] [bp-60h]
  char v59; // [sp+24h] [bp-5Ch] BYREF
  float v60; // [sp+44h] [bp-3Ch] BYREF

  v60 = a4;
  v9 = sub_60793198(a1);
  v10 = a2;
  if ( v9 )
  {
    v10 = a2;
    switch ( a2 )
    {
      case 16:
      case 17:
      case 18:
      case 37:
      case 38:
      case 42:
      case 43:
      case 44:
      case 82:
        break;
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
      case 34:
      case 35:
      case 36:
      case 39:
      case 40:
      case 41:
      case 45:
      case 46:
      case 47:
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
      case 80:
      case 81:
        goto LABEL_41;
      default:
        if ( (unsigned int)(a2 - 136) > 8 || (v10 = a2, ((1 << (a2 + 120)) & 0x103) == 0) )
        {
LABEL_41:
          v10 = a2;
          if ( (dword_60CC2C64[6 * a2 + 5] & 2) == 0 )
          {
            v28 = a2 - 5;
            v29 = FIELD_U32(a1, 196);
            v30 = a2;
            v31 = 0;
            v32 = a2 == 224 || (unsigned int)(a2 - 5) < 2;
            v33 = 227;
            if ( a2 == 5 )
              v33 = 226;
            if ( v28 >= 2 )
              v33 = 25;
            if ( !v32 )
              v33 = 27;
            v34 = FIELD_U32(a1, 196) & 0x4000;
            if ( (v29 & 0x4000) != 0 )
              v30 = 164;
            v35 = FIELD_U32(a1, 196) & 0xC000;
            if ( (v29 & 0xC000) == 0 )
              v30 = v33;
            if ( v32 )
              v30 = v33;
            v36 = sub_607931A8(a1);
            v11 = !v36;
            v37 = !v36;
            if ( !v11 )
              v30 = 228;
            if ( a2 == 5 )
              v31 = 1;
            if ( !(v31 | v37) )
              v30 = 229;
            v10 = v30;
            if ( !(v31 | v37) )
              v10 = 115;
            if ( a2 == 6 )
              v10 = v30;
            if ( !v37 && v28 >= 2 && a2 != 224 )
            {
              v10 = 117;
              if ( v35 )
                v10 = 163 - (v34 >> 14);
            }
          }
        }
        break;
    }
  }
  if ( v10 == 136 )
    v10 = 137;
  v11 = FIELD_U8(a1, 236) == 0;
  if ( !FIELD_U8(a1, 236) )
    v11 = FIELD_U32(a1, 28) == v10;
  if ( v11 )
  {
    sub_60793088((_DWORD *)a1, a3);
    if ( a5 != 0.0 )
      sub_60793114((_DWORD *)a1, a5);
  }
  else
  {
    v52 = a2;
    v53 = FIELD_U32(a1, 28);
    v12 = 3 * v10;
    v13 = v10;
    FIELD_U32(a1, 36) = -1;
    FIELD_U32(a1, 28) = v10;
    v14 = &dword_60CC2C64[6 * v10];
    FIELD_U32(a1, 196) = v14[5];
    v51 = v14 + 5;
    FIELD_U32(a1, 200) = v14[5];
    v54 = FIELD_U32(a1, 544);
    v57 = &v59;
    v56 = &BufferedSafeStringBase_char_vtable_probably;
    v58 = 32;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v56);
    v15 = dword_60CC2C64[2 * v12];
    v55 = v12;
    v16 = v57;
    (*(void (__fastcall **)(int *))(v15 + 12))(v14);
    v17 = v14 + 1;
    v18 = (char *)v14[1];
    if ( v16 != v18 )
    {
      (*(void (__fastcall **)(int *))(*v14 + 12))(v14);
      v19 = 0;
      v20 = *v17;
      while ( *(_BYTE *)(v20 + v19) )
      {
        if ( !*(_BYTE *)(v20 + v19 + 1) )
        {
          ++v19;
          break;
        }
        if ( !*(_BYTE *)(v20 + v19 + 2) )
        {
          v19 += 2;
          break;
        }
        v21 = v19 + 2 <= 0x7FFFF;
        v19 += 3;
        if ( !v21 )
        {
          v19 = 0;
          break;
        }
      }
      if ( v19 >= v58 )
        v19 = v58 - 1;
      qmemcpy(v16, v18, v19);
      v16[v19] = 0;
    }
    (*(void (__fastcall **)(int *))(*v14 + 12))(v14);
    (*(void (__fastcall **)(int *))(*v14 + 12))(v14);
    v22 = *v17;
    (*(void (__fastcall **)(int *))(dword_60CC5370 + 12))(&dword_60CC5370);
    if ( v22 == dword_60CC5374 )
    {
LABEL_33:
      v25 = v57;
      (*(void (__fastcall **)(int *))(dword_60CC5378 + 12))(&dword_60CC5378);
      v26 = (const void *)dword_60CC537C;
      if ( v25 != (char *)dword_60CC537C )
      {
        (*(void (__fastcall **)(int *))(dword_60CC5378 + 12))(&dword_60CC5378);
        v27 = 0;
        while ( *(_BYTE *)(dword_60CC537C + v27) )
        {
          if ( !*(_BYTE *)(dword_60CC537C + v27 + 1) )
          {
            ++v27;
            break;
          }
          if ( !*(_BYTE *)(dword_60CC537C + v27 + 2) )
          {
            v27 += 2;
            break;
          }
          v21 = v27 + 2 <= 0x7FFFF;
          v27 += 3;
          if ( !v21 )
          {
            v27 = 0;
            break;
          }
        }
        if ( v27 >= v58 )
          v27 = v58 - 1;
        qmemcpy(v25, v26, v27);
        v25[v27] = 0;
      }
    }
    else
    {
      v23 = *v17;
      for ( i = 1; *(unsigned __int8 *)(v23 + i - 1) == *(unsigned __int8 *)(dword_60CC5374 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v23 + i - 1) )
          goto LABEL_33;
        if ( i >= 524289 || *(unsigned __int8 *)(v23 + i) != *(unsigned __int8 *)(dword_60CC5374 + i) )
          break;
        if ( !*(_BYTE *)(v23 + i) )
          goto LABEL_33;
      }
      (*(void (__fastcall **)(int *))(*v14 + 12))(v14);
      (*(void (__fastcall **)(int *))(*v14 + 12))(v14);
      (*(void (__fastcall **)(int *))(dword_60CC5378 + 12))(&dword_60CC5378);
    }
    sub_6079104C(a1, &v60, (int)&v56, v13, 0);
    v38 = dword_60CC2C64[2 * v55 + 2];
    if ( a5 == 0.0 )
    {
      v39 = v53 == -1;
      if ( v53 != -1 )
        v39 = (FIELD_U32(a1, 196) & 0x40) == 0;
      if ( !v39 && (dword_60CC2C64[6 * v53 + 5] & 0x40) != 0 )
        a5 = sub_60793184(a1);
    }
    if ( sub_60793198(a1) )
    {
      if ( sub_607931A8(a1) )
      {
        v41 = &dword_60CBFBC4[13 * v52];
        FIELD_U32(a1, 196) = v41[12];
        FIELD_U32(a1, 200) = v41[12];
        FIELD_U32(a1, 564) = v52;
        sub_607931B8(a1, *((float *)v41 + 9), *((float *)v41 + 10), a5, v40);
        FIELD_U32(a1, 196) = *v51;
        FIELD_U32(a1, 200) = *v51;
        if ( (unsigned int)(v13 - 37) <= 1 )
        {
          v42 = v57;
          if ( v57 != "carryP_walk" )
          {
            for ( j = 0; aCarrypWalk_0[j]; j += 2 )
            {
              if ( j > 0x7FFFF )
              {
                j = 0;
                break;
              }
              if ( !aCarrypWalk_0[j + 1] )
              {
                ++j;
                break;
              }
            }
            if ( j >= v58 )
              j = v58 - 1;
            qmemcpy(v57, "carryP_walk", j);
            v42[j] = 0;
          }
        }
      }
      v44 = FIELD_U32(a1, 208);
      v45 = (v44 & 8) == 0;
      if ( (v44 & 8) != 0 )
        v45 = (v44 & 0x10) == 0;
      if ( !v45 || (unsigned int)(v13 - 16) <= 0x1C && ((1 << (v13 - 16)) & 0x1C600007) != 0 || v13 == 144 )
      {
        (*(void (__fastcall **)(int, int, int (***)(), int, float, float, float))(*(_DWORD *)a1 + 44))(
          a1,
          v54,
          &v56,
          v38,
          a3,
          a5,
          v60);
        return (*(int (__fastcall **)(int, _DWORD, float))(*(_DWORD *)a1 + 104))(a1, 0, v60);
      }
    }
    (*(void (__fastcall **)(int, int, int (***)(), int, float, float, float))(*(_DWORD *)a1 + 44))(
      a1,
      v54,
      &v56,
      v38,
      a3,
      a5,
      v60);
    FIELD_U32(a1, 32) = -1;
    (*(void (__fastcall **)(int, int, int (***)(), int, float, float, float))(*(_DWORD *)a1 + 48))(
      a1,
      v54,
      &v56,
      v38,
      a3,
      a5,
      v60);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 52))(a1);
  }
  result = FIELD_U32(a1, 28);
  if ( result <= 0x18 && ((1 << result) & 0x1880000) != 0 )
  {
    v47 = sub_60793E10(a1);
    v48 = sub_60793184(a1);
    v49 = v47 + -15.0;
    v50 = sub_60793E10(a1);
    if ( v48 >= v49 )
    {
      v49 = v48;
      if ( v48 > v50 )
        v49 = v50;
    }
    return sub_60793114((_DWORD *)a1, v49);
  }
  return result;
}
