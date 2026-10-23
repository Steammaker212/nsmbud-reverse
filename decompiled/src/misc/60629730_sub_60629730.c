/* sub_60629730
 * address: 0x60629730   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60629730(int a1)
{
  int v1; // r5
  _BYTE *v2; // r11
  _BYTE *v3; // r9
  int result; // r0
  float *v5; // r7
  unsigned int v6; // r0
  int v7; // r1
  int *v8; // r8
  int *v9; // r4
  int v10; // r6
  float v11; // r1
  _BYTE *v12; // [sp+14h] [bp-44h]
  char *name; // [sp+1Ch] [bp-3Ch]
  Vec2 out; // [sp+24h] [bp-34h] BYREF
  Vec3 position; // [sp+2Ch] [bp-2Ch] BYREF

  v1 = 0;
  v12 = (_BYTE *)(a1 + 6198);
  v2 = (_BYTE *)(a1 + 6197);
  v3 = (_BYTE *)(a1 + 6196);
  do
  {
    if ( (*v3 & (unsigned __int8)(1 << v1)) != 0 )
    {
      result = Player_getActorSlotChecked(PlayerMgr_instance, v1);
      if ( result )
        result = sub_60629B8C(a1);
    }
    else
    {
      result = (unsigned __int8)*v2 & (1 << v1);
      if ( (*v2 & (unsigned __int8)(1 << v1)) != 0 )
      {
        result = Player_getActorSlotChecked(PlayerMgr_instance, v1);
        v5 = (float *)result;
        if ( result )
        {
          v6 = FIELD_S8(result, 84);
          v7 = (unsigned __int8)(*v12 & (1 << v6));
          if ( (*v12 & (unsigned __int8)(1 << v6)) != 0 )
            v7 = 1;
          v8 = &dword_60CB3D90[v7 | (2 * v7)];
          name = (char *)v8[6];
          LODWORD(position.x) = 64;
          v9 = sub_60002B90(v6, unk_60C26474);
          v10 = Global_BasicSoundActor2;
          v11 = FIELD_F32(a1, 112);
          position.x = FIELD_F32(a1, 108);
          position.y = v11;
          mapPositionToScreen(&out, &position);
          BasicSoundActor2_play(v10, name, &out.x, (int)v9);
          (*(void (__fastcall **)(float *, int, int, _DWORD, float, float))(*(_DWORD *)v5 + 748))(
            v5,
            1,
            v8[5],
            0,
            *((float *)v8 + 4),
            v5[22]);
          result = (unsigned __int8)*v3 & ~(1 << v1);
          *v3 = result;
        }
      }
    }
    ++v1;
  }
  while ( v1 != 4 );
  return result;
}
