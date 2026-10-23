/* Player__vf1C
 * address: 0x607958A0   size: 76   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607958A0(int a1)
{
  int v2; // r1
  int result; // r0

  v2 = PlayerBase_vf7(a1);
  result = 0;
  if ( v2 == 1 && (!dword_60C99DD4 || FIELD_U32(dword_60C99DD4, 764) != 3) )
  {
    ((void (__fastcall *)(int))loc_607C1E18)(a1);
    return 1;
  }
  return result;
}
