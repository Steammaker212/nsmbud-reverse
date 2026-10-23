/* FixedIcicle__onExecute
 * address: 0x60623FA0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by: None
int __fastcall FixedIcicle__onExecute(StageActor *a1)
{
  int v2; // r0

  StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 628))(a1);
  StageActor__cullCheck(a1, 0);
  if ( v2 == 1 )
    FIELD_U8(a1, 0x13) = 1;
  return 1;
}
