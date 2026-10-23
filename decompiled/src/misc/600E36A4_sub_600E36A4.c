/* sub_600E36A4
 * address: 0x600E36A4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600E36A4(int a1, int a2, int a3)
{
  int v5; // r6
  _DWORD *v6; // r7
  int ResArchiveById; // r0
  int v8; // r1
  unsigned int v9; // r0

  v5 = a1 + 6100;
  v6 = *(_DWORD **)(a1 + 6100);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  sub_60421938(v6, ResArchiveById, a2);
  v8 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v9 )
    v8 += 4 * v9;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), a3);
}
