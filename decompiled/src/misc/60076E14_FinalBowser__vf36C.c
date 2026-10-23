/* FinalBowser__vf36C
 * address: 0x60076E14   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268D0
// 
// Overridden by: None
int __fastcall FinalBowser__vf36C(int *a1)
{
  int v2; // r0
  int v3; // r1
  int (__fastcall *v4)(int *); // r1

  v2 = (*(int (__fastcall **)(int *))(*a1 + 728))(a1);
  v3 = *a1;
  if ( v2 == 1 )
    v4 = *(int (__fastcall **)(int *))(v3 + 988);
  else
    v4 = *(int (__fastcall **)(int *))(v3 + 984);
  return v4(a1);
}
