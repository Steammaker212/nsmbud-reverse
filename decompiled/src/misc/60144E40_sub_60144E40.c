/* sub_60144E40
 * address: 0x60144E40   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60144E40(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r0
  float *v7; // r0
  float v8; // r3
  float v9; // r4
  float v10; // r5
  float v11; // r6
  float v12; // r7
  float v13; // r12
  float v14; // r4
  float v15; // r5
  float v16; // r6
  float v17; // r7
  float v18; // r12
  ActiveColliderMgr *v19; // r6
  ActiveColliderMgr *v20; // r5
  ActiveColliderMgr *result; // r0
  float v22[20]; // [sp+0h] [bp-50h] BYREF

  v2 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 136) = -1061158912;
  FIELD_U32(a1, 120) = dword_60AF1F00[v2];
  FIELD_U32(a1, 124) = 1080033280;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1107296256;
  v3 = (_DWORD *)(*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6472) + 64))(**(_DWORD **)(a1 + 6472));
  v4 = v3[3];
  v5 = v3[7];
  v6 = v3[11];
  FIELD_U32(a1, 108) = v4;
  FIELD_U32(a1, 112) = v5;
  FIELD_U32(a1, 116) = v6;
  v7 = (float *)(*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6472) + 64))(**(_DWORD **)(a1 + 6472));
  v8 = *v7;
  v9 = v7[1];
  v10 = v7[2];
  v11 = v7[3];
  v12 = v7[4];
  v13 = v7[5];
  v7 += 6;
  v22[0] = v8;
  v22[1] = v9;
  v22[2] = v10;
  v22[3] = v11;
  v22[4] = v12;
  v22[5] = v13;
  v14 = v7[1];
  v15 = v7[2];
  v16 = v7[3];
  v17 = v7[4];
  v18 = v7[5];
  v22[6] = *v7;
  v22[7] = v14;
  v22[8] = v15;
  v22[9] = v16;
  v22[10] = v17;
  v22[11] = v18;
  sub_6083316C((int *)(a1 + 156), v22);
  FIELD_U32(a1, 160) = dword_60AF1F20[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 6484) = 4;
  v19 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v19, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v19, (ActiveCollider *)(a1 + 188));
  }
  v20 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(
                                  ActiveColliderMgr_instance,
                                  (ActiveCollider *)(a1 + 6132));
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v20, (ActiveCollider *)(a1 + 6132));
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v20, (ActiveCollider *)(a1 + 6132));
  }
  return result;
}
