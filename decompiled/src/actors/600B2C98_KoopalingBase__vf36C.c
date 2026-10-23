/* KoopalingBase__vf36C
 * address: 0x600B2C98   size: 100   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268D0
// 
// Overridden by:
//   - 0x6009D4F8 : Iggy
int __fastcall KoopalingBase__vf36C(int *a1)
{
  int v2; // r0
  int v3; // r1
  int result; // r0

  v2 = (*(int (__fastcall **)(int *))(*a1 + 728))(a1);
  v3 = *a1;
  if ( v2 == 1 )
    (*(void (__fastcall **)(int *))(v3 + 1344))(a1);
  else
    (*(void (__fastcall **)(int *))(v3 + 1340))(a1);
  result = (*(int (__fastcall **)(int *))(*a1 + 724))(a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(int *))(*a1 + 1100))(a1);
  return result;
}
