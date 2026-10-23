/* sub_604A1614
 * address: 0x604A1614   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A1614(int a1)
{
  int result; // r0
  int v3; // r0
  float v4; // s0
  int v5; // r0
  int v6; // r1
  int *v7; // r6
  unsigned int i; // r7
  int v9; // r1
  int v10; // r2
  int v11; // r0
  _DWORD *v12; // r1
  unsigned int v13; // r0
  int v14; // r9
  int *v15; // r9
  int v16; // t1
  unsigned int j; // r5
  unsigned int v18; // r0
  _DWORD v19[12]; // [sp+0h] [bp-30h] BYREF

  result = FIELD_U8(a1, 22500);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    sub_6050229C(a1 + 3636);
    sub_6050B744(a1 + 5716);
    sub_6050A8A4(a1 + 12988);
    v3 = FIELD_U32(a1, 3632);
    if ( v3 )
    {
      v4 = FIELD_F32(v3, 60);
      v5 = FIELD_U32(a1, 20220);
      FIELD_F32(v5, 32) = -v4;
      FIELD_U8(v5, 64) |= 0x10u;
    }
    sub_604A17D0(a1);
    sub_60558700(a1 + 9296);
    result = 22496;
    v7 = (int *)(a1 + 22496);
    v6 = FIELD_U32(a1, 22496);
    if ( v6 >= 1 )
    {
      for ( i = 0; (int)i < v6; ++i )
      {
        v13 = 0;
        if ( i < 4 )
          v13 = i;
        v14 = a1 + 4 * v13;
        v16 = FIELD_U32(v14, 20276);
        v15 = (int *)(v14 + 20276);
        result = v16;
        if ( FIELD_U8(v16, 2689)
          && !FIELD_U8(result, 2691)
          && !FIELD_U8(result, 2690)
          && FIELD_U8(result, 2700)
          && !FIELD_U8(result, 2701)
          && !FIELD_U8(result, 2699) )
        {
          v9 = FIELD_U32(result, 380);
          v10 = FIELD_U32(result, 384);
          v19[2] = FIELD_U32(result, 388);
          v19[0] = v9;
          v19[1] = v10;
          v11 = sub_608332B0(v19, FIELD_U32(a1, 3632) + 52);
          v12 = (_DWORD *)*v15;
          v12[122] = 0;
          v12[123] = v11;
          v12[124] = 0;
          *(_DWORD *)(*v15 + 2584) = -1077936128;
          result = *v15;
          *(_DWORD *)(*v15 + 2576) = -1041235968;
          v6 = *v7;
        }
      }
      if ( v6 >= 1 )
      {
        for ( j = 0; (int)j < v6; ++j )
        {
          v18 = 0;
          if ( j < 4 )
            v18 = j;
          result = *(_DWORD *)(a1 + 4 * v18 + 20276);
          if ( result )
          {
            result = sub_60402E34(result);
            v6 = *v7;
          }
        }
      }
    }
  }
  return result;
}
