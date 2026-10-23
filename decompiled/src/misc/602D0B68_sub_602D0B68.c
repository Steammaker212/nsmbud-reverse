/* sub_602D0B68
 * address: 0x602D0B68   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D0B68(int a1, int a2, int a3)
{
  float v4; // r0
  float v5; // r1
  StageActor *v7; // r5
  _BOOL4 v8; // r8
  char playerId; // r9
  char v10; // r0
  float v12[11]; // [sp+4h] [bp-2Ch] BYREF

  v4 = FIELD_F32(a2, 84);
  v5 = FIELD_F32(a2, 88);
  v12[0] = v4;
  v12[1] = v5;
  v12[2] = 0.0;
  sub_602A38A4(a1, v12);
  v7 = *(StageActor **)(a3 + 64);
  v8 = sub_6000ADDC(a1, (int)v7);
  playerId = FIELD_U8(v7, 0x54);
  SE_EMY_KAME_HIT_ref((int)v7, FIELD_U32(v7, 0x234), FIELD_U32(a1, 6292) == 2);
  sub_60000A18(v7);
  v10 = sub_602856EC((int *)(a1 + 6292), FIELD_U32(v7, 0x234));
  FIELD_U8(a1, 6710) |= 2u;
  FIELD_U8(a1, 7014) |= 2u;
  FIELD_U8(a1, 7318) |= 2u;
  FIELD_U8(a1, 7622) |= 2u;
  FIELD_U8(a1, 7926) |= 2u;
  FIELD_U8(a1, 8230) |= 2u;
  FIELD_U8(a1, 8534) |= 2u;
  FIELD_U8(a1, 8838) |= 2u;
  FIELD_U8(a1, 9142) |= 2u;
  FIELD_U8(a1, 9446) |= 2u;
  sub_602A6024(a1, v8, playerId, v10);
  return 1;
}
