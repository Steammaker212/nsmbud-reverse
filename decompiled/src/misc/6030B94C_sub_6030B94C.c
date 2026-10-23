/* sub_6030B94C
 * address: 0x6030B94C   size: 1368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030B94C(int a1)
{
  unsigned int v2; // r0
  _BYTE *v3; // r4
  unsigned int U32; // r0
  int v5; // r6
  unsigned int v6; // r0
  float v7; // s0
  _BYTE *v8; // r9
  int v9; // r7
  unsigned int v10; // r6
  int v11; // r0
  _DWORD *v12; // r1
  unsigned int v13; // r1
  int v14; // r11
  unsigned int v15; // r0
  char **v16; // r11
  int (*v17)(); // t1
  char *v18; // r2
  int *v19; // r8
  char v20; // r3
  int v21; // r2
  _BYTE *v22; // r4
  char *v23; // r2
  _DWORD *v24; // r0
  char *v25; // r2
  _DWORD *v26; // r0
  char v27; // r3
  int v28; // r2
  _BYTE *v29; // r9
  char *v30; // r2
  _DWORD *v31; // r0
  char *v32; // r2
  _DWORD *v33; // r0
  int v34; // r4
  int v35; // r0
  int v36; // r0
  int v37; // r4
  int v38; // r0
  _BYTE *v39; // r6
  int v40; // r7
  int v41; // r7
  int v42; // t1
  int v43; // r0
  _BYTE *v45; // [sp+18h] [bp-50h]
  unsigned __int8 *v46; // [sp+1Ch] [bp-4Ch]
  ShapedColliderInfo v47[2]; // [sp+20h] [bp-48h] BYREF

  FIELD_U32(a1, 7600) = Actor__getProfileId((Actor *)a1) != 112;
  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 7605) = (BYTE2(v2) & 7) + 1;
  FIELD_U8(a1, 7604) = BYTE1(v2);
  FIELD_U32(a1, 80) = (unsigned __int8)v2;
  if ( FIELD_U8(dword_60CC6D8C, 17) && (FIELD_U8(a1, 25) & 0x10) != 0 )
    FIELD_U32(a1, 116) = 1156415488;
  v3 = (_BYTE *)(a1 + 7605);
  v46 = (unsigned __int8 *)(a1 + 7604);
  v45 = (_BYTE *)(a1 + 7605);
  if ( (v2 & 0x10000000) != 0 )
  {
    U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    if ( *v3 )
    {
      v5 = (unsigned __int8)*v3 + 1;
      v6 = U32 >> 31;
      do
      {
        if ( !((*v46 & (unsigned int)(1 << (v5 - 2))) >> (v5 - 2)) )
          v6 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31;
        if ( (_BYTE)v6 )
          FIELD_U8(a1, 7606) |= 1 << (v5 - 2);
        else
          LOBYTE(v6) = 0;
        --v5;
      }
      while ( v5 > 1 );
    }
  }
  else
  {
    FIELD_U8(a1, 7606) = v2 >> 20;
  }
  killer_rot_houdai_ref(a1);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1115684864;
  FIELD_U32(a1, 500) = 1103101952;
  FIELD_U32(a1, 504) = 1124073472;
  memset(v47, 0, 16);
  v7 = (float)(unsigned __int8)*v45;
  v47[0].topLeft.x = -8.0;
  v47[0].topLeft.y = v7 * 16.0;
  v47[0].bottomRight.x = 8.0;
  v47[0].bottomRight.y = 0.0;
  v47[0].rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6304), (StageActor *)a1, v47);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6304));
  FIELD_U32(a1, 6616) = sub_6030C208;
  if ( *v45 )
  {
    v8 = (_BYTE *)(a1 + 7605);
    v9 = 6992;
    v10 = 0;
    do
    {
      v11 = 6992;
      if ( v10 < 8 )
        v11 = v9;
      *(_DWORD *)(a1 + v11) = 0;
      v12 = (_DWORD *)(a1 + v11);
      v12[1] = 0;
      v12[2] = 0;
      v12[3] = 0;
      v12[4] = 0;
      v12[5] = 0;
      v12[6] = 0;
      v12[7] = 0;
      v13 = 0;
      if ( v10 < 8 )
        v13 = v10;
      v14 = a1 + 8 * v13;
      v17 = *(int (**)())(v14 + 7248);
      v16 = (char **)(v14 + 7248);
      v15 = (unsigned int)v17;
      v19 = (int *)(v16 + 1);
      v18 = v16[1];
      if ( (*v46 & (unsigned int)(1 << v10)) >> v10 )
      {
        v20 = (unsigned __int8)v18 & 1 | v15;
        if ( (unsigned int)v16[1] & 1 | v15 )
          v20 = 1;
        v21 = (v18 != 0) & (unsigned __int8)v20;
        if ( (int (*)())v15 != sub_6030C3AC || v21 == 1 )
        {
          v22 = (_BYTE *)(a1 + v13 + 7592);
          if ( (v15 != 0) | v21 )
          {
            *v22 = -1;
            v23 = *v16;
            v24 = (_DWORD *)(a1 + (*v19 >> 1));
            if ( (*v19 & 1) != 0 )
              v23 = *(char **)&v23[*v24];
            ((void (__fastcall *)(_DWORD *, unsigned int))v23)(v24, v10);
          }
          *v16 = (char *)sub_6030C3AC;
          *v19 = 0;
          *v22 = 0;
          v25 = *v16;
          v26 = (_DWORD *)(a1 + (*v19 >> 1));
          if ( (*v19 & 1) != 0 )
            v25 = *(char **)&v25[*v26];
          ((void (__fastcall *)(_DWORD *, unsigned int))v25)(v26, v10);
          ++*v22;
        }
      }
      else
      {
        v27 = (unsigned __int8)v18 & 1 | v15;
        if ( (unsigned int)v16[1] & 1 | v15 )
          v27 = 1;
        v28 = (v18 != 0) & (unsigned __int8)v27;
        if ( (int (*)())v15 != sub_6030C2DC || v28 == 1 )
        {
          v29 = (_BYTE *)(a1 + v13 + 7592);
          if ( (v15 != 0) | v28 )
          {
            *v29 = -1;
            v30 = *v16;
            v31 = (_DWORD *)(a1 + (*v19 >> 1));
            if ( (*v19 & 1) != 0 )
              v30 = *(char **)&v30[*v31];
            ((void (__fastcall *)(_DWORD *, unsigned int))v30)(v31, v10);
          }
          *v16 = (char *)sub_6030C2DC;
          *v19 = 0;
          *v29 = 0;
          v32 = *v16;
          v33 = (_DWORD *)(a1 + (*v19 >> 1));
          if ( (*v19 & 1) != 0 )
            v32 = *(char **)&v32[*v33];
          ((void (__fastcall *)(_DWORD *, unsigned int))v32)(v33, v10);
          ++*v29;
          v8 = (_BYTE *)(a1 + 7605);
        }
      }
      ++v10;
      v9 += 32;
    }
    while ( (int)v10 < (unsigned __int8)*v8 );
    if ( *v8 )
    {
      v34 = 0;
      do
      {
        v35 = 0;
        if ( (unsigned int)v34 < 8 )
          v35 = v34;
        v36 = **(_DWORD **)(a1 + 4 * v35 + 6960);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v36 + 68))(v36, a1 + 144);
        ++v34;
      }
      while ( v34 < (unsigned __int8)*v45 );
      if ( *v45 )
      {
        v37 = 0;
        do
        {
          v38 = 0;
          if ( (unsigned int)v37 < 8 )
            v38 = v37;
          v39 = (_BYTE *)(a1 + v38 + 7584);
          if ( *v39 )
          {
            v40 = a1 + 4 * v38;
            v42 = FIELD_U32(v40, 6960);
            v41 = v40 + 6960;
            *(_DWORD *)(**(_DWORD **)(v42 + 12) + 24) = 1065353216;
            Animation_update(**(_DWORD **)(*(_DWORD *)v41 + 12));
            v43 = **(_DWORD **)(*(_DWORD *)v41 + 12);
            if ( (FIELD_U8(v43, 28) & 0x20) != 0 )
            {
              FIELD_U32(v43, 24) = 0;
              *v39 = 0;
              sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v41 + 12) + 4));
            }
          }
          ++v37;
        }
        while ( v37 < (unsigned __int8)*v45 );
      }
    }
  }
  sub_6030C40C(a1);
  FIELD_U8(a1, 6056) = 1;
  return 1;
}
