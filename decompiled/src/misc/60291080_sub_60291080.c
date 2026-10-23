/* sub_60291080
 * address: 0x60291080   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60291080(int a1, float a2)
{
  int v4; // r4
  int v5; // t1
  int v6; // r0
  int *v7; // r0
  int result; // r0

  FIELD_U8(a1, 7532) = 1;
  sub_60290A48(a1, 0);
  v5 = FIELD_U32(a1, 7500);
  v4 = a1 + 7500;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(v5 + 12) + 4), 0);
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > 1u )
    v6 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 0);
  v7 = *(int **)(*(_DWORD *)v4 + 12);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > 1u )
    ++v7;
  result = *v7;
  FIELD_F32(result, 20) = a2;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
