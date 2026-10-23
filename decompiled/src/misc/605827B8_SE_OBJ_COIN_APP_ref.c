/* SE_OBJ_COIN_APP_ref
 * address: 0x605827B8   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_COIN_APP_ref(int a1)
{
  int result; // r0
  int i; // r8
  int v4; // r11
  int v5; // r0
  int v6; // r0
  float v7; // r1
  int v8; // r6
  int v9; // r2
  int v10; // r3
  int v11; // r7
  int v12; // r6
  bool v13; // zf
  int v14; // r6
  Vec2 v15; // [sp+4h] [bp-34h] BYREF
  Vec3 position; // [sp+Ch] [bp-2Ch] BYREF

  result = FIELD_U32(dword_60C995D0, 32);
  if ( !result )
  {
    for ( i = 0; i != 6144; i += 24 )
    {
      v4 = a1 + i;
      v5 = *(_DWORD *)(a1 + i + 28);
      if ( v5 )
      {
        v6 = v5 - 1;
        FIELD_U32(v4, 28) = v6;
        if ( !v6 )
        {
          if ( FIELD_U32(v4, 32) )
          {
            FIELD_U8(v4, 36) = 1;
          }
          else
          {
            TileMgr_setTile(
              TileMgr_instance,
              (unsigned int)FIELD_F32(v4, 16),
              (unsigned int)(float)-FIELD_F32(v4, 20),
              FIELD_U8(v4, 24),
              4);
            v7 = FIELD_F32(v4, 20);
            v8 = Global_BasicSoundActor2;
            position.x = FIELD_F32(v4, 16);
            position.y = v7;
            mapPositionToScreen(&v15, &position);
            BasicSoundActor2_play(v8, "SE_OBJ_COIN_APP", &v15.x, 0);
            FIELD_U8(v4, 36) = 0;
          }
        }
      }
    }
    v9 = 0;
    v10 = 27686;
    v11 = 27680;
    result = a1 + 20508;
    do
    {
      if ( *(_BYTE *)(a1 + 20519 + v9) )
      {
        v12 = *(_DWORD *)(result + v9);
        if ( v12 )
          *(_DWORD *)(result + v9) = v12 - 1;
      }
      v13 = *(_BYTE *)(a1 + v10) == 0;
      if ( *(_BYTE *)(a1 + v10) )
        v13 = *(_BYTE *)(a1 + v10 - 2) == 0;
      if ( !v13 )
      {
        v14 = *(_DWORD *)(a1 + v11);
        if ( v14 )
          *(_DWORD *)(a1 + v11) = v14 - 1;
      }
      v9 += 28;
      v11 += 24;
      v10 += 24;
    }
    while ( v9 != 7168 );
  }
  return result;
}
