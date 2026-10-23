/* sub_60711A78
 * address: 0x60711A78   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60711A78(int a1)
{
  int v2; // r3
  int v3; // r1
  int v4; // r0
  int v5; // r0
  _BYTE *v7; // r4

  sub_60711B4C(a1);
  v2 = 0;
  FIELD_U32(a1, 24) = -973078528;
  FIELD_U32(a1, 28) = -973078528;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 5152) = -973078528;
  v3 = a1 + 5160;
  while ( 1 )
  {
    v5 = FIELD_U32(a1, 24);
    *(_DWORD *)(a1 + v2 + 36) = 0;
    *(_DWORD *)(v3 + v2 - 4) = v5;
    if ( v2 == 5112 )
      break;
    v4 = FIELD_U32(a1, 24);
    *(_DWORD *)(a1 + v2 + 40) = 0;
    *(_DWORD *)(v3 + v2) = v4;
    v2 += 8;
  }
  memset((void *)(a1 + 13952), 0, 0x64u);
  sub_60711D18((_DWORD *)a1);
  FIELD_U8(a1, 34624) = 0;
  FIELD_U8(a1, 35448) = 0;
  FIELD_U8(a1, 37088) = 0;
  FIELD_U8(a1, 40360) = 0;
  FIELD_U8(a1, 41184) = 0;
  FIELD_U8(a1, 41464) = 0;
  FIELD_U8(a1, 44736) = 0;
  FIELD_U8(a1, 0xAFD8) = 0;
  v7 = (_BYTE *)(a1 + 0xAFD8);
  v7[3] = 0;
  v7[2] = 0;
  v7[1] = 0;
  v7[4] = 0;
  return 0xAFD8;
}
