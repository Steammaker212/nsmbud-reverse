/* sub_60303B40
 * address: 0x60303B40   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60303B40(int a1, int a2, int a3)
{
  StageActor *v3; // r7
  _BOOL4 v6; // r8
  float v7; // r1
  unsigned int playerId; // r6
  char v9; // r3
  float v11[9]; // [sp+4h] [bp-24h] BYREF

  v3 = *(StageActor **)(a3 + 64);
  v6 = sub_6000ADDC(a1, (int)v3);
  v7 = FIELD_F32(a2, 88);
  playerId = FIELD_U8(v3, 0x54);
  v11[0] = FIELD_F32(a2, 84);
  v11[1] = v7;
  v11[2] = 0.0;
  sub_602A38A4(a1, v11);
  v9 = -1;
  if ( playerId <= 3 )
  {
    SE_EMY_KAME_HIT_ref((int)v3, FIELD_U32(v3, 0x234), 0);
    sub_60000A18(v3);
    v9 = sub_602856EC((int *)(a1 + 6292), FIELD_U32(v3, 0x234));
  }
  sub_602A6024(a1, v6, playerId, v9);
  return 1;
}
