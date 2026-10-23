/* LayerFaderTask_ref
 * address: 0x607F01E8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LayerFaderTask_ref(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "LayerFaderTask";
  a1[135] = a1;
  a1[136] = 100;
  a1[137] = 1;
  a1[134] = off_60C27290;
  sead__SafeStringBase__operator_assign((int)(a1 + 129), (int)v4);
  a1[131] = 1;
  v2 = *(_DWORD **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 0x12u )
    v2 += 18;
  return sub_6095537C(*v2, 0, a1 + 125);
}
