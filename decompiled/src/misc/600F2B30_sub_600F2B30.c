/* sub_600F2B30
 * address: 0x600F2B30   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F2B30(CollisionActor *a1)
{
  int *v2; // r0

  if ( (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 716))(a1) == 1
    || (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 720))(a1) == 1 )
  {
    v2 = &dword_60C856E8;
  }
  else
  {
    v2 = &dword_60C856EC;
  }
  LODWORD(FIELD_U32(a1, 0x0).field_64) = *v2;
  KoopalingBase__vf564(a1);
  return j_ModelWrapper_updateAnims(*(_DWORD *)&a1[1].collisionMgr[384]);
}
