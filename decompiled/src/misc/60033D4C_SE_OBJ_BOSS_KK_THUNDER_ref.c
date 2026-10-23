/* SE_OBJ_BOSS_KK_THUNDER_ref
 * address: 0x60033D4C   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BOSS_KK_THUNDER_ref(int a1)
{
  float v2; // r1
  int v3; // r0
  const char *v4; // r1
  int v5; // r5
  int v6; // r0
  int result; // r0
  Vec2 v8; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  if ( FIELD_U32(a1, 6900) == 1 )
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v2;
    mapPositionToScreen(&v8, &position);
    v3 = a1 + 6108;
    v4 = "SE_OBJ_BOSS_KK_THUNDER_R";
  }
  else
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v2;
    mapPositionToScreen(&v8, &position);
    v3 = a1 + 6108;
    v4 = "SE_OBJ_BOSS_KK_THUNDER_L";
  }
  sub_60813574(v3, v4, &v8, 0);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v5 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v6 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(a1 + 648 + 4 * ((v6 + 18) >> 5) + 2224) & (1 << ((v6 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v5 + 4 * ((v6 + 22) >> 5) + 2224) & (1 << ((v6 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v5 + 4 * ((v6 + 28) >> 5) + 2224) & (1 << ((v6 + 28) & 0x1F))) == 0 )
  {
    FIELD_U32(a1, 120) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
  }
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) == 0 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7FD18);
    FIELD_U32(a1, 120) = 0;
    return 0;
  }
  return result;
}
