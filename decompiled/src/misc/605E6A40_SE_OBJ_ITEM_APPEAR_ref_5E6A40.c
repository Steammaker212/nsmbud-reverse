/* SE_OBJ_ITEM_APPEAR_ref_5E6A40
 * address: 0x605E6A40   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ITEM_APPEAR_ref_5E6A40(int a1)
{
  int v2; // r5
  int v3; // r5
  int v4; // r6
  float v5; // r1
  int v6; // r5
  Vec2 v8; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  if ( FIELD_U32(a1, 6252) == 2 )
  {
    v2 = 0;
    FIELD_U32(a1, 6256) = 10;
    cs_item_ref((int *)(a1 + 6100), 0, 0, 1.0);
  }
  else
  {
    v2 = 1;
    cs_item_ref((int *)(a1 + 6100), 1, 1, 1.0);
    FIELD_U32(a1, 6256) = 13;
  }
  FIELD_U32(a1, 6260) = v2;
  v3 = dword_60CB1BE4;
  v4 = sub_605E9050(dword_60CB1BE4, FIELD_U32(a1, 6248));
  if ( v4 >= 1 )
  {
    do
    {
      ((void (__fastcall *)(int, _DWORD))loc_605E90AC)(v3, FIELD_U32(a1, 6248));
      --v4;
    }
    while ( v4 );
  }
  v5 = FIELD_F32(a1, 112);
  v6 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v5;
  mapPositionToScreen(&v8, &position);
  return BasicSoundActor2_play(v6, "SE_OBJ_ITEM_APPEAR", &v8.x, 0);
}
