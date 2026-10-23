/* KoopalingBase__vf3A0
 * address: 0x600A12A0   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026928
// 
// Overridden by: None
int __fastcall KoopalingBase__vf3A0(int *a1)
{
  int *v2; // r5
  int result; // r0

  v2 = a1 + 1575;
  (*(void (__fastcall **)(int *))(*a1 + 916))(a1);
  result = *v2;
  if ( *v2 <= 0 )
    return (*(int (__fastcall **)(int *))(*a1 + 912))(a1);
  return result;
}
