/* sub_60126A14
 * address: 0x60126A14   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60126A14(int a1)
{
  int v2; // r5
  _DWORD *v3; // r1
  unsigned int v4; // r0
  int *v5; // r1
  float v6; // r1
  _BYTE *v7; // r0
  int v8; // r1
  int v9; // r1
  unsigned int v10; // r0
  float v11; // r0
  _BYTE *v13; // r1
  float v14; // s0
  float v15; // s2
  Vec3 v16[3]; // [sp+4h] [bp-24h] BYREF

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  v3 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
  {
    v5 = &dword_60126D3C;
    if ( FIELD_U32(a1, 80) == 1 )
      v5 = &dword_60126D40;
    FIELD_U32(a1, 120) = *v5;
    FIELD_U32(a1, 124) = dword_60C8716C;
    FIELD_U32(a1, 100) = dword_60C87158;
    v6 = FIELD_F32(a1, 112);
    v16[0].x = FIELD_F32(a1, 108);
    v16[0].y = v6;
    v16[0].z = 4500.0;
    EffectData_create(791, v16, 0, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1676))(a1);
    sub_608134CC(a1 + 6332, "SE_VOC_WEN_TURN", FIELD_S16(a1, 6640), 0);
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v7 = (_BYTE *)(a1 + 8136);
  if ( !FIELD_U8(a1, 8136) )
  {
    v8 = FIELD_U32(a1, 2872);
    if ( (v8 & 0x440000) != 0 && (v8 & 0x10000000) == 0 || (v8 & 0x880000) != 0 && (v8 & 0x20000000) == 0 )
    {
      FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
      *v7 = 1;
      goto LABEL_13;
    }
    v13 = (_BYTE *)(a1 + 8137);
    if ( !FIELD_U8(a1, 8137) )
    {
      v14 = FIELD_F32(a1, 108);
      v15 = FIELD_F32(dword_60CC6484, 116);
      if ( v14 >= (float)(v15 + FIELD_F32(a1, 7488)) )
      {
        if ( !FIELD_U32(a1, 80) )
        {
LABEL_27:
          *v13 = 1;
          FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
          FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
          *v7 = 1;
          goto LABEL_13;
        }
      }
      else if ( v14 <= (float)(v15 + FIELD_F32(a1, 7492)) && FIELD_U32(a1, 80) == 1 )
      {
        goto LABEL_27;
      }
      *v13 = 0;
    }
  }
LABEL_13:
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v10 )
    v9 += 4 * v10;
  if ( *(float *)(*(_DWORD *)v9 + 20) >= 13.0 )
  {
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 8132, 9.0, 0.05, 1.0, 0.01);
    FIELD_U32(a1, 160) += (int)(float)((float)(FIELD_F32(a1, 8132) * 2147500000.0) / 180.0);
    v11 = FIELD_F32(a1, 8168);
    v16[0].x = FIELD_F32(a1, 8164);
    v16[0].y = v11;
    v16[0].z = 4500.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 8240), 792, v16, 0, 0);
    sub_6081356C(a1 + 6332, "SE_BOSS_WENDY_MAGIC_JUMP", FIELD_S16(a1, 6640), 0);
  }
  if ( !FIELD_U16(a1, 6276) )
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C87040);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
}
