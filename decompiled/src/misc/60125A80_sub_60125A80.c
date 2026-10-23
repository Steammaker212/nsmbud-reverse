/* sub_60125A80
 * address: 0x60125A80   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60125A80(int a1)
{
  int v2; // r5
  _BYTE *v3; // r0
  int v4; // r1
  _DWORD *v5; // r1
  unsigned int v6; // r0
  float v7; // s0
  int v8; // r1
  unsigned int v9; // r0
  _BYTE *v11; // r1
  float v12; // s0
  float v13; // s2
  Vec3 v14; // [sp+4h] [bp-1Ch] BYREF

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
    v11 = (_BYTE *)(a1 + 8137);
    if ( !FIELD_U8(a1, 8137) )
    {
      v12 = FIELD_F32(a1, 108);
      v13 = FIELD_F32(dword_60CC6484, 116);
      if ( v12 >= (float)(v13 + FIELD_F32(a1, 7488)) )
      {
        if ( !FIELD_U32(a1, 80) )
        {
LABEL_23:
          *v11 = 1;
          FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
          FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
          *v3 = 1;
          goto LABEL_7;
        }
      }
      else if ( v12 <= (float)(v13 + FIELD_F32(a1, 7492)) && FIELD_U32(a1, 80) == 1 )
      {
        goto LABEL_23;
      }
      *v11 = 0;
    }
  }
LABEL_7:
  v5 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += v6;
  if ( sub_60418548(*v5 + 4) )
  {
    v7 = FIELD_F32(a1, 112);
    v14.x = FIELD_F32(a1, 108);
    v14.y = v7 + -2.0;
    v14.z = 4500.0;
    EffectData_create(788, &v14, 0, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1288))(a1);
  }
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v9 )
    v8 += 4 * v9;
  if ( (*(_BYTE *)(*(_DWORD *)v8 + 28) & 0x20) != 0 )
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C86F5C);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
}
