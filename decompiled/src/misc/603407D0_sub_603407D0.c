/* sub_603407D0
 * address: 0x603407D0   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603407D0(int a1, int a2, int a3)
{
  int v4; // r4
  int v5; // r1
  unsigned int v6; // r0
  int *v7; // r1
  unsigned int v8; // r0
  int v9; // r0
  int *v10; // r1
  unsigned int v11; // r0
  int result; // r0

  v4 = a1 + 6304;
  sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), a2);
  v5 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), a3);
  v7 = *(int **)(*(_DWORD *)v4 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v8 )
    v7 += v8;
  v9 = *v7;
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  v10 = *(int **)(*(_DWORD *)v4 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v11 )
    v10 += v11;
  result = *v10;
  *(_DWORD *)(*v10 + 24) = 1065353216;
  return result;
}
