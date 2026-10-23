/* SE_BOSS_JR_CROWN_HAKERU_ref
 * address: 0x6009010C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CROWN_HAKERU_ref(CollisionActor *a1)
{
  int result; // r0

  j_ModelWrapper_updateAnims(a1[1]._.aCollider.node4.owner);
  FIELD_F32(a1, 0x7C) = FIELD_F32(a1, 0x64) + FIELD_F32(a1, 0x7C);
  CollisionActor__handleSpeed(a1);
  sub_608134C8(&a1[1].collisionMgr[2764], "SE_BOSS_JR_CROWN_HAKERU", 0);
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  ((void (__fastcall *)(CollisionActor *))loc_601005C0)(a1);
  result = dword_60CC6484;
  if ( FIELD_F32(a1, 0x70) > (float)(FIELD_F32(dword_60CC6484, 220) + 64.0) )
    return (*(int (__fastcall **)(CollisionActor *, void *))(FIELD_U32(a1, 0x0) + 192))(a1, &unk_60C822E0);
  return result;
}
