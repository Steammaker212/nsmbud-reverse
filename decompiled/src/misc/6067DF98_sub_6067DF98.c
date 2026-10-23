/* sub_6067DF98
 * address: 0x6067DF98   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6067DF98(_DWORD *a1)
{
  void *v2; // r5
  void *Model2; // r9
  int v4; // r7
  ModelWrapper *v5; // r0

  v2 = (void *)a1[81];
  Model2 = (void *)Resource_getModel2(v2, (sead__SafeString *)&dword_60CB7FD4, 1, 0, 1, 0, 0, 0, 0);
  v4 = operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor((ModelWrapper *)v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  a1[82] = v4;
  SkeletalAnim_play(**(_DWORD **)(v4 + 12), (int)v2, (const char **)&dword_60CB7FEC);
  a1[112] = &dword_60CB7FC4;
  a1[113] = 0;
  return &dword_60CB7FC4;
}
