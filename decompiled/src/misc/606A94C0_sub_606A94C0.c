/* sub_606A94C0
 * address: 0x606A94C0   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A94C0(StageActor *a1)
{
  int settings1; // r6
  unsigned int v3; // r5
  unsigned int v4; // r6
  int v5; // r5
  _DWORD *v6; // r0
  int v7; // s2
  void *v8; // r8
  void *Model2; // r7
  ModelWrapper *v10; // r6
  ModelWrapper *v11; // r0

  settings1 = FIELD_U32(a1, 0x14);
  v3 = (*(int (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 228))(a1);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 224))(a1);
  v4 = settings1 & 7;
  if ( v4 >= v3 )
    LOWORD(v4) = 0;
  v5 = 52 * (__int16)v4 + (*(int (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 224))(a1);
  FIELD_F32(a1, 0x6C) = FIELD_F32(v5, 8) + FIELD_F32(a1, 0x6C);
  FIELD_F32(a1, 0x70) = FIELD_F32(v5, 12) + FIELD_F32(a1, 0x70);
  v6 = (_DWORD *)(*(int (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 232))(a1);
  *(float *)&v7 = (float)-(v6[1] + v6[3]) - FIELD_F32(v5, 12);
  FIELD_F32(a1, 0x1EC) = (float)(v6[2] - *v6) - FIELD_F32(v5, 8);
  FIELD_U32(a1, 0x1F0) = v7;
  v8 = (void *)(*(int (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 220))(a1);
  Model2 = (void *)Resource_getModel2(v8, (sead__SafeString *)v5, 0, 0, 0, 0, 0, 0, 0);
  v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v11 = ModelWrapper_ctor(v10, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v11, v8, 0, 0);
  LODWORD(a1[9].aCollider.trapezoidOffsetTopLeft) = v10;
  ShapedCollider_init((ShapedCollider *)&a1[9].aCollider.trapezoidOffsetBottomLeft, a1, (ShapedColliderInfo *)(v5 + 16));
  a1[10]._.field_30 = (int)&a1[10].aCollider.field_B4;
  a1[10]._.settigns2 = (int)sub_606A968C;
  a1[10]._.field_20.next = (sead_ListNode *)sub_606A96D8;
  a1[10]._.childCount = (int)sub_606A96F8;
  a1[10]._.field_2C = (int)sub_606A9718;
  return 1;
}
