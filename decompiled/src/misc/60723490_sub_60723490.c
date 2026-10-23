/* sub_60723490
 * address: 0x60723490   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60723490(int a1, _WORD *a2, int a3)
{
  _WORD *v5; // r6
  int result; // r0

  v5 = a2 + 1542;
  result = sub_6071B2FC(
             TilesetMgr_instance,
             (unsigned __int16)a2[1552],
             ((unsigned __int16)a2[1543] << 6) & 0x3C00 | a2[1543] & 0xF | a2[1542] & 0x3F0,
             FIELD_U32(a1, 9240));
  if ( (word_60B086B8[*v5 & 0xF] & (unsigned __int16)result) != 0 )
  {
    result = word_60B09FDC[sub_6071B620(a3)];
    a2[1544] = result;
  }
  return result;
}
