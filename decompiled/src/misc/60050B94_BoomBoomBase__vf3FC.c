/* BoomBoomBase__vf3FC
 * address: 0x60050B94   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BF4
// 
// Overridden by: None
int __fastcall BoomBoomBase__vf3FC(int a1)
{
  int v2; // r0
  float *v3; // r5
  int v4; // s2
  float v5; // s0
  float v6; // s4
  float v7; // s0
  signed int v8; // r0
  int v9; // r1
  int v10; // r0
  float v11; // s0
  int v12; // r0
  float v13; // s0
  ActiveColliderMgr *v14; // r6
  int v15; // r2

  v3 = (float *)(a1 + 7092);
  v2 = FIELD_U32(a1, 7092);
  FIELD_U32(a1, 144) = v2;
  FIELD_U32(a1, 148) = v2;
  FIELD_U32(a1, 152) = v2;
  FIELD_F64(a1, 6692) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6688))(a1 + 6688);
  FIELD_U32(a1, 6700) = v4;
  v5 = *v3;
  FIELD_U32(a1, 492) = 0;
  v6 = v5 * 24.0;
  v7 = v5 * 48.0;
  FIELD_F32(a1, 496) = v6;
  FIELD_F32(a1, 500) = v7;
  FIELD_F32(a1, 504) = v7;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1102263091;
  FIELD_U32(a1, 580) = 0;
  v8 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v8;
  v9 = FIELD_U32(a1, 7096);
  if ( v8 )
    v9 = -v9;
  FIELD_U32(a1, 160) = v9;
  FIELD_U32(a1, 116) = 1117782016;
  v10 = FIELD_U32(a1, 20);
  if ( (v10 & 0xF) != 0 )
    v11 = (float)(FIELD_U32(a1, 20) & 0xF) * -16.0;
  else
    v11 = FIELD_F32(a1, 7108);
  FIELD_F32(a1, 7216) = v11;
  v12 = (unsigned __int8)v10 >> 4;
  if ( v12 )
    v13 = (float)v12 * 16.0;
  else
    v13 = FIELD_F32(a1, 7112);
  FIELD_F32(a1, 7220) = v13;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC3C60, 0);
  v14 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v14, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v14, (ActiveCollider *)(a1 + 188));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF529C, &stru_60AF52A8, &stru_60AF52B4);
  FIELD_U32(a1, 3200) |= 0x1C000E00u;
  FIELD_U32(a1, 3192) |= 0x1C000E00u;
  v15 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0x1C000E00u;
  FIELD_U32(a1, 3184) = v15 | 0x1C000E00;
  FIELD_U32(a1, 3204) |= 0x80000u;
  FIELD_U32(a1, 6672) = 2;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C805A8);
  return 1;
}
