/* sub_6053EE84
 * address: 0x6053EE84   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053EE84(int a1)
{
  int result; // r0
  float v3; // s0
  float v4; // r1
  float v5; // s0
  int v6; // r4
  int v7; // t1
  int v8; // r2
  int v9; // r0
  int v10; // r1

  result = FIELD_U8(a1, 83564);
  if ( result )
  {
    FIELD_U32(a1, 83540) = FIELD_U32(a1, 52620) & 0x16DF0;
    if ( FIELD_U8(a1, 83570) )
    {
      v3 = FIELD_F32(a1, 83524) + 1.0;
      FIELD_F32(a1, 83524) = v3;
      if ( v3 >= FIELD_F32(a1, 83528) )
      {
        v4 = 0.0;
        FIELD_U32(a1, 83524) = 0;
      }
      else
      {
        v4 = v3;
      }
      FIELD_F32(a1, 52456) = v4;
    }
    StateMgr__execute((StateMgr *)(a1 + 36));
    v5 = FIELD_F32(a1, 83532) + 1.0;
    FIELD_F32(a1, 83532) = v5;
    if ( v5 > FIELD_F32(a1, 83536) )
      FIELD_U32(a1, 83532) = 0;
    FIELD_U32(a1, 4056) = FIELD_U32(a1, 83524);
    sub_60531DE4(a1 + 56);
    FIELD_U32(a1, 8068) = FIELD_U32(a1, 83524);
    sub_60531DE4(a1 + 4068);
    FIELD_U32(a1, 12080) = FIELD_U32(a1, 83524);
    sub_60531DE4(a1 + 8080);
    sub_6050229C(a1 + 15680);
    sub_6050A8A4(a1 + 54640);
    sub_6050A8A4(a1 + 61856);
    sub_6050A8A4(a1 + 69072);
    sub_6050A8A4(a1 + 76288);
    sub_60473B58((_DWORD *)(a1 + 12092), 5u, 0);
    result = FIELD_U8(a1, 83569);
    if ( FIELD_U8(a1, 83569) )
    {
      v7 = FIELD_U32(a1, 52540);
      v6 = a1 + 52540;
      v8 = *(_DWORD *)(v6 - 3084);
      v9 = FIELD_U32(v7, 108);
      FIELD_U32(v8, 24) = FIELD_U32(v7, 92);
      FIELD_U32(v8, 28) = v9;
      FIELD_U32(v8, 32) = 0;
      LOBYTE(v9) = FIELD_U8(v8, 64) | 0x10;
      FIELD_U8(v8, 64) = v9;
      v10 = *(_DWORD *)(*(_DWORD *)v6 + 52);
      FIELD_U32(v8, 48) = *(_DWORD *)(*(_DWORD *)v6 + 48);
      FIELD_U32(v8, 52) = v10;
      FIELD_U8(v8, 64) = v9;
      FIELD_U8(v8, 65) = *(_BYTE *)(*(_DWORD *)v6 + 66);
      return sub_60541D74(v6 - 34780);
    }
  }
  return result;
}
