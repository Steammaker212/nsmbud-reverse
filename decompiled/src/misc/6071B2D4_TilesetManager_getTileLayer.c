/* TilesetManager_getTileLayer
 * address: 0x6071B2D4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TilesetManager_getTileLayer(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r3

  v3 = 0;
  if ( a3 >= 3 )
    a3 = 0;
  if ( a2 < 4 )
    v3 = a2;
  return *(_DWORD *)(a1 + 12 * v3 + 4 * a3 + 64);
}
