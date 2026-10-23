/* lift_zen_chika_pori_ref
 * address: 0x606CB77C   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_zen_chika_pori_ref(int a1, _DWORD *a2)
{
  unsigned int v4; // r1
  int *v5; // r6
  void *ResArchiveById; // r7
  void *Model2; // r9
  ModelWrapper *v8; // r4
  ModelWrapper *v9; // r0
  int v10; // r0
  _DWORD v12[11]; // [sp+14h] [bp-2Ch] BYREF

  v4 = (FIELD_U32(a1, 20) >> 8) & 0xF;
  if ( v4 > 0xA )
    v4 = 0;
  v5 = &dword_60CBAFD8[15 * v4];
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) - *((float *)v5 + 8);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - *((float *)v5 + 9);
  FIELD_U32(a1, 116) = -1015021568;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)v5, 0, 0, 1, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, Model2, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v9, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6624) = v8;
  v10 = (int)*FIELD_U32(v8, 0x1C);
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "lift_zen_chika_pori";
  sub_60446088(v10, (int)ResArchiveById, v12);
  FIELD_U32(a1, 508) = v5[10];
  FIELD_U32(a1, 512) = v5[11];
  sub_60161BEC((_DWORD *)(a1 + 6240), a1, v5 + 2, *((unsigned __int8 *)v5 + 56), 0);
  FIELD_U32(a1, 6576) = a1 + 6608;
  FIELD_U32(a1, 6192) = a1 + 6240;
  *a2 = a1 + 6192;
  a2[1] = a1 + 6236;
  a2[2] = v5[12];
  a2[3] = v5[13];
  return 1;
}
