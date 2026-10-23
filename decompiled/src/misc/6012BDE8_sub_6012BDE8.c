/* sub_6012BDE8
 * address: 0x6012BDE8   size: 684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6012BDE8(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // s16
  float v5; // s0
  float *v6; // r0
  float **v7; // r1
  float v8; // s2
  _DWORD *v9; // r4
  unsigned int v10; // t1
  float *v11; // r2
  float *v12; // r2
  float v13; // s0
  float *v14; // r1
  ActiveCollider *v15; // r5
  ActiveColliderMgr *v16; // r6
  signed int result; // r0
  ActiveCollider *v18; // r1
  ActiveCollider *v19; // r4
  ActiveColliderMgr *v20; // r6
  ActiveColliderMgr *v21; // r5

  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 28));
  v2 = FIELD_F32(a1, 144) + 0.05;
  FIELD_F32(a1, 144) = v2;
  v3 = FIELD_F32(a1, 148) + 0.05;
  FIELD_F32(a1, 148) = v3;
  FIELD_F32(a1, 152) = FIELD_F32(a1, 152) + 0.05;
  if ( v3 >= 2.0 )
  {
    FIELD_U32(a1, 144) = 0x40000000;
    FIELD_U32(a1, 148) = 0x40000000;
    FIELD_U32(a1, 152) = 0x40000000;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C87384);
    v2 = FIELD_F32(a1, 144);
    v3 = FIELD_F32(a1, 148);
  }
  v4 = v2 * 0.5;
  v5 = v3 * 0.5;
  FIELD_F32(a1, 312) = v4 * 8.0;
  FIELD_F32(a1, 316) = (float)(v3 * 0.5) * 6.0;
  FIELD_F32(a1, 308) = (float)(v3 * 0.5) * -26.0;
  FIELD_F32(a1, 348) = v4 * -8.0;
  FIELD_F32(a1, 352) = v4 * 8.0;
  FIELD_U32(a1, 356) = -1082130432;
  FIELD_U32(a1, 360) = 1065353216;
  FIELD_F32(a1, 7100) = v4 * 16.0;
  FIELD_F32(a1, 7104) = (float)(v3 * 0.5) * 16.0;
  FIELD_F32(a1, 7096) = (float)(v3 * 0.5) * -16.0;
  FIELD_F32(a1, 7136) = v4 * -16.0;
  FIELD_F32(a1, 7140) = v4 * 16.0;
  FIELD_U32(a1, 7144) = -1082130432;
  FIELD_U32(a1, 7148) = 1065353216;
  v7 = (float **)(a1 + 6648);
  v6 = *(float **)(a1 + 6648);
  v8 = (float)(v3 * 0.5) * 0.0;
  *v6 = v4 * -15.0;
  v6[1] = v8;
  v10 = FIELD_U32(a1, 6644);
  v9 = (_DWORD *)(a1 + 6644);
  v11 = *v7;
  if ( v10 > 1 )
    v11 += 2;
  *v11 = v4 * 15.0;
  v11[1] = v8;
  v12 = *v7;
  v13 = v5 * -22.0;
  if ( *v9 > 2u )
    v12 += 4;
  *v12 = v4 * 6.0;
  v12[1] = v13;
  v14 = *v7;
  v15 = (ActiveCollider *)(v9 - 1614);
  if ( *v9 > 3u )
    v14 += 6;
  *v14 = v4 * -6.0;
  v14[1] = v13;
  v16 = ActiveColliderMgr_instance;
  result = ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v9 - 1614));
  if ( !result )
  {
    result = ActiveColliderMgr_isInCreateList(v16, (ActiveCollider *)(v9 - 1614));
    if ( v4 > 0.3 )
    {
      result ^= 1u;
      if ( result == 1 )
      {
        v18 = (ActiveCollider *)(v9 - 1614);
        v19 = (ActiveCollider *)(v9 + 83);
        v20 = ActiveColliderMgr_instance;
        if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v18)
          && !ActiveColliderMgr_isInCreateList(v20, v15) )
        {
          ActiveColliderMgr_addToCreateList(v20, v15);
        }
        v21 = ActiveColliderMgr_instance;
        result = ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v19);
        if ( !result )
        {
          result = ActiveColliderMgr_isInCreateList(v21, v19);
          if ( !result )
            return (signed int)ActiveColliderMgr_addToCreateList(v21, v19);
        }
      }
    }
  }
  return result;
}
