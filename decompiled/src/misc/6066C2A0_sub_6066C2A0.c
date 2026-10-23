/* sub_6066C2A0
 * address: 0x6066C2A0   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066C2A0(int a1)
{
  int v2; // r5
  void *ResArchiveById; // r8
  sead__SafeString *v4; // r6
  void *Model2; // r9
  ModelWrapper *v6; // r5
  ModelWrapper *v7; // r0
  _DWORD v9[20]; // [sp+18h] [bp-50h] BYREF

  FIELD_U32(a1, 116) = 1142784000;
  v2 = FIELD_U32(a1, 20);
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v4 = (sead__SafeString *)&dword_60CB6DF8[22 * (v2 & 1)];
  Model2 = (void *)Resource_getModel2(ResArchiveById, v4, 0, 0, 1, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v7, ResArchiveById, 0, 0);
  FIELD_U32(a1, 644) = v6;
  sub_6066C3FC(a1, &v4[1]);
  v9[0] = 1065353216;
  v9[1] = 0;
  v9[2] = 0;
  v9[4] = 0;
  v9[5] = 1065353216;
  v9[6] = 0;
  v9[8] = 0;
  v9[9] = 0;
  v9[10] = 1065353216;
  v9[3] = FIELD_U32(a1, 108);
  v9[7] = FIELD_U32(a1, 112);
  v9[11] = FIELD_U32(a1, 116);
  (*(void (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(a1 + 644) + 60))(**(_DWORD **)(a1 + 644), v9);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 644) + 68))(**(_DWORD **)(a1 + 644), a1 + 144);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 644));
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1128267776;
  return 1;
}
