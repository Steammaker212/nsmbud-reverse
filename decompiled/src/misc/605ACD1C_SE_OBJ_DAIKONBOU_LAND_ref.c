/* SE_OBJ_DAIKONBOU_LAND_ref
 * address: 0x605ACD1C   size: 888   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_OBJ_DAIKONBOU_LAND_ref(_DWORD *a1)
{
  int *v2; // r7
  int v3; // lr
  int v4; // r12
  int v5; // r3
  int *v6; // r8
  unsigned int v7; // r2
  unsigned int *v8; // r9
  unsigned int v9; // r11
  int v10; // r0
  _DWORD *v11; // r6
  int v12; // r1
  __int64 v13; // r2
  unsigned int v14; // r1
  unsigned int v15; // r7
  unsigned int v16; // r12
  unsigned int v17; // r5
  float v18; // r1
  int v19; // r5
  float v20; // s0
  int v21; // r5
  int v22; // r0
  int v23; // r1
  char *v24; // r2
  int v25; // r3
  _DWORD *v26; // r0
  unsigned int v27; // kr00_4
  int v28; // r1
  int v29; // r0
  _DWORD *v30; // r4
  int v31; // t1
  int v32; // r0
  int v33; // r1
  char *v34; // r2
  int v35; // r3
  _DWORD *v36; // r0
  unsigned int v37; // r0
  int v38; // r0
  int v39; // r0
  Vec2 out; // [sp+4h] [bp-34h] BYREF
  Vec3 position; // [sp+Ch] [bp-2Ch] BYREF

  v2 = a1 + 1698;
  v3 = a1[1698];
  v4 = a1[1701];
  v6 = a1 + 1700;
  v5 = a1[1700];
  v8 = a1 + 1699;
  v7 = a1[1699];
  if ( a1[1697] )
  {
    v9 = (a1[1702] + 1) % (v7 + v3 + v5 + v4);
    a1[1702] = v9;
  }
  else
  {
    v9 = (a1[1703] + FIELD_U32(dword_60C99DD4, 1052) - dword_60CB01F4[15 * a1[1696] + 2]) % (v7 + v3 + v5 + v4);
  }
  v11 = a1 + 1709;
  v10 = a1[1709];
  if ( v10 == 3 )
  {
    if ( v9 )
      return 1;
    *v11 = 0;
    goto LABEL_12;
  }
  if ( v10 != 2 )
  {
    if ( v10 == 1 )
    {
      v12 = a1[1685];
      LODWORD(v13) = a1[1686];
      if ( v12 < 0 )
      {
        HIDWORD(v13) = v12 >> 31;
        v27 = a1[1685];
        v17 = 0;
        v15 = 0;
        v16 = (__PAIR64__((int)v13 >> 31, v27) + v13) >> 32;
        v14 = v27 + v13;
        HIDWORD(v13) = v27 + v13;
      }
      else
      {
        if ( !v12 )
        {
          LODWORD(v13) = 0;
LABEL_31:
          a1[40] += v13;
          v31 = a1[1708];
          v30 = a1 + 1708;
          v29 = v31;
          if ( !v31 || (v32 = v29 - 1, (*v30 = v32) == 0) )
            *v11 = 2;
          return 1;
        }
        v16 = 0;
        v15 = (unsigned __int64)(v12 - (__int64)(int)v13) >> 32;
        v14 = v12 - v13;
        HIDWORD(v13) = 0;
        v17 = v14;
      }
      LODWORD(v13) = __SPAIR64__(v16, HIDWORD(v13)) < __SPAIR64__(v15, v17);
      if ( __SPAIR64__(v16, HIDWORD(v13)) < __SPAIR64__(v15, v17) )
        LODWORD(v13) = v14;
      a1[1685] = v13;
      goto LABEL_31;
    }
LABEL_12:
    if ( v9 == v5 + v7 )
    {
      sub_605AD9C8(a1);
      if ( sub_605AEAD4(a1) == 1 )
        sub_605AEB58(a1);
      v18 = *((float *)a1 + 28);
      v19 = Global_BasicSoundActor2;
      position.x = (float)a1[27];
      position.y = v18;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v19, "SE_OBJ_DAIKONBOU_LAND", &out.x, 0);
      v4 = v2[3];
      v3 = *v2;
      v5 = *v6;
      v7 = *v8;
    }
    v20 = 0.0;
    v21 = 0;
    if ( v9 >= v7 )
    {
      v22 = v5 + v7;
      if ( v5 + v7 <= v9 )
      {
        v28 = v3 + v22;
        if ( v9 >= v3 + v22 )
        {
          v21 = -1;
          if ( v4 + v28 > v9 )
          {
            v33 = v9 - v28;
            v34 = (char *)a1[1706];
            v35 = a1[1707];
            v36 = (_DWORD *)((char *)a1 + (v35 >> 1));
            if ( (v35 & 1) != 0 )
              v34 = *(char **)&v34[*v36];
            ((void (__fastcall *)(_DWORD *, int, float))v34)(v36, v33, 0.0);
            v21 = 3;
          }
        }
        else
        {
          v20 = 256.0;
          v21 = 2;
        }
      }
      else
      {
        v23 = v9 - v7;
        v24 = (char *)a1[1704];
        v25 = a1[1705];
        v26 = (_DWORD *)((char *)a1 + (v25 >> 1));
        if ( (v25 & 1) != 0 )
          v24 = *(char **)&v24[*v26];
        ((void (__fastcall *)(_DWORD *, int, float))v24)(v26, v23, 0.0);
        v21 = 1;
      }
    }
    v37 = ((a1[5] >> 20) & 0xF) - 1;
    if ( v37 <= 2 )
      v20 = (float)(v20 * flt_60B051A0[v37]) * 0.0625;
    (*(void (__fastcall **)(_DWORD *, float))(*a1 + 256))(a1, v20);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 264))(a1);
    v38 = sub_605AE948(a1);
    if ( v21 == 3 )
    {
      v39 = a1[40] - v38;
    }
    else
    {
      if ( v21 != 1 )
      {
LABEL_45:
        (*(void (__fastcall **)(_DWORD *))(*a1 + 276))(a1);
        return 1;
      }
      v39 = a1[40] + v38;
    }
    a1[40] = v39;
    goto LABEL_45;
  }
  if ( ((int (__fastcall *)(_DWORD *, float))loc_605AE9BC)(a1, 1.0) == 1 )
    *v11 = 3;
  return 1;
}
