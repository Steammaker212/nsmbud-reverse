/* sub_600D9790
 * address: 0x600D9790   size: 1264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D9790(int a1)
{
  int v2; // r0
  _BYTE *v3; // r6
  int v4; // r0
  char v5; // r12
  int v6; // r5
  int v7; // r0
  int v8; // r0
  float v9; // s0
  int result; // r0
  _BYTE *v11; // r5
  float v12; // s0
  int v13; // r0
  float v14; // s0
  int v15; // r0
  float v16; // s4
  float v17; // s2
  int v18; // [sp+0h] [bp-18h] BYREF
  int target[5]; // [sp+4h] [bp-14h] BYREF

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 148))(a1) == 1 )
  {
    if ( FIELD_U8(a1, 8152) )
    {
      FIELD_U8(a1, 8152) = 0;
      FIELD_U32(a1, 8148) = FIELD_U32(a1, 132);
    }
    v2 = 8153;
  }
  else
  {
    if ( FIELD_U8(a1, 8153) )
    {
      FIELD_U8(a1, 8153) = 0;
      FIELD_U32(a1, 132) = FIELD_U32(a1, 8148);
    }
    v2 = 8152;
  }
  *(_BYTE *)(a1 + v2) = 1;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    v3 = (_BYTE *)(a1 + 8185);
    if ( !FIELD_U8(a1, 8185) )
    {
      v4 = sub_6014B69C(a1 + 648);
      if ( v4 )
      {
        v6 = FIELD_U32(v4, 144);
        if ( ((unsigned int)&dword_60C8473C & ~(1611503708 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8473C) )
        {
          dword_60C84738 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C8473C);
        }
        if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C84738) == 1 )
        {
          if ( !FIELD_U32(v6, 6172) && FIELD_F32(v6, 6140) > 0.0 )
          {
            *v3 = 1;
            FIELD_U32(a1, 8188) = 1065353216;
            FIELD_U32(a1, 0x2000) = 35;
            FIELD_U32(a1, 124) = 0;
          }
        }
        else
        {
          *v3 = 0;
        }
      }
    }
  }
  v7 = FIELD_U32(a1, 0x2000);
  if ( v7 )
  {
    v8 = v7 - 1;
    FIELD_U32(a1, 0x2000) = v8;
  }
  else
  {
    v8 = 0;
  }
  if ( FIELD_U8(a1, 8185) && (FIELD_U32(a1, 2872) & 1) == 0 && v8 )
  {
    FIELD_U32(a1, 124) = FIELD_U32(a1, 8188);
    FIELD_U8(a1, 8185) = 0;
  }
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v9 = CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 160) += FIELD_U32(a1, 7744);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1304))(a1, v9);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1260))(a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1264))(a1);
  if ( !FIELD_U8(a1, 8308) && (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1244))(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1292))(a1);
  }
  FIELD_U8(a1, 8308) = FIELD_U32(a1, 2872) & 1;
  v11 = (_BYTE *)(a1 + 8144);
  result = FIELD_U8(a1, 8144);
  if ( result == 3 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C844B8);
  if ( result != 2 )
  {
    if ( result != 1 )
      return result;
    target[0] = 0;
    v18 = 0x800000;
    moveValueTo((int *)(a1 + 164), target, &v18);
    v12 = FIELD_F32(a1, 108);
    if ( FIELD_U32(a1, 80) )
    {
      if ( v12 > FIELD_F32(a1, 8132) )
        goto LABEL_45;
      *v11 = 2;
      v13 = 8120;
    }
    else
    {
      if ( v12 < FIELD_F32(a1, 8128) )
        goto LABEL_45;
      *v11 = 2;
      v13 = 8124;
    }
    v15 = *(_DWORD *)(a1 + v13);
    FIELD_U32(a1, 132) = v15;
    FIELD_U32(a1, 8148) = v15;
    FIELD_U8(a1, 8152) = 1;
LABEL_45:
    v16 = FIELD_F32(a1, 584);
    v17 = FIELD_F32(dword_60CC6484, 116);
    if ( (v16 >= v17 || v12 < v17) && (v16 <= v17 || v12 > v17) )
      goto LABEL_53;
    if ( FIELD_U8(a1, 8168) )
    {
      if ( fabsf(FIELD_F32(a1, 8164) - v12) <= 80.0 )
      {
LABEL_53:
        result = FIELD_U32(a1, 7752);
        if ( result > 0 )
          return result;
        result = 3;
        goto LABEL_62;
      }
      FIELD_U8(a1, 8168) = 0;
    }
    --FIELD_U32(a1, 7752);
    goto LABEL_53;
  }
  target[0] = dword_60AF1ED8[FIELD_U32(a1, 80)];
  v18 = 0x800000;
  moveValueTo((int *)(a1 + 164), target, &v18);
  v14 = FIELD_F32(a1, 120);
  result = FIELD_U32(a1, 80);
  if ( result )
  {
    if ( v14 <= 0.0 )
      return result;
    FIELD_U32(a1, 80) = result != 1;
  }
  else
  {
    if ( v14 >= 0.0 )
      return result;
    FIELD_U32(a1, 80) = 1;
  }
  if ( !FIELD_U8(a1, 8168) )
    goto LABEL_60;
  if ( fabsf(FIELD_F32(a1, 8164) - FIELD_F32(a1, 108)) > 80.0 )
  {
    FIELD_U8(a1, 8168) = 0;
LABEL_60:
    --FIELD_U32(a1, 7752);
  }
  result = 1;
LABEL_62:
  *v11 = result;
  return result;
}
