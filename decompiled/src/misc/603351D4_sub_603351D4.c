/* sub_603351D4
 * address: 0x603351D4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603351D4(int a1)
{
  float v2; // r1
  unsigned int v3; // r1
  int v4; // r0
  Vec3 v6; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  v6.x = FIELD_F32(a1, 108);
  v6.y = v2;
  v6.z = 4500.0;
  EffectData_create(966, &v6, 0, 0);
  v3 = FIELD_U32(a1, 6592);
  if ( v3 )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( v4 )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v4 + 192))(v4, &dword_60C94138);
  }
  FIELD_U8(a1, 19) = 1;
  return 1;
}
