/* sub_602F6790
 * address: 0x602F6790   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F6790(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r5
  int result; // r0
  float v8; // s18
  float v9; // s20
  float v10; // s16
  float v11; // s0
  float v12; // s0
  int v13; // r0
  StateBase *CurrentState; // r0
  int v15; // r6
  float v16; // s0

  if ( FIELD_U8(a1, 6320) )
  {
    v5 = FIELD_U32(a3, 64);
    v6 = FIELD_U32(a2, 64);
    result = Actor__getProfileId((Actor *)v5);
    if ( result == 470 )
    {
      result = FIELD_U8(v5, 6320);
      if ( FIELD_U8(v5, 6320) )
      {
        v8 = FIELD_F32(v5, 112) - FIELD_F32(v6, 112);
        v9 = FIELD_F32(v5, 108) - FIELD_F32(v6, 108);
        v10 = (float)(v8 * v8) + (float)(v9 * v9);
        if ( sqrtf(v10) > 5.0 )
        {
          v11 = sqrtf(v10);
          if ( v11 > 0.0 )
          {
            v12 = 1.0 / v11;
            v8 = v8 * v12;
            v9 = v9 * v12;
          }
          v13 = FIELD_U32(v5, 2872);
          if ( ((v13 & 0x440000) == 0 || (v13 & 0x10000000) != 0) && ((v13 & 0x880000) == 0 || (v13 & 0x20000000) != 0) )
          {
            v8 = v8 * 1.2;
            v9 = v9 * 1.2;
          }
          FIELD_U32(v5, 128) = 0;
          FIELD_F32(v5, 120) = v9;
          FIELD_F32(v5, 124) = v8;
          return 0;
        }
      }
    }
  }
  else
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60C928B0 + 8))();
    if ( v15 == result )
    {
      v16 = FIELD_F32(a2, 188);
      result = FIELD_U32(a1, 80);
      if ( v16 > 0.0 && result == 1 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C928D0);
      if ( v16 < 0.0 && !result )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C928D0);
    }
  }
  return result;
}
