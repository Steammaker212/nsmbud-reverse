/* sub_605E6DA8
 * address: 0x605E6DA8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E6DA8(int a1)
{
  float v2; // r1
  float v3; // r2
  Vec3 v5; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 116);
  v5.x = FIELD_F32(a1, 108);
  v5.y = v2;
  v5.z = v3;
  EffectData_create(dword_60B05AB0[FIELD_U32(a1, 6248)], &v5, 0, 0);
  sub_605E73FC(a1);
  FIELD_U32(a1, 6256) = 16;
  FIELD_U32(a1, 6268) = -1056964608;
  return 6268;
}
