/* sub_6008386C
 * address: 0x6008386C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008386C(int a1)
{
  float v2; // r1
  int v3; // r0
  int v4; // r1
  float v5; // s0
  float v6; // s2
  int result; // r0
  Vec3 v8; // [sp+4h] [bp-1Ch] BYREF

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    if ( FIELD_F32(a1, 124) < FIELD_F32(a1, 100) )
    {
      v2 = FIELD_F32(a1, 112);
      v8.x = FIELD_F32(a1, 108);
      v8.y = v2;
      v8.z = 4500.0;
      EffectData_create(1080, &v8, 0, 0);
    }
    FIELD_U32(a1, 124) = 0;
  }
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1);
  sub_600CEB84(a1, v3);
  v4 = FIELD_U32(a1, 7244);
  if ( v4 )
  {
    v5 = FIELD_F32(v4, 108);
    v6 = FIELD_F32(a1, 108);
    result = 1;
    if ( v6 < v5 )
    {
      result = 0;
      if ( v6 > v5 )
        result = 3;
    }
  }
  else
  {
    result = 3;
  }
  FIELD_U32(a1, 80) = result;
  if ( FIELD_F32(a1, 120) == 0.0 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81B6C);
  return result;
}
