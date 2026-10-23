/* LargeGoomba_vf174
 * address: 0x603419FC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall LargeGoomba_vf174(CollisionMgr *a1)
{
  CollisionMgr *v1; // r4

  v1 = a1;
  FIELD_U32(a1, 0x4)[531] = 0;
  (*(void (__fastcall **)(CollisionMgr *))(FIELD_U32(a1, 0x0) + 72))(a1);
  v1 = (CollisionMgr *)((char *)v1 + 648);
  CollisionMgr_setSensor(v1, 0, 3);
  CollisionMgr_setSensor(v1, 0, 2);
  CollisionMgr_setSensor(v1, 0, 0);
  CollisionMgr_setSensor(v1, 0, 1);
}
