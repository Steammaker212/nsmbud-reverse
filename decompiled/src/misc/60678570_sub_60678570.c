/* sub_60678570
 * address: 0x60678570   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60678570(int a1)
{
  void *v2; // r8
  void *Model2; // r9
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  RevealMaskRelated *v6; // r0
  RevealMaskRelated *v7; // r0
  float v8; // s0
  float v9; // s10
  float v10; // s2
  float v11; // s6
  float v12; // s4
  float v13; // s8
  int v14; // r1

  sub_605D7738(a1);
  v2 = *(void **)(a1 + 6064);
  Model2 = (void *)Resource_getModel2(v2, (sead__SafeString *)&dword_60CB7D54, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 8036) = v4;
  sub_6040F4B8((int)v4, (int)&dword_60CB7D68, dword_60CB7D70, 1.0, 0.0);
  v6 = (RevealMaskRelated *)operator_new(0x28u);
  v7 = LightMask__ctor(v6);
  FIELD_U32(a1, 8052) = v7;
  (*(void (__fastcall **)(RevealMaskRelated *, _DWORD, int))FIELD_U32(v7, 0x0))(v7, 0, 2);
  FIELD_U32(a1, 8132) = 1128792064;
  v8 = FIELD_F32(a1, 572);
  v9 = FIELD_F32(a1, 108);
  v10 = FIELD_F32(a1, 576);
  v11 = FIELD_F32(a1, 112);
  v12 = FIELD_F32(a1, 580);
  v13 = FIELD_F32(a1, 116);
  v14 = FIELD_U32(a1, 8052);
  FIELD_U32(v14, 4) = 1128792064;
  FIELD_F32(v14, 12) = v9 + v8;
  FIELD_F32(v14, 16) = v11 + v10;
  FIELD_F32(v14, 20) = v13 + v12;
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8052) + 4))(FIELD_U32(a1, 8052));
  ActiveCollider__init((ActiveCollider *)(a1 + 8144), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C16510, 0);
  return 1;
}
