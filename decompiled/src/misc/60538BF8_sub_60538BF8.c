/* sub_60538BF8
 * address: 0x60538BF8   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60538BF8(int a1)
{
  __int16 v2; // r0
  float v3; // s0
  float v4; // r1
  int result; // r0
  float v6; // s0
  int v7; // r4
  int v8; // t1
  int v9; // r2
  int v10; // r0
  int v11; // r1

  if ( !FIELD_U8(a1, 83624) )
    return sub_60473B58((_DWORD *)(a1 + 12092), 5u, 0);
  v2 = FIELD_U8(dword_60C9CFB8, 81);
  if ( FIELD_U8(dword_60C9CFB8, 81) )
    v2 = 4;
  FIELD_U32(a1, 83604) = *(_DWORD *)(404 * v2 + a1 + 52680) & 0x16DF0;
  if ( FIELD_U8(a1, 83630) )
  {
    v3 = FIELD_F32(a1, 83588) + 1.0;
    FIELD_F32(a1, 83588) = v3;
    if ( v3 >= FIELD_F32(a1, 83592) )
    {
      v4 = 0.0;
      FIELD_U32(a1, 83588) = 0;
    }
    else
    {
      v4 = v3;
    }
    FIELD_F32(a1, 52476) = v4;
  }
  StateMgr__execute((StateMgr *)(a1 + 36));
  v6 = FIELD_F32(a1, 83596) + 1.0;
  FIELD_F32(a1, 83596) = v6;
  if ( v6 > FIELD_F32(a1, 83600) )
    FIELD_U32(a1, 83596) = 0;
  FIELD_U32(a1, 4056) = FIELD_U32(a1, 83588);
  sub_60531DE4(a1 + 56);
  FIELD_U32(a1, 8068) = FIELD_U32(a1, 83588);
  sub_60531DE4(a1 + 4068);
  FIELD_U32(a1, 12080) = FIELD_U32(a1, 83588);
  sub_60531DE4(a1 + 8080);
  sub_6050229C(a1 + 15700);
  sub_6050A8A4(a1 + 54704);
  sub_6050A8A4(a1 + 61920);
  sub_6050A8A4(a1 + 69136);
  sub_6050A8A4(a1 + 76352);
  sub_60473B58((_DWORD *)(a1 + 12092), 5u, 0);
  result = FIELD_U8(a1, 83629);
  if ( FIELD_U8(a1, 83629) )
  {
    v8 = FIELD_U32(a1, 52580);
    v7 = a1 + 52580;
    v9 = *(_DWORD *)(v7 - 3104);
    v10 = FIELD_U32(v8, 108);
    FIELD_U32(v9, 24) = FIELD_U32(v8, 92);
    FIELD_U32(v9, 28) = v10;
    FIELD_U32(v9, 32) = 0;
    LOBYTE(v10) = FIELD_U8(v9, 64) | 0x10;
    FIELD_U8(v9, 64) = v10;
    v11 = *(_DWORD *)(*(_DWORD *)v7 + 52);
    FIELD_U32(v9, 48) = *(_DWORD *)(*(_DWORD *)v7 + 48);
    FIELD_U32(v9, 52) = v11;
    FIELD_U8(v9, 64) = v10;
    FIELD_U8(v9, 65) = *(_BYTE *)(*(_DWORD *)v7 + 66);
    return sub_60541D74(v7 - 34800);
  }
  return result;
}
