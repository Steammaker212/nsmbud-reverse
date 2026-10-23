/* sub_602912A4
 * address: 0x602912A4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602912A4(int a1)
{
  _DWORD *v1; // r4
  int v2; // t1
  int v3; // r0

  v1 = (_DWORD *)a1;
  FIELD_U8(a1, 7532) = 1;
  sub_60290A48(a1, 3);
  v2 = v1[1875];
  v1 += 1875;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(v2 + 12) + 4), 1);
  v3 = *(_DWORD *)(*v1 + 12);
  if ( *(_DWORD *)(*v1 + 8) > 1u )
    v3 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v3 + 4), 1);
}
