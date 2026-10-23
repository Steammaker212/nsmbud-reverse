/* sub_606464B8
 * address: 0x606464B8   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606464B8(int a1)
{
  int v2; // r6
  float *v3; // r5
  float v4; // r0
  float v5; // r1
  unsigned int v6; // r2
  int v7; // r3
  float *v8; // r3
  float v9; // s8
  float result; // s0
  int a5[8]; // [sp+0h] [bp-20h] BYREF

  a5[0] = FIELD_U32(a1, 80) & 1;
  v2 = a5[0] ^ 1;
  a5[1] = FIELD_U32(a1, 7076);
  a5[2] = *(_DWORD *)(a1 + 7056 + 4 * a5[0]);
  v3 = (float *)(a1 + 7068);
  a5[3] = *(_DWORD *)(a1 + 7056 + 4 * (a5[0] ^ 1));
  if ( ((int (__fastcall *)(int, int *, int))loc_6063B9B8)(a1 + 7016, a5, a1 + 7068) == 1 )
    FIELD_U32(a1, 80) = v2;
  if ( FIELD_U32(a1, 7104)
    && (FIELD_U64(EventMgr__instance, 16)
      & sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540))) == 0 )
  {
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB5E6C);
  }
  v4 = FIELD_F32(a1, 7020);
  FIELD_F32(a1, 108) = v4;
  v5 = FIELD_F32(a1, 7024);
  FIELD_F32(a1, 112) = v5;
  FIELD_U32(a1, 116) = FIELD_U32(a1, 7028);
  v6 = FIELD_U32(a1, 7136);
  v7 = (v6 >> 20) & 0xFF0;
  v6 &= 0xFFFFFFu;
  v8 = (float *)((char *)sinLutTable + v7);
  v9 = *v3;
  FIELD_F32(a1, 108) = v4 + (float)(*v3 * (float)(v8[2] + (float)((float)((float)v6 * v8[3]) * 0.000000059605)));
  result = *v8 + (float)((float)((float)v6 * v8[1]) * 0.000000059605);
  FIELD_F32(a1, 112) = v5 + (float)(v9 * result);
  return result;
}
