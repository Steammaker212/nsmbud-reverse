/* BowserJrBase__vf3E4
 * address: 0x600CF760   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026078
// 
// Overridden by: None
int __fastcall BowserJrBase__vf3E4(_DWORD *a1)
{
  _DWORD *v1; // r4

  v1 = a1 + 1811;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1044))(a1);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v1 + 876))(*v1);
  return 1;
}
