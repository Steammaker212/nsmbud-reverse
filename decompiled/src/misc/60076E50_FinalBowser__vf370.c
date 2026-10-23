/* FinalBowser__vf370
 * address: 0x60076E50   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268D4
// 
// Overridden by: None
int __fastcall FinalBowser__vf370(int a1)
{
  int result; // r0

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 988))(a1);
  result = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 244))(result);
  return result;
}
