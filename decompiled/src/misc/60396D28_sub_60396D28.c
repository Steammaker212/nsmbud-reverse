/* sub_60396D28
 * address: 0x60396D28   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_60396D28(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  float v6; // r0
  int v7; // r0
  int v8; // r0
  float v9; // r1
  void *result; // r0
  Vec3 v11[2]; // [sp+8h] [bp-20h] BYREF

  FIELD_U32(a1, 6316) = 1077516698;
  FIELD_U32(a1, 80) = 0;
  sub_6039AF5C(a1, 0, 0.35);
  v2 = *(_DWORD **)(a1 + 6304);
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  *(float *)(*(_DWORD *)v3 + 24) = FIELD_F32(a1, 88) * 0.8;
  v6 = FIELD_F32(a1, 112);
  v11[0].z = FIELD_F32(a1, 116);
  v11[0].y = v6;
  v11[0].x = FIELD_F32(a1, 108);
  EffectWrapper_update((EffectWrapper *)(a1 + 12672), 597, v11, 0, 0);
  v7 = FIELD_U32(a1, 6320);
  if ( (v7 & 1) != 0 )
  {
    v8 = 1;
    switch ( FIELD_U8(a1, 5957) )
    {
      case 1:
        v8 = 3;
        break;
      case 2:
        v8 = 2;
        break;
      case 4:
        break;
      case 0xB:
        v8 = 4;
        break;
      default:
        v8 = 0;
        break;
    }
    v9 = FIELD_F32(a1, 108);
    v11[0].y = FIELD_F32(a1, 112);
    v11[0].x = v9;
    v11[0].z = 4500.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 12568), dword_60B0096C[v8], v11, 0, 0);
    v7 = FIELD_U32(a1, 6320);
  }
  if ( (v7 & 1) != 0 )
    SE_EMY_SHADOW_FN_ref(a1);
  result = (void *)dword_60CC6484;
  if ( FIELD_F32(a1, 108) >= (float)(FIELD_F32(dword_60CC6484, 48) + 64.0) )
  {
    FIELD_U32(a1, 6392) = &unk_60C974E0;
    return &unk_60C974E0;
  }
  return result;
}
