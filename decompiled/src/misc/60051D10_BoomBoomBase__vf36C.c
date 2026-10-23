/* BoomBoomBase__vf36C
 * address: 0x60051D10   size: 76   group: misc
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
int __fastcall BoomBoomBase__vf36C(_BYTE *a1)
{
  int (__fastcall *v2)(_BYTE *); // r1

  if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 728))(a1) == 1 )
  {
    a1[7524] = 1;
    v2 = *(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1196);
  }
  else
  {
    v2 = *(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1200);
  }
  return v2(a1);
}
