/* KoopalingBase__vf398
 * address: 0x600A122C   size: 116   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026920
// 
// Overridden by: None
int __fastcall KoopalingBase__vf398(_DWORD *a1)
{
  int result; // r0

  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 728))(a1) == 1 )
    (*(void (__fastcall **)(_DWORD *))(*a1 + 916))(a1);
  result = a1[1575];
  if ( result <= 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a1 + 916))(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 912))(a1);
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 980))(a1);
  }
  return result;
}
