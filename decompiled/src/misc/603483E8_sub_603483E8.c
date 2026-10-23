/* sub_603483E8
 * address: 0x603483E8   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603483E8(_DWORD *a1)
{
  void *v2; // r8
  int *v3; // r9
  void *Model2; // r5
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r5
  int v8; // r4

  v3 = a1 + 1588;
  v2 = (void *)a1[1588];
  Model2 = (void *)Resource_getModel2(v2, (sead__SafeString *)&unk_60C94A48, 1, 1, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v6, (int)v2, 0, 0);
  a1[1589] = v5;
  a1[36] = 1065353216;
  a1[37] = 1065353216;
  a1[38] = 1065353216;
  (*(void (__fastcall **)(void *, _DWORD *))(*(_DWORD *)FIELD_U32(v5, 0x0) + 68))(FIELD_U32(v5, 0x0), a1 + 36);
  a1[1592] = 0;
  v7 = **(_DWORD **)(a1[1589] + 12);
  SkeletalAnim_play(v7, *v3, (int)&dword_60C94A5C);
  AnimationCtrl_setRepeat((ModelAnimation *)(v7 + 4), dword_60C94A6C);
  v8 = **(_DWORD **)(a1[1589] + 20);
  TexAnim_play(v8, *v3, &dword_60C94A64);
  AnimationCtrl_setRepeat((ModelAnimation *)(v8 + 4), dword_60C94A6C);
}
