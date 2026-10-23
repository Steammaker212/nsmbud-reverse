/* sub_6025AC44
 * address: 0x6025AC44   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025AC44(int a1)
{
  int *v1; // r4
  CollisionMgr *v2; // r5
  int result; // r0
  CollisionMgr_Sensor v4; // [sp+0h] [bp-20h] BYREF

  FIELD_U8(a1, 3204) = 0;
  FIELD_U8(a1, 3200) = 0;
  v1 = (int *)(a1 + 3200);
  FIELD_U8(a1, 3207) = 0;
  FIELD_U8(a1, 3206) = 0;
  FIELD_U8(a1, 3205) = 0;
  FIELD_U8(a1, 3203) = 0;
  FIELD_U8(a1, 3202) = 0;
  FIELD_U8(a1, 3201) = 0;
  FIELD_U8(a1, 3197) = 0;
  FIELD_U8(a1, 3193) = 0;
  FIELD_U8(a1, 3189) = 0;
  FIELD_U8(a1, 3185) = 0;
  FIELD_U8(a1, 3181) = 0;
  FIELD_U8(a1, 3177) = 0;
  FIELD_U8(a1, 3196) = 0;
  FIELD_U8(a1, 3199) = 0;
  FIELD_U8(a1, 3198) = 0;
  FIELD_U8(a1, 3192) = 0;
  FIELD_U8(a1, 3195) = 0;
  FIELD_U8(a1, 3194) = 0;
  FIELD_U8(a1, 3188) = 0;
  FIELD_U8(a1, 3191) = 0;
  FIELD_U8(a1, 3190) = 0;
  FIELD_U8(a1, 3184) = 0;
  FIELD_U8(a1, 3187) = 0;
  FIELD_U8(a1, 3186) = 0;
  FIELD_U8(a1, 3180) = 0;
  FIELD_U8(a1, 3183) = 0;
  FIELD_U8(a1, 3182) = 0;
  FIELD_U8(a1, 3176) = 0;
  FIELD_U8(a1, 3179) = 0;
  FIELD_U8(a1, 3178) = 0;
  v2 = (CollisionMgr *)(a1 + 648);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFD8B4, 3);
  CollisionMgr_setSensor(v2, &stru_60AFD8C0, 2);
  CollisionMgr_setSensor(v2, &stru_60AFD8CC, 0);
  v4.b = 9.0;
  v4.a = 5.0;
  v4.c = -6.0;
  CollisionMgr_setSensor(v2, &v4, 1);
  result = *v1 | 0x20000;
  *v1 = result;
  return result;
}
