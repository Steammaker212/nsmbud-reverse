/* sub_606CE9D4
 * address: 0x606CE9D4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CE9D4(int a1, void **a2)
{
  unsigned int v4; // r6
  void *ResArchiveById; // r9
  unsigned int v6; // r1
  sead__SafeString *v7; // r7
  void *Model2; // r10
  ModelWrapper *v9; // r6
  ModelWrapper *v10; // r0

  v4 = FIELD_U32(a1, 20);
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v6 = (v4 >> 8) & 7;
  if ( v6 > 4 )
    v6 = 0;
  v7 = (sead__SafeString *)&dword_60CBB3A4[4 * v6];
  Model2 = (void *)Resource_getModel2(ResArchiveById, v7, 0, 0, 0, 0, 0, 0, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v10, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6916) = v9;
  *a2 = v7[1].vtable;
  a2[1] = v7[1].cstr;
  FIELD_U32(a1, 6920) = (FIELD_U32(a1, 20) << 26) & 0xC0000000;
  return 1;
}
