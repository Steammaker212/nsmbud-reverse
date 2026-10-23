/* sub_606AF450
 * address: 0x606AF450   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606AF450(int a1)
{
  int v2; // r5
  signed int v3; // r0
  int v4; // r3
  int v5; // r0
  char v6; // r1
  _BYTE v7[12]; // [sp+Ch] [bp-4Ch] BYREF
  float v8; // [sp+18h] [bp-40h]
  float v9; // [sp+28h] [bp-30h]
  float v10; // [sp+38h] [bp-20h]
  Vec3 v11; // [sp+3Ch] [bp-1Ch] BYREF

  if ( FIELD_U8(a1, 1248) )
  {
    FIELD_U8(a1, 1248) = 0;
    sub_603FD768(
      dword_60C99DF4,
      FIELD_U8(LevelInfo_instance, 18),
      1,
      FIELD_F32(a1, 108),
      -FIELD_F32(a1, 112));
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    v2 = 4;
    if ( FIELD_U32(dword_60C99DD4, 764) != 1 )
    {
      v3 = sub_603FC6A0(dword_60C99DE4);
      v2 = 4;
      if ( v3 % 10 == v3 / 10 % 10 )
        v2 = 8;
    }
    (*(void (__fastcall **)(_DWORD, int, _BYTE *))(***(_DWORD ***)(a1 + 644) + 108))(**(_DWORD **)(a1 + 644), 4, v7);
    v11.x = v8;
    v11.y = v9;
    v11.z = v10;
    if ( FIELD_U8(a1, 1250) )
    {
      v4 = 3;
      v11.y = v9 + -16.0;
      v5 = dword_60CAF15C;
      v6 = FIELD_U8(a1, 86);
    }
    else
    {
      v6 = FIELD_U8(a1, 86);
      v4 = 0;
      v5 = dword_60CAF15C;
    }
    sub_605839E8(v5, &v11, v2, v4, v6, 0);
  }
}
