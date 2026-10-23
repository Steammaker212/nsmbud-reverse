/* sub_6013CF8C
 * address: 0x6013CF8C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013CF8C(int a1)
{
  float *v2; // r0
  float v3; // r3
  float v4; // r4
  float v5; // r5
  float v6; // r6
  float v7; // r7
  float v8; // r12
  float v9; // r4
  float v10; // r5
  float v11; // r6
  float v12; // r7
  float v13; // r12
  ActiveColliderMgr *v14; // r7
  ActiveColliderMgr *v15; // r6
  ActiveColliderMgr *v16; // r6
  int result; // r0
  float v18[18]; // [sp+0h] [bp-48h] BYREF

  v2 = (float *)(*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6300) + 64))(**(_DWORD **)(a1 + 6300));
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  v7 = v2[4];
  v8 = v2[5];
  v2 += 6;
  v18[0] = v3;
  v18[1] = v4;
  v18[2] = v5;
  v18[3] = v6;
  v18[4] = v7;
  v18[5] = v8;
  v9 = v2[1];
  v10 = v2[2];
  v11 = v2[3];
  v12 = v2[4];
  v13 = v2[5];
  v18[6] = *v2;
  v18[7] = v9;
  v18[8] = v10;
  v18[9] = v11;
  v18[10] = v12;
  v18[11] = v13;
  sub_6083316C((int *)(a1 + 156), v18);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD3154, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 6428), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD3180, 0);
  v14 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v14, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v14, (ActiveCollider *)(a1 + 188));
  }
  v15 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6428))
    && !ActiveColliderMgr_isInCreateList(v15, (ActiveCollider *)(a1 + 6428)) )
  {
    ActiveColliderMgr_addToCreateList(v15, (ActiveCollider *)(a1 + 6428));
  }
  v16 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6732))
    && !ActiveColliderMgr_isInCreateList(v16, (ActiveCollider *)(a1 + 6732)) )
  {
    ActiveColliderMgr_addToCreateList(v16, (ActiveCollider *)(a1 + 6732));
  }
  result = FIELD_U32(a1, 6148) | 2;
  FIELD_U32(a1, 6148) = result;
  return result;
}
