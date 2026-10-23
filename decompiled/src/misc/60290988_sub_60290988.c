/* sub_60290988
 * address: 0x60290988   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60290988(int a1)
{
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)&dword_60C8FC98, 2, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 2, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 7500) = v4;
  FIELD_U8(a1, 7532) = 0;
  return sub_60290A48(a1, 0);
}
