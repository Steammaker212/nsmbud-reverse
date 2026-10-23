/* sub_602CB180
 * address: 0x602CB180   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602CB180(int a1, int a2, unsigned int a3)
{
  char v3; // r6
  StageActor *v6; // r5
  float v7; // s16
  int v8; // r7
  int v9; // s2
  void *ResArchiveById; // r11
  void *Model2; // r10
  ModelWrapper *v12; // r6
  ModelWrapper *v13; // r0
  float v14; // s0
  float v15; // s16
  StageActor *v16; // r5
  int v17; // r4
  signed int result; // r0

  v3 = a3;
  v6 = *(StageActor **)a1;
  v7 = (float)((float)a3 * 0.1) + 1.0;
  FIELD_F32(v6, 0x90) = v7;
  FIELD_F32(v6, 0x94) = v7;
  FIELD_F32(v6, 0x98) = v7;
  v8 = 0;
  FIELD_F64(a1, 12) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 8))(a1 + 8);
  FIELD_U32(a1, 20) = v9;
  ResArchiveById = (void *)Profile__getResArchiveById(FIELD_U32(v6, 0xC), 0);
  Model2 = (void *)Resource_getModel2(
                     ResArchiveById,
                     (sead__SafeString *)((char *)&dword_60C918C0 + (v3 & 8) + 20),
                     1,
                     0,
                     0,
                     0,
                     0,
                     0,
                     0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v13 = ModelWrapper_ctor(v12, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v13, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 4) = v12;
  SkeletalAnim_play((int)*FIELD_U32(v12, 0xC), (int)ResArchiveById, (int)&dword_60C918C0);
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v12, 0x0) + 68))(FIELD_U32(v12, 0x0), a1 + 12);
  FIELD_F32(v6, 0x1EC) = 0.0;
  FIELD_U32(v6, 0x1F0) = 0;
  ActiveCollider__init(&FIELD_U32(v6, 0xBC), v6, (ActiveColliderInfo *)&unk_60BE5C6C, a2);
  v14 = v7 * 16.0;
  v15 = v7 * 3.0;
  FIELD_F32(v6, 0x138) = v14;
  FIELD_F32(v6, 0x13C) = v14;
  v16 = *(StageActor **)a1;
  do
  {
    v17 = a1 + v8;
    result = ActiveCollider__init((ActiveCollider *)(a1 + v8 + 44), v16, (ActiveColliderInfo *)&unk_60BE5C98, 0);
    v8 += 304;
    FIELD_F32(v17, 168) = v15;
    FIELD_F32(v17, 172) = v15;
  }
  while ( v8 != 6080 );
  return result;
}
