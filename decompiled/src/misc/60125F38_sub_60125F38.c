/* sub_60125F38
 * address: 0x60125F38   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60125F38(int a1)
{
  int v2; // r6
  _BYTE *v3; // r1
  int v4; // r0
  int v5; // r0
  _BYTE *v6; // r2
  float v7; // s0
  float v8; // s2
  int *v9; // r1
  int v10; // r7
  int v11; // r1
  unsigned int v12; // r0
  signed int v14; // [sp+8h] [bp-20h] BYREF
  int v15; // [sp+Ch] [bp-1Ch] BYREF

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = (_BYTE *)(a1 + 8136);
  v4 = FIELD_U32(a1, 2872);
  if ( !FIELD_U8(a1, 8136) )
  {
    if ( (v4 & 0x440000) != 0 && (v4 & 0x10000000) == 0 || (v4 & 0x880000) != 0 && (v4 & 0x20000000) == 0 )
    {
      FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
      *v3 = 1;
      goto LABEL_7;
    }
    v6 = (_BYTE *)(a1 + 8137);
    if ( !FIELD_U8(a1, 8137) )
    {
      v7 = FIELD_F32(a1, 108);
      v8 = FIELD_F32(dword_60CC6484, 116);
      if ( v7 >= (float)(v8 + FIELD_F32(a1, 7488)) )
      {
        if ( !FIELD_U32(a1, 80) )
          goto LABEL_17;
      }
      else if ( v7 <= (float)(v8 + FIELD_F32(a1, 7492)) && FIELD_U32(a1, 80) == 1 )
      {
LABEL_17:
        *v6 = 1;
        FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
        FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
        *v3 = 1;
        if ( (v4 & 1) == 0 )
          goto LABEL_8;
        goto LABEL_18;
      }
      *v6 = 0;
      if ( (v4 & 1) == 0 )
        goto LABEL_8;
      goto LABEL_18;
    }
  }
LABEL_7:
  if ( (v4 & 1) == 0 )
  {
LABEL_8:
    v5 = FIELD_U32(a1, 80);
    goto LABEL_21;
  }
LABEL_18:
  FIELD_U32(a1, 124) = 0;
  v5 = FIELD_U32(a1, 80);
  v9 = dword_601261B4;
  if ( !v5 )
    v9 = &dword_601261B4[1];
  FIELD_U32(a1, 132) = *v9;
  FIELD_U32(a1, 104) = 1028443341;
LABEL_21:
  v10 = byte_60AFE3F4[v5];
  v15 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v10;
  v14 = (int)(float)((float)(FIELD_F32(a1, 8132) * 2147500000.0) / 180.0);
  sub_6083246C((int *)(a1 + 160), &v15, &v14);
  EffectWrapper_update((EffectWrapper *)(a1 + 8448), 1006, (Vec3 *)(a1 + 8164), 0, 0);
  v11 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v12 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v12 )
    v11 += 4 * v12;
  if ( (*(_BYTE *)(*(_DWORD *)v11 + 28) & 0x20) != 0 )
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C86FC0);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
}
