/* sub_60448530
 * address: 0x60448530   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60448530(int a1, int a2, int a3)
{
  int v4; // r5
  int v5; // r0
  int v6; // r1
  __int16 v7; // r0
  int result; // r0
  int v9; // [sp+4h] [bp-14h] BYREF

  v4 = FIELD_U8(a3, 460) & 7;
  v5 = *(_DWORD *)(a1 + 28 * ((FIELD_U32(a3, 128) >> 9) & 2) + 16);
  if ( v4 != 1 )
    v4 = 0;
  v9 = v5;
  if ( v5 )
  {
    v6 = (v4 << 15) | (8 * (sub_6090FB50(&v9, 4) & 0xFFF));
    v7 = 7;
  }
  else
  {
    v6 = v4 << 15;
    v7 = 0x3FFF;
  }
  result = (unsigned __int16)(FIELD_U16(a1, 2478) & v7) | v6;
  FIELD_U16(a1, 2476) = result;
  return result;
}
