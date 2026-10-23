/* Bowser__vf354
 * address: 0x600C6328   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026884
// 
// Overridden by: None
int __fastcall Bowser__vf354(int a1)
{
  int v1; // r2
  int v3[4]; // [sp+0h] [bp-10h] BYREF

  v1 = FIELD_U32(a1, 112);
  v3[0] = FIELD_U32(a1, 108);
  v3[1] = v1;
  return sub_600C5A70((StateActor *)a1, 0, 3u, v3);
}
