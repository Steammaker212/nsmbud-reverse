/* ShellEnemy__vf2A8
 * address: 0x603A3070   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CarryableEnemy : 0x60273510
// 
// Overridden by: None
int __fastcall ShellEnemy__vf2A8(int a1)
{
  FIELD_U8(a1, 6556) = 0;
  FIELD_U32(a1, 568) &= ~4u;
  FIELD_U32(a1, 336) &= ~0x40000u;
  sub_600009FC((StageActor *)a1);
  FIELD_U8(a1, 6410) = 0;
  return 6410;
}
