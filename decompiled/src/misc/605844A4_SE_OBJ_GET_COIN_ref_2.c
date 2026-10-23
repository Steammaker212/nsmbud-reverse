/* SE_OBJ_GET_COIN_ref_2
 * address: 0x605844A4   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_GET_COIN_ref_2(int result, int a2, float *a3, unsigned int a4, int a5)
{
  int v7; // r8
  float v8; // r0
  float v9; // r1
  int v10; // r7
  int v11; // r3
  float v12; // r1
  int v13; // r0
  Vec3 v14; // [sp+4h] [bp-3Ch] BYREF
  Vec2 out; // [sp+10h] [bp-30h] BYREF
  Vec3 position; // [sp+18h] [bp-28h] BYREF

  v7 = result;
  if ( BYTE2(a5) != 1 )
  {
    if ( (unsigned __int8)(FIELD_U8(a2, 533) - 1) <= 1u )
      sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6551));
    if ( a4 != -1 )
    {
      SE_OBJ_GET_COIN_ref_2_helper(dword_60C9A1F0, BYTE2(a5));
      if ( FIELD_U8(LevelInfo_instance, 17) == 40 )
      {
        ++FIELD_U16(dword_60C99DD4, 1382);
      }
      else
      {
        SE_SYS_100COIN_ONE_UP_ref(dword_60C99DD4, a4, 1);
        sub_603FFC8C((int *)(dword_60C99DD4 + 852), 1);
        sub_603FBA2C(dword_60C99DD4, 100, a4);
      }
      v8 = *a3;
      v9 = a3[1];
      LOBYTE(v14.z) = 0;
      LODWORD(v14.x) = 1 << a4;
      position.x = v8;
      position.y = v9;
      v14.y = *(float *)&aFf_0[4];
      v10 = Global_BasicSoundActor2;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v10, "SE_OBJ_GET_COIN", &out.x, (int)&v14);
      if ( (a5 & 0xFF000000) == 0 )
      {
        position.x = *a3;
        position.y = a3[1];
        sub_60584678(v7, &position, BYTE2(a5), v11);
      }
    }
    v12 = a3[1];
    v14.x = *a3;
    v14.y = v12;
    v14.z = 8.0;
    if ( BYTE2(a5) == 2 )
      v13 = 78;
    else
      v13 = 76;
    EffectData_create(v13, &v14, 0, 0);
    return EffectData_create(80, &v14, 0, 0);
  }
  return result;
}
