/* sub_601296E8
 * address: 0x601296E8   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601296E8(int a1)
{
  int v2; // r5
  _DWORD *v3; // r1
  unsigned int v4; // r0
  int v5; // r1
  int v6; // r0
  float v7; // r1
  int v8; // r1
  unsigned int v9; // r0
  _BYTE *v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  _BYTE *v14; // r1
  float v15; // s0
  float v16; // s2
  Vec3 v17; // [sp+4h] [bp-24h] BYREF

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  v3 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
  {
    v5 = dword_60C87164;
    v6 = 1072623343;
    FIELD_U32(a1, 120) = 1072623343;
    FIELD_U32(a1, 124) = v5;
    FIELD_U32(a1, 128) = 0;
    if ( !FIELD_U32(a1, 80) )
    {
      v6 = -1074860305;
      FIELD_U32(a1, 120) = -1074860305;
    }
    FIELD_U32(a1, 132) = v6;
    FIELD_U32(a1, 100) = dword_60C87150;
    v7 = FIELD_F32(a1, 112);
    v17.x = FIELD_F32(a1, 108);
    v17.y = v7;
    v17.z = 4500.0;
    EffectData_create(791, &v17, 0, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1676))(a1);
  }
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v9 )
    v8 += 4 * v9;
  if ( *(float *)(*(_DWORD *)v8 + 20) >= 13.0 )
  {
    if ( FIELD_U16(a1, 6276) )
    {
      FIELD_U32(a1, 160) += (int)(float)((float)(FIELD_F32(a1, 8132) * 2147500000.0) / 180.0);
      EffectWrapper_update((EffectWrapper *)(a1 + 8448), 1006, (Vec3 *)(a1 + 8164), 0, 0);
    }
    else
    {
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C86FA0);
      v12 = FIELD_U32(a1, 8124) + 1;
      if ( v12 > 5 )
        v12 = 0;
      FIELD_U32(a1, 8124) = v12;
      EffectWrapper_update((EffectWrapper *)(a1 + 8448), 1006, (Vec3 *)(a1 + 8164), 0, 0);
    }
  }
  else
  {
    v10 = (_BYTE *)(a1 + 8136);
    if ( !FIELD_U8(a1, 8136) )
    {
      v11 = FIELD_U32(a1, 2872);
      if ( (v11 & 0x440000) != 0 && (v11 & 0x10000000) == 0 || (v11 & 0x880000) != 0 && (v11 & 0x20000000) == 0 )
      {
        FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
        FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
        *v10 = 1;
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
      }
      v14 = (_BYTE *)(a1 + 8137);
      if ( FIELD_U8(a1, 8137) )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
      v15 = FIELD_F32(a1, 108);
      v16 = FIELD_F32(dword_60CC6484, 116);
      if ( v15 >= (float)(v16 + FIELD_F32(a1, 7488)) )
      {
        if ( !FIELD_U32(a1, 80) )
        {
LABEL_29:
          *v14 = 1;
          FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
          FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
          *v10 = 1;
          return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
        }
      }
      else if ( v15 <= (float)(v16 + FIELD_F32(a1, 7492)) && FIELD_U32(a1, 80) == 1 )
      {
        goto LABEL_29;
      }
      *v14 = 0;
    }
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
}
