/* GameOverScene_ref
 * address: 0x607EC1F0   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GameOverScene_ref(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "GameOverScene";
  a1[67] = a1;
  a1[68] = sub_607EC29C;
  a1[69] = 0;
  a1[66] = off_60C26E80;
  sead__SafeStringBase__operator_assign((int)(a1 + 61), (int)v4);
  a1[63] = 1;
  v2 = *(_DWORD **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 0xEu )
    v2 += 14;
  return sub_6095537C(*v2, 1, a1 + 57);
}
