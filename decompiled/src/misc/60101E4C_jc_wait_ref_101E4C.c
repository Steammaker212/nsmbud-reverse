/* jc_wait_ref_101E4C
 * address: 0x60101E4C   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall jc_wait_ref_101E4C(int a1)
{
  int v1; // r4
  int v2; // r0
  float v3; // s0
  float v4; // s0
  ActiveColliderMgr *v5; // r5
  ActiveColliderMgr *v6; // r6
  ActiveColliderMgr *v7; // r5
  _DWORD v9[8]; // [sp+0h] [bp-20h] BYREF

  v1 = a1;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 2);
  v2 = FIELD_U32(v1, 6304);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "jc_wait";
  sub_60421AE4(v2, v9, 0);
  *(_DWORD *)(FIELD_U32(v1, 6312) + 24) = 1065353216;
  jce_damage_s_ref(v1);
  FIELD_U16(v1, 6276) = 40;
  v3 = (float)byte_60AFE3F4[FIELD_U32(v1, 80)];
  FIELD_F32(v1, 120) = v3 + v3;
  FIELD_U32(v1, 128) = 0;
  FIELD_U32(v1, 124) = 1082130432;
  v4 = (float)(*(float *)((char *)sinLutTable + (((unsigned int)dword_60C86024 >> 20) & 0xFF0))
             + (float)((float)((float)(dword_60C86024 & 0xFFFFFF)
                             * *(float *)((char *)&sinLutTable[1] + (((unsigned int)dword_60C86024 >> 20) & 0xFF0)))
                     * 0.000000059605))
     * 16.0;
  FIELD_F32(v1, 100) = (float)((float)(v4 + 4.0) * (float)((float)(v4 + -4.0) * 0.5))
                       / (float)(FIELD_F32(v1, 6812) - FIELD_F32(v1, 112));
  FIELD_F32(v1, 136) = v4;
  FIELD_U32(v1, 9356) = dword_60C86020;
  FIELD_U32(v1, 160) = 0;
  FIELD_U32(v1, 9456) = 1;
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 188));
  ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(v1 + 188));
  ActiveColldierMgr_removeFromList3(v5, v1 + 188);
  v6 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 7660));
  ActiveColldierMgr_removeFromCreateList(v6, (ActiveCollider *)(v1 + 7660));
  ActiveColldierMgr_removeFromList3(v6, v1 + 7660);
  v7 = ActiveColliderMgr_instance;
  v1 += 7964;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)v1);
  ActiveColldierMgr_removeFromCreateList(v7, (ActiveCollider *)v1);
  return ActiveColldierMgr_removeFromList3(v7, v1);
}
