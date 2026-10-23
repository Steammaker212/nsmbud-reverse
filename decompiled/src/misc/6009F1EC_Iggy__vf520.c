/* Iggy__vf520
 * address: 0x6009F1EC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B7F18
// 
// Overridden by: None
int __fastcall Iggy__vf520(int a1)
{
  int v1; // r4
  const char *v2; // r1

  v1 = a1 + 6332;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1) == 1 )
    v2 = "SE_BOSS_IGGY_MAGIC_MAKE_FAST";
  else
    v2 = "SE_BOSS_IGGY_MAGIC_MAKE";
  return sub_608134C8(v1, v2, 0);
}
