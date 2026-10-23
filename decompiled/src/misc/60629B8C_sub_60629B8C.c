/* sub_60629B8C
 * address: 0x60629B8C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60629B8C(int a1, int a2)
{
  char v4; // r7
  bool v5; // zf
  int result; // r0
  float v7; // s0
  unsigned int v8; // r0
  int v9; // r1
  int *v10; // r6
  const char *v11; // r8
  int *v12; // r10
  float v13; // r1
  int v14; // r11
  Vec2 out; // [sp+4h] [bp-34h] BYREF
  Vec3 position; // [sp+Ch] [bp-2Ch] BYREF

  v4 = FIELD_U8(a2, 84);
  v5 = (FIELD_U8(a2, 6900) & 2) == 0;
  if ( (FIELD_U8(a2, 6900) & 2) == 0 )
    v5 = (FIELD_U32(a2, 1204) & 0x24000) == 0;
  if ( !v5 )
    goto LABEL_4;
  FIELD_U32(a2, 1220) |= 0x40000u;
  v7 = FIELD_F32(a1, 6176);
  if ( FIELD_F32(a2, 112) < v7 )
    FIELD_F32(a2, 112) = v7;
  if ( sub_6078663C(a2 + 688) == 1 )
    FIELD_U8(a1, 6198) |= 1 << v4;
  result = FIELD_S8(a1, 6169);
  if ( result >= 11 )
  {
    v8 = FIELD_S8(a2, 84);
    v9 = (unsigned __int8)(FIELD_U8(a1, 6198) & (1 << v8));
    if ( (FIELD_U8(a1, 6198) & (unsigned __int8)(1 << v8)) != 0 )
      v9 = 1;
    v10 = &dword_60CB3D90[v9 | (2 * v9)];
    LODWORD(position.x) = 64;
    v11 = (const char *)v10[6];
    v12 = sub_60002B90(v8, unk_60C26474);
    v13 = FIELD_F32(a1, 112);
    v14 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v13;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v14, v11, &out.x, (int)v12);
    (*(void (__fastcall **)(int, int, int, _DWORD, float, float))(*(_DWORD *)a2 + 748))(
      a2,
      1,
      v10[5],
      0,
      *((float *)v10 + 4),
      FIELD_F32(a2, 88));
LABEL_4:
    result = FIELD_U8(a1, 6196) & ~(1 << v4);
    FIELD_U8(a1, 6196) = result;
  }
  return result;
}
