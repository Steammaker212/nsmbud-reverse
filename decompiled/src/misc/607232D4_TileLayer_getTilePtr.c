/* TileLayer_getTilePtr
 * address: 0x607232D4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall TileLayer_getTilePtr(int this, unsigned int x, unsigned int y, unsigned int *indexOut)
{
  unsigned int v5; // lr
  unsigned int result; // r0
  unsigned int v7; // lr
  int v8; // r3

  v5 = ((y >> 2) & 0x3FC0) + (x >> 8);
  result = 0;
  if ( !(v5 >> 11) )
  {
    v7 = *(_DWORD *)(this + 4 * v5 + 1028);
    if ( v7 != -1 )
    {
      result = 0;
      if ( indexOut )
        *indexOut = v7;
      if ( v7 > 0x100 )
        v7 = 0;
      v8 = *(_DWORD *)(this + 4 * v7);
      if ( v8 )
        return v8 + ((unsigned __int8)(x & 0xF0) >> 3) + 2 * (y & 0xF0);
    }
  }
  return result;
}
