/* sub_607264C8
 * address: 0x607264C8   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607264C8(int a1, unsigned __int16 *a2)
{
  int v4; // r11
  unsigned __int16 *v5; // r4
  _WORD *v6; // r9
  unsigned __int16 *v7; // r0
  int v8; // r8
  unsigned int v9; // r0
  unsigned __int16 *TilePtr; // r0
  _WORD *v11; // r4
  unsigned int v12; // r7
  int result; // r0

  v4 = 0xFFFF;
  v5 = a2 + 1543;
  if ( !a2[1543] )
  {
    v8 = 0xFFFF;
    v6 = a2 + 1542;
    LOWORD(v9) = 0;
LABEL_7:
    TilePtr = (unsigned __int16 *)TileLayer_getTilePtr(
                                    a1,
                                    (unsigned __int16)(16 * *v6),
                                    (unsigned __int16)(16 * v9 + 16),
                                    0);
    if ( TilePtr )
      v4 = *TilePtr;
    goto LABEL_9;
  }
  v6 = a2 + 1542;
  v7 = (unsigned __int16 *)TileLayer_getTilePtr(
                             a1,
                             (unsigned __int16)(16 * a2[1542]),
                             (unsigned __int16)(16 * a2[1543] - 16),
                             0);
  v8 = 0xFFFF;
  if ( v7 )
    v8 = *v7;
  v9 = *v5;
  if ( v9 <= 0x1FE )
    goto LABEL_7;
LABEL_9:
  v11 = a2 + 1544;
  do
  {
    do
    {
      v12 = a2[1540];
      result = ((sead__Random__getU32((void *)sead__GlobalRandom__sInstance) * (unsigned __int64)v12) >> 32)
             + (unsigned __int16)*v11;
    }
    while ( v8 == (unsigned __int16)result );
  }
  while ( v4 == (unsigned __int16)result );
  *v11 = result;
  return result;
}
