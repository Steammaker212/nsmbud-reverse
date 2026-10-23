/* TileGod_onExecute
 * address: 0x605CF660   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TileGod_onExecute(int a1)
{
  TileGod_onExecute_helper();
  if ( !FIELD_U8(a1, 6136) )
    StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
