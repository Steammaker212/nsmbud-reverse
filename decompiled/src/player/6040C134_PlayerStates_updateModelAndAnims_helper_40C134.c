/* PlayerStates_updateModelAndAnims_helper_40C134
 * address: 0x6040C134   size: 24   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerStates_updateModelAndAnims_helper_40C134(int a1, int a2)
{
  int v2; // r2
  int v3; // r3

  v2 = FIELD_U32(a1, 2072);
  v3 = v2 + 1;
  if ( v2 > 6 )
    v3 = 0;
  FIELD_U32(a1, 2072) = v3;
  return sub_6040C14C(a1, a2);
}
