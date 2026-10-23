/* SE_OBJ_ITEM_APPEAR_ref_464028
 * address: 0x60464028   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ITEM_APPEAR_ref_464028(int a1)
{
  int v2; // r1
  float v3; // r1
  int v4; // r6
  int result; // r0
  Vec2 v6; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  FIELD_U32(a1, 132) = 1065353216;
  FIELD_U32(a1, 136) = -1056964608;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 6192) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 216))(a1);
  v2 = 8;
  if ( FIELD_U8(a1, 6805) )
    v2 = 3;
  FIELD_U32(a1, 6220) = v2;
  FIELD_U32(a1, 6244) = 4;
  FIELD_U32(a1, 6228) = 0;
  FIELD_U32(a1, 6224) = 0;
  FIELD_U32(a1, 3200) |= 0x40000000u;
  FIELD_U8(a1, 6804) = 0;
  if ( (FIELD_U8(a1, 23) & 0x20) == 0 )
  {
    v3 = FIELD_F32(a1, 112);
    v4 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&v6, &position);
    BasicSoundActor2_play(v4, "SE_OBJ_ITEM_APPEAR", &v6.x, 0);
  }
  ((void (__fastcall *)(Vec2 *, Vec3 *, int, _DWORD))checkLiquidCollisions)(
    &v6,
    &position,
    a1 + 108,
    FIELD_U8(a1, 86));
  result = LODWORD(v6.x);
  if ( LODWORD(v6.x) == 1 )
  {
    FIELD_F32(a1, 6048) = -0.0625 * 0.5;
    FIELD_F32(a1, 6040) = FIELD_F32(a1, 124) * 0.4;
    FIELD_F32(a1, 6044) = -1.5 * 0.5;
    FIELD_U8(a1, 6804) = 1;
    return 1;
  }
  return result;
}
