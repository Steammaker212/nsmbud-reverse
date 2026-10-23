/* sub_600F10B4
 * address: 0x600F10B4   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600F10B4(int a1)
{
  CollisionMgr *v1; // r4
  CollisionMgr_Sensor v2; // [sp+0h] [bp-20h] BYREF

  v1 = (CollisionMgr *)(a1 + 648);
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1098907648;
  FIELD_U32(a1, 312) = 1098907648;
  FIELD_U32(a1, 316) = 1098907648;
  FIELD_U32(a1, 320) = 0;
  FIELD_U32(a1, 6844) = 1103101952;
  FIELD_U32(a1, 6848) = 1103101952;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1103101952;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF5FA4, 3);
  CollisionMgr_setSensor(v1, &stru_60AF5FB0, 2);
  CollisionMgr_setSensor(v1, &stru_60AF5FBC, 0);
  v2.b = 24.0;
  v2.a = 12.0;
  v2.c = -14.0;
  CollisionMgr_setSensor(v1, &v2, 1);
}
