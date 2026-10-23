/* LavaGeyser_vf8
 * address: 0x6070C198   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf8(StageActor *a1)
{
  StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 644))(a1);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 672))(a1);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 656))(a1);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 632))(a1);
  StageActor__cullCheck(a1, 0);
  return 1;
}
