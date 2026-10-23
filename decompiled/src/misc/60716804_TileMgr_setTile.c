/* TileMgr_setTile
 * address: 0x60716804   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int16 *__fastcall TileMgr_setTile(int a1, __int16 a2, unsigned int a3, unsigned int a4, int a5)
{
  return TileMgr_setTileArea(a1, a2, a3, FIELD_U8(LevelInfo_instance, 0x12), a4, a5);
}
