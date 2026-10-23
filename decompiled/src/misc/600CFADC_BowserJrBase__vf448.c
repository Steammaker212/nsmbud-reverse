/* BowserJrBase__vf448
 * address: 0x600CFADC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
bool __fastcall BowserJrBase__vf448(int *a1)
{
  int v2; // r5
  int v4; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  (*(void (__fastcall **)(int *))(*a1 + 1068))(a1);
  v2 = (*(int (__fastcall **)(int *))(*a1 + 1064))(a1);
  target = (*(int (__fastcall **)(int *))(*a1 + 1060))(a1);
  v4 = v2;
  return moveValueTo(a1 + 40, &target, &v4);
}
