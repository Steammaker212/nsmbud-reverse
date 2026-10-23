/* kurage_ref
 * address: 0x602F8DB0   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall kurage_ref(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r1
  _DWORD v9[8]; // [sp+0h] [bp-20h] BYREF

  Enemy__ctor((Enemy *)a1, (ActorBuildInfo *)a2);
  *(_DWORD *)a1 = off_60BE79B8;
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "kurage";
  FIELD_U32(a1, 6300) = LoadResource(ResourceMgrRelated_instance, v9);
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6312) = 0;
  FIELD_U32(a1, 6316) = 7;
  LightMask__ctor((RevealMaskRelated *)(a1 + 6320));
  FIELD_U32(a1, 6360) = 1114636288;
  FIELD_U32(a1, 6364) = 0;
  LightSource__ctor((LightSource *)(a1 + 6368));
  FIELD_U32(a1, 6440) = 0;
  FIELD_U32(a1, 6444) = 0;
  FIELD_U32(a1, 6460) = 0;
  FIELD_U32(a1, 6456) = 0;
  FIELD_U32(a1, 6452) = 0;
  FIELD_U32(a1, 6448) = 0;
  FIELD_U8(a1, 6464) = 1;
  FIELD_U8(a1, 6465) = 0;
  FIELD_U32(a1, 6468) = 0;
  v4 = FIELD_U32(a2, 16);
  v5 = FIELD_U32(a2, 20);
  FIELD_U32(a1, 6480) = FIELD_U32(a2, 24);
  FIELD_U32(a1, 6476) = v5;
  FIELD_U32(a1, 6472) = v4;
  FIELD_U32(a1, 6484) = -1;
  FIELD_U16(a1, 6500) = 0;
  FIELD_U32(a1, 6496) = 0;
  FIELD_U32(a1, 6492) = 0;
  FIELD_U32(a1, 6488) = 0;
  v6 = FIELD_U32(a2, 16);
  v7 = FIELD_U32(a2, 20);
  FIELD_U32(a1, 6512) = FIELD_U32(a2, 24);
  FIELD_U32(a1, 6508) = v7;
  FIELD_U32(a1, 6504) = v6;
  FIELD_U32(a1, 6516) = 1065353216;
  FIELD_U32(a1, 6520) = (200 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32;
  FIELD_U32(a1, 6536) = 0;
  FIELD_U32(a1, 6532) = 0;
  FIELD_U32(a1, 6528) = 0;
  FIELD_U32(a1, 6524) = 0;
  sub_601531B4((CollisionMgr *)(a1 + 6544));
  FIELD_U32(a1, 11896) = off_60BE7C60;
  FIELD_U8(a1, 11900) = 0;
  FIELD_U32(a1, 11904) = &ActorScaler_vtable;
  FIELD_U32(a1, 11908) = 1065353216;
  FIELD_U32(a1, 11912) = 1065353216;
  FIELD_U32(a1, 11916) = 1065353216;
  FIELD_U32(a1, 11920) = 1065353216;
  FIELD_U32(a1, 11924) = 0;
  FIELD_U32(a1, 11928) = 0;
  FIELD_U32(a1, 11932) = a1;
  return a1;
}
