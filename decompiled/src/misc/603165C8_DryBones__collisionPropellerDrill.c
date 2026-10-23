/* DryBones__collisionPropellerDrill
 * address: 0x603165C8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6128
// 
// Overridden by: None
signed int __fastcall DryBones__collisionPropellerDrill(_BYTE *a1, int a2, int a3)
{
  sub_60316180((int)a1, a2, a3, 0);
  a1[7664] = 0;
  a1[7674] = 1;
  (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9345C);
  return 1;
}
