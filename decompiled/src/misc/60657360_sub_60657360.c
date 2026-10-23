/* sub_60657360
 * address: 0x60657360   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60657360(int a1)
{
  float *v2; // r6
  float *v3; // r5
  char v4; // r7
  float v5; // s2
  int v6; // r0
  float *v7; // r2
  float v8; // r0
  float v9; // r1
  unsigned int v10; // r2
  int v11; // r3
  float *v12; // r3
  float v13; // s8
  StateMethodExecuter *result; // r0
  __int64 v15; // r0
  int a5[10]; // [sp+0h] [bp-28h] BYREF

  v2 = (float *)(a1 + 6892);
  v3 = (float *)(a1 + 6884);
  a5[0] = FIELD_U8(a1, 6892) & 1;
  v4 = LOBYTE(a5[0]) ^ 1;
  a5[1] = FIELD_U32(a1, 6876);
  v5 = FIELD_F32(a1, 6832);
  *(float *)&a5[2] = *(float *)(a1 + 6864 + 4 * a5[0]) - v5;
  *(float *)&a5[3] = *(float *)(a1 + 6864 + 4 * (a5[0] ^ 1)) - v5;
  v6 = ((int (__fastcall *)(int, int *, int))loc_6063B9B8)(a1 + 6808, a5, a1 + 6884);
  v7 = v2 - 16;
  if ( v6 == 1 )
    *(_BYTE *)v2 = v4;
  v8 = *v7;
  FIELD_F32(a1, 108) = *v7;
  v9 = *(v2 - 15);
  FIELD_F32(a1, 112) = v9;
  FIELD_U32(a1, 116) = FIELD_U32(a1, 6836);
  v10 = FIELD_U32(a1, 6924);
  v11 = (v10 >> 20) & 0xFF0;
  v10 &= 0xFFFFFFu;
  v12 = (float *)((char *)sinLutTable + v11);
  v13 = *v3;
  FIELD_F32(a1, 112) = v9 + (float)(*v3 * (float)(v12[2] + (float)((float)((float)v10 * v12[3]) * 0.000000059605)));
  FIELD_F32(a1, 108) = v8 + (float)(v13 * (float)(*v12 + (float)((float)((float)v10 * v12[1]) * 0.000000059605)));
  result = *(StateMethodExecuter **)(a1 + 6888);
  if ( result )
  {
    v15 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
    result = (StateMethodExecuter *)(FIELD_U32(EventMgr__instance, 16) & v15
                                   | ((FIELD_U64(EventMgr__instance, 16) & (unsigned __int64)v15) >> 32));
    if ( !result )
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB6500);
  }
  return result;
}
