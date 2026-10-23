/* sub_607CD2E8
 * address: 0x607CD2E8   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607CD2E8(int a1)
{
  int v2; // r6
  int v3; // r0
  int *v4; // r5
  unsigned int v5; // r1
  _DWORD *v6; // r1
  int v7; // r2
  int v8; // r1
  int *v9; // r1
  _DWORD *v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r2
  int v14; // r1
  float v15; // s0
  signed int result; // r0

  v2 = 1;
  v4 = (int *)(a1 + 11360);
  v3 = FIELD_U32(a1, 11360);
  v5 = *(_DWORD *)(v4[2] + 196);
  if ( (v5 & 1) == 0 )
    v2 = (v5 >> 3) & 2;
  if ( v3 )
  {
    v6 = *(&off_60C260B4 + v2);
    FIELD_U32(a1, 304) = *v6;
    FIELD_U32(a1, 308) = v6[1];
    v7 = v6[2];
    v8 = v6[3];
    FIELD_U32(a1, 312) = v7;
    FIELD_U32(a1, 316) = v8;
    v9 = (int *)*(&off_60C260C0 + v2);
  }
  else
  {
    sub_60158FA8((ActiveCollider *)(a1 + 188), 2312);
    FIELD_U32(a1, 328) = 0;
    FIELD_U32(a1, 336) = 0x400000;
    v10 = *(&off_60C260B4 + v2);
    FIELD_U32(a1, 304) = *v10;
    FIELD_U32(a1, 308) = v10[1];
    v11 = v10[2];
    v12 = v10[3];
    FIELD_U32(a1, 312) = v11;
    FIELD_U32(a1, 316) = v12;
    sub_60158FA8((ActiveCollider *)(a1 + 7440), 5);
    FIELD_U32(a1, 7580) = 0;
    FIELD_U32(a1, 7588) = 0;
    v9 = (int *)&unk_60AF2C54;
    v3 = *v4;
    if ( (FIELD_U8(a1, 6904) & 0x18) != 0 )
      v9 = &dword_60AF2C64;
  }
  FIELD_U32(a1, 7556) = *v9;
  FIELD_U32(a1, 7560) = v9[1];
  v13 = v9[2];
  v14 = v9[3];
  FIELD_U32(a1, 7564) = v13;
  FIELD_U32(a1, 7568) = v14;
  if ( v3 )
    v15 = FIELD_F32(a1, 1244) * 0.5;
  else
    v15 = 8.0;
  FIELD_U32(a1, 572) = 0;
  FIELD_F32(a1, 576) = v15;
  FIELD_U32(a1, 580) = 0;
  result = FIELD_U32(a1, 1236) & 0x30000;
  if ( result == 196608 )
    return sub_60158FA8((ActiveCollider *)(a1 + 188), 32);
  return result;
}
