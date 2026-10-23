/* sub_60386E84
 * address: 0x60386E84   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60386E84(int a1)
{
  int v2; // r0
  ActiveColliderMgr *v3; // r5
  ActiveCollider *v4; // r6
  int v5; // r1
  float *v6; // r0
  float v7; // r2
  float v9; // s0
  float v10; // s2
  bool v11; // nf
  bool v12; // cc
  float *v13; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r0

  v2 = FIELD_U32(a1, 32);
  if ( v2 == 1 )
  {
    v9 = *(float *)&dword_60C96C44;
    v10 = *(float *)&dword_60C96C40 + FIELD_F32(a1, 4);
    v11 = *(float *)&dword_60C96C40 < 0.0;
    v12 = *(float *)&dword_60C96C40 <= 0.0;
    FIELD_F32(a1, 4) = v10;
    if ( v11 )
    {
      if ( v10 < v9 )
        FIELD_F32(a1, 4) = v9;
    }
    else if ( !v12 )
    {
      FIELD_F32(a1, 4) = v9;
    }
    v13 = *(float **)(a1 + 56);
    v13[18] = v13[18] + *(float *)a1;
    v13[19] = v13[19] + FIELD_F32(a1, 4);
    v13[20] = v13[20] + FIELD_F32(a1, 8);
    v14 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 56) + 8))(FIELD_U32(a1, 56));
    v15 = 117440512;
    if ( v14 )
      v15 = 0x400000;
    v16 = byte_60AFE3F4[FIELD_U32(a1, 40)];
    *(_DWORD *)(FIELD_U32(a1, 56) + 84) += v16 * v15;
    *(_DWORD *)(FIELD_U32(a1, 56) + 88) += 12582912 * v16;
    v17 = FIELD_U32(a1, 56);
    if ( FIELD_F32(v17, 76) < (float)(FIELD_F32(dword_60CC6484, 132) + -48.0) )
      FIELD_U8(v17, 128) = 0;
  }
  else if ( !v2 )
  {
    v3 = ActiveColliderMgr_instance;
    v4 = (ActiveCollider *)(FIELD_U32(a1, 56) + 132);
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v4);
    ActiveColldierMgr_removeFromCreateList(v3, v4);
    ActiveColldierMgr_removeFromList3(v3, (int)v4);
    v5 = FIELD_U32(a1, 56);
    v6 = (float *)&dword_60C96C80[2 * (FIELD_U32(v5, 112) & 7)];
    v7 = *v6;
    *(float *)a1 = *v6;
    FIELD_F32(a1, 4) = (float)(v6[1] * 0.333) + 1.5;
    FIELD_U32(a1, 40) = v7 < 0.0;
    FIELD_U32(v5, 80) = 1167867904;
    FIELD_U32(a1, 32) = 1;
    return 1;
  }
  return 1;
}
