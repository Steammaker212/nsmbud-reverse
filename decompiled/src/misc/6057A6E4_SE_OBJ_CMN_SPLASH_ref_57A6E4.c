/* SE_OBJ_CMN_SPLASH_ref_57A6E4
 * address: 0x6057A6E4   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_ref_57A6E4(int a1)
{
  int result; // r0
  _BYTE *v3; // r7
  int v4; // r5
  float v5; // r1
  int v6; // r3
  int v7; // r4
  int v8; // [sp+8h] [bp-58h] BYREF
  _BYTE v9[4]; // [sp+Ch] [bp-54h] BYREF
  float v10; // [sp+10h] [bp-50h]
  float v11; // [sp+14h] [bp-4Ch]
  int v12; // [sp+18h] [bp-48h]
  _BYTE v13[4]; // [sp+1Ch] [bp-44h] BYREF
  int v14; // [sp+20h] [bp-40h] BYREF
  int v15; // [sp+24h] [bp-3Ch]
  int v16; // [sp+28h] [bp-38h]
  Vec3 v17; // [sp+2Ch] [bp-34h] BYREF
  Vec2 out; // [sp+38h] [bp-28h] BYREF
  Vec3 position; // [sp+40h] [bp-20h] BYREF

  ((void (__fastcall *)(int *, _BYTE *, _BYTE *, int, _DWORD))physics_21893E8)(
    &v8,
    v13,
    v9,
    a1 + 108,
    FIELD_U8(a1, 86));
  v3 = (_BYTE *)(a1 + 7404);
  result = FIELD_U8(a1, 7404);
  if ( v8 == 2 )
  {
    if ( !FIELD_U8(a1, 7404) )
    {
      v14 = 0;
      v15 = 0;
      v17.x = v10;
      v17.y = v11;
      v17.z = 6500.0;
      position.x = v10;
      position.y = v11;
      v16 = v12;
      v4 = Global_BasicSoundActor2;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v4, "SE_OBJ_CMN_SPLASH", &out.x, 0);
      EffectData_create(1106, &v17, (int)&v14, 0);
      *v3 = 1;
    }
    FIELD_U8(a1, 7408) = v9[0];
    FIELD_F32(a1, 7412) = v10;
    FIELD_F32(a1, 7416) = v11;
    FIELD_U32(a1, 7420) = v12;
    return (int)sub_600038DC((Enemy *)a1);
  }
  else if ( FIELD_U8(a1, 7404) )
  {
    *v3 = 0;
    v5 = FIELD_F32(a1, 7416);
    v17.x = FIELD_F32(a1, 7412);
    v17.y = v5;
    v17.z = 6500.0;
    v6 = FIELD_U32(a1, 7420);
    v14 = 0;
    v15 = 0;
    position.x = v17.x;
    position.y = v5;
    v16 = v6;
    v7 = Global_BasicSoundActor2;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v7, "SE_OBJ_CMN_SPLASH", &out.x, 0);
    return EffectData_create(1106, &v17, (int)&v14, 0);
  }
  return result;
}
