/* lift_zen_yoko_ref
 * address: 0x60675D3C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_zen_yoko_ref(int a1, _DWORD *r1_0)
{
  void *ResArchiveById; // r9
  void *Model2; // r7
  ModelWrapper *v6; // r4
  ModelWrapper *v7; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  FIELD_U32(a1, 116) = -1015021568;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_zen_yoko";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v7, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6916) = v6;
  *r1_0 = 1139802112;
  r1_0[1] = 1107296256;
  return 1;
}
