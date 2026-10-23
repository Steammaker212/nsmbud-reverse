/* sub_6017BBCC
 * address: 0x6017BBCC   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_6017BBCC(__int64 result)
{
  int v1; // r2
  int v2; // r12
  int v3; // r3
  _DWORD *v4; // r2
  int v5; // r5
  _BYTE **v6; // r3
  int v7; // r6
  int v8; // r7
  _BYTE **v9; // r2
  _BYTE *v10; // r4

  v1 = result + 564;
  v2 = 256;
  FIELD_U32(result, 28) = 0;
  FIELD_U32(result, 32) = 0;
  FIELD_U32(result, 36) = 0;
  FIELD_U32(result, 40) = 0;
  do
  {
    --v2;
    **(_BYTE **)(v1 - 516) = 0;
    **(_BYTE **)(v1 - 496) = 0;
    **(_BYTE **)(v1 - 416) = 0;
    **(_BYTE **)(v1 - 476) = 0;
    **(_BYTE **)(v1 - 396) = 0;
    **(_BYTE **)(v1 - 456) = 0;
    **(_BYTE **)(v1 - 376) = 0;
    **(_BYTE **)(v1 - 436) = 0;
    **(_BYTE **)(v1 - 356) = 0;
    **(_BYTE **)(v1 - 336) = 0;
    **(_BYTE **)(v1 + 48) = 0;
    **(_BYTE **)(v1 - 312) = 0;
    **(_BYTE **)(v1 + 72) = 0;
    **(_BYTE **)(v1 - 288) = 0;
    **(_BYTE **)(v1 + 96) = 0;
    **(_BYTE **)(v1 - 264) = 0;
    **(_BYTE **)(v1 + 120) = 0;
    **(_BYTE **)(v1 - 240) = 0;
    **(_BYTE **)(v1 + 144) = 0;
    **(_BYTE **)(v1 - 216) = 0;
    **(_BYTE **)(v1 + 168) = 0;
    **(_BYTE **)(v1 - 192) = 0;
    **(_BYTE **)(v1 + 192) = 0;
    **(_BYTE **)(v1 - 168) = 0;
    **(_BYTE **)(v1 + 216) = 0;
    **(_BYTE **)(v1 - 144) = 0;
    **(_BYTE **)(v1 + 240) = 0;
    **(_BYTE **)(v1 - 120) = 0;
    **(_BYTE **)(v1 + 264) = 0;
    **(_BYTE **)(v1 - 96) = 0;
    **(_BYTE **)(v1 + 288) = 0;
    **(_BYTE **)(v1 - 72) = 0;
    **(_BYTE **)(v1 + 312) = 0;
    **(_BYTE **)(v1 - 48) = 0;
    **(_BYTE **)(v1 + 336) = 0;
    **(_BYTE **)(v1 - 24) = 0;
    **(_BYTE **)(v1 + 360) = 0;
    **(_BYTE **)v1 = 0;
    **(_BYTE **)(v1 + 384) = 0;
    **(_BYTE **)(v1 + 24) = 0;
    **(_BYTE **)(v1 + 408) = 0;
    **(_BYTE **)(v1 + 432) = 0;
    **(_BYTE **)(v1 + 480) = 0;
    FIELD_U32(v1, 524) = 0;
    FIELD_U32(v1, 532) = 0;
    FIELD_U32(v1, 540) = 0;
    **(_BYTE **)(v1 + 456) = 0;
    **(_BYTE **)(v1 + 504) = 0;
    FIELD_U32(v1, 528) = 0;
    FIELD_U32(v1, 536) = 0;
    FIELD_U16(v1, 572) = 0;
    FIELD_U32(v1, 556) = 0;
    FIELD_U32(v1, 560) = 0;
    FIELD_U32(v1, 564) = 0;
    FIELD_U32(v1, 568) = 0;
    FIELD_U32(v1, 552) = 0;
    FIELD_U32(v1, 548) = 0;
    FIELD_U32(v1, 544) = 0;
    v1 += 1096;
  }
  while ( v2 );
  WORD2(result) = 18504;
  v3 = 256;
  HIWORD(result) = 4;
  v4 = (_DWORD *)(result + HIDWORD(result));
  HIDWORD(result) = 0;
  do
  {
    --v3;
    *(_BYTE *)*(v4 - 6) = 0;
    *(v4 - 1) = -1;
    *v4 = 0;
    v4 += 8;
  }
  while ( v3 );
  v5 = 0;
  v6 = (_BYTE **)(result + 288860);
  do
  {
    v7 = result + 828 * v5;
    v8 = 40;
    **(_BYTE **)(v7 + 288816) = 0;
    v9 = v6;
    do
    {
      v8 -= 2;
      **(v9 - 5) = 0;
      v10 = *v9;
      v9 += 10;
      *v10 = 0;
    }
    while ( v8 );
    ++v5;
    v6 += 207;
    FIELD_U32(v7, 289636) = 0;
  }
  while ( v5 != 128 );
  return result;
}
