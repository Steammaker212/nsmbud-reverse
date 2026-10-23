/* ParaGoomba__vf270
 * address: 0x60362F2C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033CDA4
// 
// Overridden by: None
int __fastcall ParaGoomba__vf270(int a1)
{
  unsigned __int8 *v2; // r7
  void *Resource; // r0
  ModelWrapper *v4; // r0
  void *v5; // r0
  int v6; // r1
  char v7; // r1
  char v9[4]; // [sp+4h] [bp-24h] BYREF
  _DWORD v10[8]; // [sp+8h] [bp-20h] BYREF

  FIELD_U8(a1, 6706) = 0;
  v2 = (unsigned __int8 *)(a1 + 6706);
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, dword_60C9594C);
  FIELD_U32(a1, 6300) = Resource;
  v4 = sub_6033CF5C(Resource, (sead__SafeString *)&dword_60C9594C[2 * *v2], FIELD_U8(a1, 6844));
  FIELD_U32(a1, 6304) = v4;
  v5 = *FIELD_U32(v4, 0x10).animations;
  FIELD_U32(a1, 6308) = v5;
  v6 = FIELD_U32(a1, 6300);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "walk";
  TexAnim_play(v5, v6, v10);
  wing_kuri_ref_2(a1);
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B00214, &stru_60B00220, &stru_60B0022C);
  FIELD_U32(a1, 3200) |= 0x20000u;
  FIELD_U32(a1, 6492) = a1 + 6820;
  FIELD_U32(a1, 6504) = 1092616192;
  FIELD_U32(a1, 6508) = 1094713344;
  FIELD_U32(a1, 6496) = 0;
  FIELD_U32(a1, 6500) = 1094713344;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  v7 = 2;
  if ( (FIELD_U32(a1, 20) & 0x10000) == 0 )
    v7 = 1;
  v9[0] = v7;
  FIELD_F32(a1, 116) = sub_60022B80(v9);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_U32(a1, 500) = 1098907648;
  FIELD_U32(a1, 504) = 1098907648;
  FIELD_U32(a1, 620) = a1 + 6716;
  FIELD_U32(a1, 6732) = 4;
  FIELD_U32(a1, 624) = a1 + 6752;
  FIELD_U32(a1, 6780) = 1;
  FIELD_U32(a1, 6244) = 1;
  FIELD_U8(a1, 6056) = 1;
  jnt_wing_ref(a1);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C958F0);
}
