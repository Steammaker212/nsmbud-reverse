/* sub_605CB4F4
 * address: 0x605CB4F4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605CB4F4(int a1)
{
  int v1; // r4
  CollisionMgr_Sensor v2; // [sp+0h] [bp-18h] BYREF

  v1 = a1;
  sub_605C9CD0(a1);
  FIELD_U32(v1, 328) = 9;
  v1 += 648;
  CollisionMgr_setSensor((CollisionMgr *)v1, &stru_60B057BC, 0);
  v2.b = 8.0;
  v2.a = 8.0;
  v2.c = -8.0;
  CollisionMgr_setSensor((CollisionMgr *)v1, &v2, 1);
}
