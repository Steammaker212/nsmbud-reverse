/* sub_607265C8
 * address: 0x607265C8   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607265C8(int a1, unsigned __int16 *a2)
{
  int v4; // r10
  _WORD *v5; // r6
  _WORD *v6; // r4
  unsigned __int16 *v7; // r0
  int v8; // r9
  int v9; // r8
  unsigned int v10; // r0
  unsigned __int16 *TilePtr; // r0
  unsigned __int16 *v12; // r0
  int v13; // r11
  unsigned int v14; // r0
  unsigned __int16 *v15; // r0
  unsigned __int16 *v16; // r7
  _WORD *v17; // r5
  unsigned int v18; // r4
  int result; // r0
  bool v20; // zf

  v4 = 0xFFFF;
  v5 = a2 + 1543;
  if ( !a2[1543] )
  {
    v8 = 0xFFFF;
    v6 = a2 + 1542;
    LOWORD(v10) = 0;
LABEL_7:
    TilePtr = (unsigned __int16 *)TileLayer_getTilePtr(
                                    a1,
                                    (unsigned __int16)(16 * *v6),
                                    (unsigned __int16)(16 * v10 + 16),
                                    0);
    if ( TilePtr )
      v9 = *TilePtr;
    else
      v9 = 0xFFFF;
    goto LABEL_10;
  }
  v6 = a2 + 1542;
  v7 = (unsigned __int16 *)TileLayer_getTilePtr(
                             a1,
                             (unsigned __int16)(16 * a2[1542]),
                             (unsigned __int16)(16 * a2[1543] - 16),
                             0);
  v8 = 0xFFFF;
  v9 = 0xFFFF;
  if ( v7 )
    v8 = *v7;
  v10 = (unsigned __int16)*v5;
  if ( v10 <= 0x1FE )
    goto LABEL_7;
LABEL_10:
  if ( !*v6 )
  {
    LOWORD(v14) = 0;
    v13 = 0xFFFF;
LABEL_16:
    v15 = (unsigned __int16 *)TileLayer_getTilePtr(
                                a1,
                                (unsigned __int16)(16 * v14 + 16),
                                (unsigned __int16)(16 * *v5),
                                0);
    if ( v15 )
      v4 = *v15;
    goto LABEL_18;
  }
  v12 = (unsigned __int16 *)TileLayer_getTilePtr(a1, (unsigned __int16)(16 * *v6 - 16), (unsigned __int16)(16 * *v5), 0);
  v13 = 0xFFFF;
  if ( v12 )
    v13 = *v12;
  v14 = (unsigned __int16)*v6;
  if ( v14 <= 0x3FE )
    goto LABEL_16;
LABEL_18:
  v16 = a2 + 1540;
  v17 = a2 + 1544;
  do
  {
    do
    {
      do
      {
        v18 = *v16;
        result = ((sead__Random__getU32((void *)sead__GlobalRandom__sInstance) * (unsigned __int64)v18) >> 32)
               + (unsigned __int16)*v17;
      }
      while ( v4 == (unsigned __int16)result );
    }
    while ( v13 == (unsigned __int16)result );
    v20 = v8 == (unsigned __int16)result;
    if ( v8 != (unsigned __int16)result )
      v20 = v9 == (unsigned __int16)result;
  }
  while ( v20 );
  *v17 = result;
  return result;
}
