/* sub_6021065C
 * address: 0x6021065C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021065C(int a1)
{
  int result; // r0
  float32x2_t v3; // d2
  float32x2_t v4; // d0
  float v5; // s0
  int v6; // r1
  int v7; // r2
  int v8; // r0
  int a5; // [sp+0h] [bp-18h] BYREF
  signed int v10; // [sp+4h] [bp-14h] BYREF

  sub_601CF9C0(dword_60C8AEF0);
  result = FIELD_U32(a1, 420);
  switch ( result )
  {
    case 11:
      v10 = 301989888;
      a5 = 3145728;
      FIELD_U32(a1, 384) = sub_608332B0(a1 + 80, a1 + 404);
      sub_608322C0((int *)(a1 + 192), (int *)(a1 + 384), &v10, &a5);
      v6 = FIELD_U32(a1, 192);
      v7 = FIELD_U32(a1, 196);
      FIELD_U32(a1, 176) = FIELD_U32(a1, 188);
      FIELD_U32(a1, 180) = v6;
      FIELD_U32(a1, 184) = v7;
      result = FIELD_U32(a1, 180);
      if ( FIELD_U32(a1, 384) == result )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        return (int)StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8CF34);
      }
      break;
    case 10:
      v8 = FIELD_U32(a1, 416);
      if ( v8 < 1 )
      {
        FIELD_U32(a1, 420) = 11;
        return 11;
      }
      else
      {
        result = v8 - 1;
        FIELD_U32(a1, 416) = result;
      }
      break;
    case 9:
      ((void (__fastcall *)(int))loc_60168DF8)(a1);
      result = ((int (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 120, 9.0, 0.1, 1.0, 0.1);
      v3.n64_u32[0] = 3.0;
      v4.n64_f32[0] = FIELD_F32(a1, 128) + 0.1;
      v4.n64_u32[0] = vmin_f32(v4, v3).n64_u32[0];
      FIELD_U32(a1, 128) = v4.n64_u32[0];
      FIELD_U32(a1, 132) = v4.n64_u32[0];
      FIELD_U32(a1, 136) = v4.n64_u32[0];
      v5 = FIELD_F32(a1, 408);
      if ( FIELD_F32(a1, 84) > v5 )
      {
        FIELD_F32(a1, 84) = v5;
        FIELD_U32(a1, 120) = 0;
        FIELD_F32(a1, 436) = v5;
        FIELD_U32(a1, 420) = 10;
        FIELD_U8(a1, 468) = 1;
        return 1;
      }
      break;
  }
  return result;
}
