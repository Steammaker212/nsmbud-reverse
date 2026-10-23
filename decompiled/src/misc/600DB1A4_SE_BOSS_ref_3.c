/* SE_BOSS_ref_3
 * address: 0x600DB1A4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_ref_3(int a1)
{
  __int16 v2; // r2
  int v3; // r0
  const char *v4; // r1

  v2 = FIELD_U16(a1, 6640);
  v3 = a1 + 6332;
  if ( (FIELD_U32(a1, 5956) & 0xFF00) != 0xB00 )
    v4 = "SE_BOSS_CMN_SMART_SHELL_LAND";
  else
    v4 = "SE_BOSS_LARRY_SHELL_LAND";
  return sub_608134CC(v3, v4, v2, 0);
}
