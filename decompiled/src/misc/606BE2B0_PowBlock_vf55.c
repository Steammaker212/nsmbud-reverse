/* PowBlock_vf55
 * address: 0x606BE2B0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall PowBlock_vf55(CollisionMgr *a1)
{
  CollisionMgr *v1; // r4
  CollisionMgr_Sensor v2; // [sp+0h] [bp-18h] BYREF

  v1 = a1;
  sub_605C9DD8(a1);
  *(_DWORD *)&FIELD_U32(v1, 0x4)[324] = 9;
  v1 = (CollisionMgr *)((char *)v1 + 648);
  CollisionMgr_setSensor(v1, &stru_60B0888C, 0);
  v2.b = 13.0;
  v2.a = 4.0;
  v2.c = -8.0;
  CollisionMgr_setSensor(v1, &v2, 1);
}
