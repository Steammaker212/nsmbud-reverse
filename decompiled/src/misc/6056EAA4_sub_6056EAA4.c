/* sub_6056EAA4
 * address: 0x6056EAA4   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6056EAA4(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r4
  float v6; // t1
  float v7; // r1
  float v8; // s0
  Vec2 position; // [sp+8h] [bp-20h] BYREF

  v2 = 0;
  v3 = (FIELD_U32(a1, 20) >> 8) & 1;
  FIELD_U32(a1, 6852) = v3;
  FIELD_U8(a1, 87) = byte_60B0536C[v3];
  if ( sub_605635AC(a1, 0, 1) == 1 )
  {
    v2 = 1;
    v4 = dword_60AF4BD0[HIWORD(FIELD_U32(a1, 24)) & 7];
    FIELD_U32(a1, 7532) = v4;
    if ( (FIELD_U8(a1, 22) & 0xF) != 0 )
      FIELD_U32(a1, 7532) = v4 ^ 0x80000000;
    FIELD_U32(a1, 6872) = 1;
    FIELD_U32(a1, 7352) = 1097859072;
    FIELD_U32(a1, 7356) = -1050673152;
    FIELD_U32(a1, 7360) = 1096810496;
    FIELD_U32(a1, 7364) = -1056964608;
    v6 = FIELD_F32(a1, 108);
    v5 = a1 + 108;
    v7 = FIELD_F32(v5, 4);
    position.x = v6;
    position.y = v7;
    LineFollower_init((LineFollower *)(v5 + 7280), &position, *(unsigned __int8 *)(v5 - 22), 0, 0);
    FIELD_U32(v5, 7324) = 1082130432;
    FIELD_U32(v5, 7328) = 0;
    FIELD_U32(v5, 7332) = -1065353216;
    FIELD_U32(v5, 7336) = 0;
    ((void (__fastcall *)(int, int))LineFollower_start)(v5 + 7280, (*(_DWORD *)(v5 - 88) >> 4) & 1);
    v8 = FIELD_F32(v5, 7384);
    *(_DWORD *)v5 = FIELD_U32(v5, 7380);
    FIELD_F32(v5, 4) = (float)(v8 + -5.0) + FIELD_F32(v5, 6688);
    FIELD_U32(v5, 392) = 1115684864;
    FIELD_U32(v5, 396) = 1115684864;
    FIELD_U32(v5, 400) = 1107296256;
    FIELD_U32(v5, 404) = 1107296256;
    FIELD_U32(v5, 408) = 1149239296;
    FIELD_U32(v5, 412) = 1149239296;
    FIELD_U32(v5, 416) = 1149239296;
    FIELD_U32(v5, 420) = 1149239296;
    position.x = 64.0;
    position.y = 64.0;
    sub_6069AFA0(v5 + 7132, v5, v5 + 384, &position, v5 + 6012);
  }
  return v2;
}
