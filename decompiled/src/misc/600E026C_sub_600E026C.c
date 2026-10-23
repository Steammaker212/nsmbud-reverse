/* sub_600E026C
 * address: 0x600E026C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E026C(int a1)
{
  float v2; // s4
  float v3; // r1
  ActorBuildInfo v5; // [sp+4h] [bp-3Ch] BYREF

  memset(&v5.settings2, 0, 40);
  v5.settings1 = 1;
  v5.parentId = FIELD_U32(a1, 8);
  v5.profile = Profile__get(0x15Fu);
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 116);
  v5.position.x = FIELD_F32(a1, 108);
  v5.position.y = v2 + (float)(12.0 * 1.2);
  v5.position.z = v3;
  v5.field_1C = FIELD_U32(a1, 80);
  v5.field_20 = FIELD_U8(a1, 86);
  FIELD_U32(a1, 8120) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v5, 0) + 2);
  return KoopalingBase__vf630((_DWORD *)a1);
}
