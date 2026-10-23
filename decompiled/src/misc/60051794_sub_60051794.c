/* sub_60051794
 * address: 0x60051794   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60051794(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r7
  int ResArchiveById; // r0

  v5 = a1 + 7204;
  v6 = **(_DWORD **)(FIELD_U32(a1, 7204) + 36);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  sub_6045195C(v6, ResArchiveById, a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v5 + 36) + 4), a3);
}
