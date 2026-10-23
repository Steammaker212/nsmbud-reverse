/* sub_60291118
 * address: 0x60291118   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60291118(int a1)
{
  int v2; // r4
  int v3; // t1
  int v4; // r0
  int v5; // r0
  int *v6; // r0
  int result; // r0

  FIELD_U8(a1, 7532) = 1;
  sub_60290A48(a1, 6);
  v3 = FIELD_U32(a1, 7500);
  v2 = a1 + 7500;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(v3 + 12) + 4), 0);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > 1u )
    v4 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
  v5 = **(_DWORD **)(*(_DWORD *)v2 + 12);
  FIELD_U32(v5, 20) = 0;
  FIELD_U32(v5, 28) |= 2u;
  v6 = *(int **)(*(_DWORD *)v2 + 12);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > 1u )
    ++v6;
  result = *v6;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
