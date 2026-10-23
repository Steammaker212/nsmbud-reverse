/* KoopalingBase__vf440
 * address: 0x600B3364   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x600A1304 : Iggy
int __fastcall KoopalingBase__vf440(_DWORD *a1)
{
  int result; // r0
  int v3; // r1

  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 716))(a1) == 1 )
  {
    a1[1795] = 1;
    return 7180;
  }
  else
  {
    result = (*(int (__fastcall **)(_DWORD *))(*a1 + 720))(a1);
    v3 = 2;
    if ( result == 1 )
      v3 = 1;
    a1[1795] = v3;
  }
  return result;
}
