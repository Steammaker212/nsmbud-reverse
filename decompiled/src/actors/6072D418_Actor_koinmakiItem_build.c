/* Actor_koinmakiItem_build
 * address: 0x6072D418   size: 196   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_koinmakiItem_build(ActorBuildInfo *a1)
{
  int v2; // r4
  _DWORD v4[8]; // [sp+0h] [bp-20h] BYREF

  v2 = operator_new(0x17F0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C22260;
  FIELD_U8(v2, 6104) = 0;
  FIELD_U8(v2, 6105) = 1;
  FIELD_U8(v2, 6106) = 0;
  FIELD_U32(v2, 6108) = 1065353216;
  FIELD_U32(v2, 6112) = 0;
  FIELD_U32(v2, 6116) = 0;
  FIELD_U8(v2, 6120) = 0;
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "miniGame_mochimaki";
  FIELD_U32(v2, 6124) = LoadResource(ResourceMgrRelated_instance, v4);
  FIELD_U32(v2, 6112) = 0;
  return v2;
}
