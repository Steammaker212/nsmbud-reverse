/* PowBlock_vf52
 * address: 0x606BDFFC   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PowBlock_vf52(int a1)
{
  int result; // r0
  CollisionMgr_Sensor v3; // [sp+0h] [bp-20h] BYREF

  sub_605C9CA0(a1);
  FIELD_U32(a1, 328) = 9;
  FIELD_U32(a1, 312) = 1091567616;
  FIELD_U32(a1, 316) = 1091567616;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B08898, 0);
  v3.b = 8.0;
  v3.a = 2.0;
  v3.c = -6.0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v3, 1);
  result = FIELD_U32(a1, 3200) | 0x40800000;
  FIELD_U32(a1, 3200) = result;
  return result;
}
