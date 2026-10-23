/* SE_BOSS_WENDY_MAGIC_JUMP_ref
 * address: 0x601271B0   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_WENDY_MAGIC_JUMP_ref(int a1)
{
  int v2; // r5
  _BYTE *v3; // r0
  int v4; // r1
  float v5; // r0
  float v6; // s0
  int v7; // r1
  unsigned int v8; // r0
  _BYTE *v10; // r1
  float v11; // s0
  float v12; // s2
  Vec3 v13; // [sp+4h] [bp-1Ch] BYREF

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = (_BYTE *)(a1 + 8136);
  if ( !FIELD_U8(a1, 8136) )
  {
    v4 = FIELD_U32(a1, 2872);
    if ( (v4 & 0x440000) != 0 && (v4 & 0x10000000) == 0 || (v4 & 0x880000) != 0 && (v4 & 0x20000000) == 0 )
    {
      FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
      *v3 = 1;
      goto LABEL_7;
    }
    v10 = (_BYTE *)(a1 + 8137);
    if ( !FIELD_U8(a1, 8137) )
    {
      v11 = FIELD_F32(a1, 108);
      v12 = FIELD_F32(dword_60CC6484, 116);
      if ( v11 >= (float)(v12 + FIELD_F32(a1, 7488)) )
      {
        if ( !FIELD_U32(a1, 80) )
        {
LABEL_19:
          *v10 = 1;
          FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
          FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
          *v3 = 1;
          goto LABEL_7;
        }
      }
      else if ( v11 <= (float)(v12 + FIELD_F32(a1, 7492)) && FIELD_U32(a1, 80) == 1 )
      {
        goto LABEL_19;
      }
      *v10 = 0;
    }
  }
LABEL_7:
  v5 = FIELD_F32(a1, 8168);
  v13.x = FIELD_F32(a1, 8164);
  v13.y = v5;
  v13.z = 4500.0;
  EffectWrapper_update((EffectWrapper *)(a1 + 8240), 792, &v13, 0, 0);
  sub_6081356C(a1 + 6332, "SE_BOSS_WENDY_MAGIC_JUMP", FIELD_S16(a1, 6640), 0);
  LODWORD(v6) = (int)(float)((float)(FIELD_F32(a1, 8132) * 2147500000.0) / 180.0);
  FIELD_U32(a1, 160) += LODWORD(v6);
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
    v7 += 4 * v8;
  if ( (*(_BYTE *)(*(_DWORD *)v7 + 28) & 0x10) != 0 )
    (*(void (__fastcall **)(int, void *, float))(*(_DWORD *)a1 + 192))(a1, &unk_60C87080, v6);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
}
