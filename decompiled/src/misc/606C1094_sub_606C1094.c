/* sub_606C1094
 * address: 0x606C1094   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C1094(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r0
  int v5; // r0
  float v6; // s0
  float v7; // s2
  float v8; // s4
  float v9; // s2
  float v10; // s4
  StateMgr *v11; // r0
  int *v12; // r1

  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 192))(a1);
  result = 2;
  if ( v2 == 1 )
  {
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
    FIELD_U8(a1, 6118) = v4;
    v5 = sub_606D4BD4(v4);
    if ( v5 )
    {
      FIELD_U32(a1, 6112) = FIELD_U32(v5, 8);
      v6 = FIELD_F32(a1, 108) - FIELD_F32(v5, 6100);
      v7 = FIELD_F32(a1, 112) - FIELD_F32(v5, 6104);
      v8 = FIELD_F32(a1, 116) - FIELD_F32(v5, 6108);
      FIELD_F32(a1, 6100) = v6;
      FIELD_F32(a1, 6104) = v7;
      FIELD_F32(a1, 6108) = v8;
      v9 = v7 + FIELD_F32(v5, 112);
      v10 = v8 + FIELD_F32(v5, 116);
      FIELD_F32(a1, 108) = v6 + FIELD_F32(v5, 108);
      FIELD_F32(a1, 112) = v9;
      FIELD_F32(a1, 116) = v10;
      FIELD_U8(a1, 6116) = FIELD_U8(v5, 6246);
      FIELD_U8(a1, 6117) = FIELD_U8(v5, 6212);
      v11 = (StateMgr *)(a1 + 6084);
      v12 = &dword_60CBA92C;
    }
    else
    {
      v11 = (StateMgr *)(a1 + 6084);
      v12 = &dword_60CBA90C;
    }
    StateMgr__changeState(v11, (StateBase *)v12);
    return 1;
  }
  return result;
}
