/* sub_602911C8
 * address: 0x602911C8   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602911C8(int a1)
{
  _DWORD **v2; // r4
  int v3; // t1
  int v4; // r0
  int *v5; // r0

  FIELD_U8(a1, 7532) = 1;
  sub_60290A48(a1, 4);
  FIELD_U32(a1, 7516) = 1119092736;
  FIELD_U32(a1, 6700) = 0;
  v3 = FIELD_U32(a1, 7500);
  v2 = (_DWORD **)(a1 + 7500);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(v3 + 12) + 4), 0);
  v4 = (*v2)[3];
  if ( (*v2)[2] > 1u )
    v4 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
  Animation_update(*(_DWORD *)(*v2)[3]);
  v5 = (int *)(*v2)[3];
  if ( (*v2)[2] > 1u )
    ++v5;
  Animation_update(*v5);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v2 + 52))(**v2);
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v2 + 56))(**v2);
}
