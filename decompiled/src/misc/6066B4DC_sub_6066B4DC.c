/* sub_6066B4DC
 * address: 0x6066B4DC   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066B4DC(int a1, void **a2)
{
  unsigned int v4; // r6
  void *ResArchiveById; // r9
  sead__SafeString *v6; // r7
  void *Model2; // r10
  ModelWrapper *v8; // r6
  ModelWrapper *v9; // r0

  FIELD_U32(a1, 116) = -1015021568;
  v4 = FIELD_U32(a1, 20);
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v6 = (sead__SafeString *)((char *)&dword_60CB6D98 + ((v4 >> 4) & 0x30));
  Model2 = (void *)Resource_getModel2(ResArchiveById, v6, 0, 0, 0, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v9, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6916) = v8;
  *a2 = v6[1].vtable;
  a2[1] = v6[1].cstr;
  return 1;
}
