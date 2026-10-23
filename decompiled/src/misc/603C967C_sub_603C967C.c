/* sub_603C967C
 * address: 0x603C967C   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C967C(int a1, int a2, int a3)
{
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1

  Enemy__ctor((Enemy *)a1, (ActorBuildInfo *)a2);
  *(_DWORD *)a1 = off_60BF7364;
  FIELD_U32(a1, 6300) = a3;
  FIELD_U32(a1, 6304) = LoadResource(ResourceMgrRelated_instance, &byte_60C98AA0[8 * a3 + 48]);
  FIELD_U32(a1, 6328) = 0;
  FIELD_U32(a1, 6324) = 0;
  FIELD_U32(a1, 6320) = 0;
  FIELD_U32(a1, 6316) = 0;
  FIELD_U32(a1, 6312) = 0;
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6332) = &ActorScaler_vtable;
  FIELD_U32(a1, 6336) = 1065353216;
  FIELD_U32(a1, 6340) = 1065353216;
  FIELD_U32(a1, 6344) = 1065353216;
  FIELD_U32(a1, 6348) = 1065353216;
  FIELD_U32(a1, 6352) = 0;
  FIELD_U32(a1, 6356) = 0;
  FIELD_U32(a1, 6360) = a1;
  sub_601531B4((CollisionMgr *)(a1 + 6368));
  FIELD_U32(a1, 11720) = 0;
  v6 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 11724) = v6 & 0xF;
  FIELD_U8(a1, 11728) = (v6 & 0xF000) != 0;
  FIELD_U32(a1, 11732) = (v6 >> 8) & 1;
  FIELD_U32(a1, 11736) = 0;
  v7 = FIELD_U32(a2, 16);
  v8 = FIELD_U32(a2, 20);
  FIELD_U32(a1, 11748) = FIELD_U32(a2, 24);
  FIELD_U32(a1, 11744) = v8;
  FIELD_U32(a1, 11740) = v7;
  FIELD_U32(a1, 11756) = 0;
  FIELD_U32(a1, 11752) = 0;
  FIELD_U32(a1, 11760) = 0;
  FIELD_U32(a1, 11764) = 1065353216;
  FIELD_U8(a1, 11768) = 0;
  FIELD_U32(a1, 11772) = 0;
  sub_602A8564((_DWORD *)(a1 + 11776), FIELD_U32(a1, 8));
  sub_602A40A0((_DWORD *)(a1 + 11812), FIELD_U32(a1, 8));
  FIELD_U32(a1, 11848) = 1065353216;
  FIELD_U32(a1, 11864) = 0;
  FIELD_U32(a1, 11860) = 0;
  FIELD_U32(a1, 11856) = 0;
  FIELD_U32(a1, 11852) = 0;
  FIELD_U32(a1, 11868) = -1;
  FIELD_U32(a1, 11872) = -1;
  FIELD_U32(a1, 11876) = -1;
  FIELD_U32(a1, 11880) = 0;
  FIELD_U32(a1, 11884) = 0;
  FIELD_U32(a1, 11888) = 0;
  FIELD_U32(a1, 11896) = 0;
  FIELD_U32(a1, 11892) = 0;
  FIELD_U32(a1, 11900) = off_60BF7634;
  FIELD_U32(a1, 11908) = 0;
  FIELD_U32(a1, 11904) = 0;
  FIELD_U32(a1, 11924) = 0;
  FIELD_U32(a1, 11920) = 0;
  FIELD_U32(a1, 11916) = 0;
  FIELD_U32(a1, 11912) = 0;
  FIELD_U32(a1, 11928) = 1;
  FIELD_U32(a1, 11960) = 0;
  FIELD_U32(a1, 11956) = 0;
  FIELD_U32(a1, 11952) = 0;
  FIELD_U32(a1, 11948) = 0;
  FIELD_U32(a1, 11944) = 0;
  FIELD_U32(a1, 11940) = 0;
  FIELD_U32(a1, 11936) = 0;
  FIELD_U32(a1, 11932) = 0;
  ActorCollisionMgr_ctor((CollisionMgr *)(a1 + 11968));
  FIELD_U32(a1, 17320) = 0;
  FIELD_U32(a1, 17324) = 0;
  FIELD_U32(a1, 17328) = 0;
  FIELD_U32(a1, 17332) = 1;
  FIELD_U32(a1, 17336) = 1065353216;
  FIELD_U32(a1, 17340) = 1065353216;
  RectCollider_ctor((RectCollider *)(a1 + 17344));
  FIELD_U32(a1, 17344) = off_60BC30D8;
  FIELD_U8(a1, 18000) = 0;
  FIELD_U32(a1, 11752) = 0;
  FIELD_U32(a1, 11756) = 0;
  return a1;
}
