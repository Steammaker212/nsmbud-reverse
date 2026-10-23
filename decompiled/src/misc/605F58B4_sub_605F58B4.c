/* sub_605F58B4
 * address: 0x605F58B4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F58B4(int a1)
{
  int v2; // r5
  int v3; // r0
  float v4; // r1
  int v5; // r0
  Vec2 position; // [sp+8h] [bp-18h] BYREF

  v2 = 2;
  if ( sub_605F43EC(a1, 0) == 1 )
  {
    if ( Actor__getProfileId((Actor *)a1) == 428 )
      FIELD_U8(a1, 534) = 0;
    v3 = dword_60AF4BD0[HIWORD(FIELD_U32(a1, 24)) & 7];
    FIELD_U32(a1, 6332) = v3;
    if ( (FIELD_U8(a1, 22) & 1) != 0 )
      FIELD_U32(a1, 6332) = v3 ^ 0x80000000;
    v4 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v4;
    LineFollower_init((LineFollower *)(a1 + 6188), &position, FIELD_U8(a1, 86), 0, 0);
    ((void (__fastcall *)(int, _DWORD))LineFollower_start)(a1 + 6188, 0);
    v2 = 1;
    v5 = FIELD_U32(a1, 6292);
    FIELD_U32(a1, 108) = FIELD_U32(a1, 6288);
    FIELD_U32(a1, 112) = v5;
    FIELD_U32(a1, 6148) = 1;
    FIELD_U32(a1, 500) = 1140850688;
    FIELD_U32(a1, 504) = 1140850688;
    FIELD_U32(a1, 516) = 0;
    FIELD_U32(a1, 520) = 0;
    FIELD_U32(a1, 524) = 1149239296;
    FIELD_U32(a1, 528) = 1149239296;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB21E0);
    StarCoinBase_updateModel((ModelWrapper **)a1);
  }
  return v2;
}
