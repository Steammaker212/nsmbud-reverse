/* sub_60647604
 * address: 0x60647604   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60647604(int a1)
{
  float *v2; // r7
  _DWORD *v3; // r6
  float *v4; // r8
  char v5; // r5
  float v6; // s2
  int v7; // r0
  float *v8; // r2
  float v9; // r0
  float v10; // r1
  unsigned int v11; // r2
  int v12; // r3
  float *v13; // r3
  float v14; // s8
  StateMethodExecuter *result; // r0
  __int64 v16; // r0
  int a5[10]; // [sp+0h] [bp-28h] BYREF

  v2 = (float *)(a1 + 7100);
  v3 = (_DWORD *)(a1 + 7016);
  v4 = (float *)(a1 + 7076);
  a5[0] = FIELD_U8(a1, 7100) & 1;
  v5 = LOBYTE(a5[0]) ^ 1;
  a5[1] = FIELD_U32(a1, 7064);
  v6 = FIELD_F32(a1, 7032);
  *(float *)&a5[2] = *(float *)(a1 + 7020 + 4 * a5[0]) - v6;
  *(float *)&a5[3] = *(float *)(a1 + 7020 + 4 * (a5[0] ^ 1)) - v6;
  v7 = ((int (__fastcall *)(int, int *, int))loc_6063B9B8)(a1 + 7016, a5, a1 + 7076);
  v8 = v2 - 18;
  if ( v7 == 1 )
    *(_BYTE *)v2 = v5;
  FIELD_U32(a1, 124) = *v3;
  v9 = *v8;
  FIELD_F32(a1, 108) = *v8;
  v10 = *(v2 - 17);
  FIELD_F32(a1, 112) = v10;
  FIELD_U32(a1, 116) = FIELD_U32(a1, 7036);
  v11 = FIELD_U32(a1, 7124);
  v12 = (v11 >> 20) & 0xFF0;
  v11 &= 0xFFFFFFu;
  v13 = (float *)((char *)sinLutTable + v12);
  v14 = *v4;
  FIELD_F32(a1, 112) = v10 + (float)(*v4 * (float)(v13[2] + (float)((float)((float)v11 * v13[3]) * 0.000000059605)));
  FIELD_F32(a1, 108) = v9 + (float)(v14 * (float)(*v13 + (float)((float)((float)v11 * v13[1]) * 0.000000059605)));
  result = *(StateMethodExecuter **)(a1 + 7080);
  if ( result )
  {
    v16 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
    result = (StateMethodExecuter *)(*(_DWORD *)(EventMgr__instance + 16) & v16
                                   | ((*(_QWORD *)(EventMgr__instance + 16) & (unsigned __int64)v16) >> 32));
    if ( !result )
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB5F18);
  }
  return result;
}
