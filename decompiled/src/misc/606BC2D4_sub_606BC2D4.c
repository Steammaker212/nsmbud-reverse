/* sub_606BC2D4
 * address: 0x606BC2D4   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BC2D4(int a1)
{
  unsigned int v2; // r1
  ActiveColliderMgr *v3; // r5
  Vec3 v5[2]; // [sp+Ch] [bp-1Ch] BYREF

  FIELD_U32(a1, 620) = 0;
  sub_6040F4B8(FIELD_U32(a1, 6152), (int)&dword_60CBA770, 0, 1.0, 0.0);
  v5[0].x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v5[0].y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v5[0].z = sub_600024C4(a1);
  EffectData_create(371, v5, 0, 0);
  v2 = FIELD_U8(a1, 84);
  if ( v2 > 3 )
    sub_604005D0(AreaRumbleMgr_instance, -1, 12, 1, 12, 0);
  else
    sub_604005D0(AreaRumbleMgr_instance, v2, 12, 3, 12, 0);
  sub_603FD768(
    dword_60C99DF4,
    FIELD_U8(LevelInfo_instance, 18),
    1,
    FIELD_F32(a1, 6824),
    FIELD_F32(a1, 6828));
  sub_605CC4B0(a1, a1 + 6100, -1);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6168));
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromList3(v3, a1 + 188);
  FIELD_U32(a1, 160) = 0;
  v5[0].x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v5[0].y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v5[0].z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
  return ((int (__fastcall *)(int, Vec3 *))loc_60584DA4)(dword_60CAF15C, v5);
}
