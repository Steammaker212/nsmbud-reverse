/* BowserJrBase__vf36C
 * address: 0x600CEE64   size: 68   group: misc
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
int __fastcall BowserJrBase__vf36C(int a1)
{
  int v1; // r4
  const char *v2; // r1

  v1 = a1 + 6332;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1) == 1 )
    v2 = "SE_VOC_JR_DAMAGE_L";
  else
    v2 = "SE_VOC_JR_DAMAGE_S";
  return sub_60813430(v1, v2, 0);
}
