/* FixedIcicle__vf270
 * address: 0x606240C0   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall FixedIcicle__vf270(int a1)
{
  _DWORD *v1; // r4
  void *ResArchiveById; // r5
  int v3; // t1
  void *Model2; // r6
  int v5; // r7
  ModelWrapper *v6; // r0
  int result; // r0

  v1 = (_DWORD *)a1;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v3 = v1[1576];
  v1 += 1576;
  Model2 = (void *)Resource_getModel2(
                     ResArchiveById,
                     (sead__SafeString *)&dword_60CB3AF0[2 * v3 + 3],
                     1,
                     0,
                     1,
                     0,
                     0,
                     0,
                     0);
  v5 = operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor((ModelWrapper *)v5, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v6, ResArchiveById, 0, 0);
  *(v1 - 1) = v5;
  sub_60446088(**(_DWORD **)(v5 + 28), (int)ResArchiveById, &dword_60CB3AF0[2 * *v1 + 7]);
  result = **(_DWORD **)(*(v1 - 1) + 28);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
