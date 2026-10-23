/* sub_60418774
 * address: 0x60418774   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60418774(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  __int64 v6; // d17
  __int64 v7; // d17
  __int64 v8; // d17

  sub_6041A990();
  sub_6083D9C8(a1 + 4, 2822, 2822);
  sub_6083D9D0(a1 + 4, FIELD_U32(a2, 108), FIELD_U32(a2, 108));
  sub_6083D9DC(a1 + 4, FIELD_U32(a2, 104), FIELD_U32(a2, 104));
  v4 = sub_608FBB8C(FIELD_U32(a2, 100));
  sub_6083D9E8(a1 + 4, v4);
  sub_6083D9F0(a1 + 4, FIELD_U32(a2, 96));
  sub_6083D9F8(a1 + 4, FIELD_F32(a2, 176));
  v5 = FIELD_U32(a2, 92);
  if ( (v5 & 1) != 0 )
  {
    sub_6083DA00(a1 + 4, 256);
    sub_6083DA08(a1 + 4, 0x10000);
    v5 = FIELD_U32(a2, 92);
  }
  *(_DWORD *)a1 = a2;
  FIELD_U32(a1, 48) = FIELD_U32(a2, 100);
  FIELD_U8(a1, 52) = 1;
  FIELD_U8(a1, 53) = v5 & 1;
  FIELD_U8(a1, 54) = (v5 & 2) != 0;
  FIELD_U8(a1, 55) = FIELD_U8(a2, 172);
  FIELD_U32(a1, 56) = FIELD_U32(a2, 164);
  FIELD_U32(a1, 60) = FIELD_U32(a2, 168);
  FIELD_U32(a1, 72) = FIELD_U32(a2, 112);
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 0;
  v6 = FIELD_U64(a2, 124);
  FIELD_U64(a1, 92) = FIELD_U64(a2, 116);
  FIELD_U64(a1, 100) = v6;
  v7 = FIELD_U64(a2, 140);
  FIELD_U64(a1, 108) = FIELD_U64(a2, 132);
  FIELD_U64(a1, 116) = v7;
  v8 = FIELD_U64(a2, 156);
  FIELD_U64(a1, 124) = FIELD_U64(a2, 148);
  FIELD_U64(a1, 132) = v8;
  return a1 + 124;
}
