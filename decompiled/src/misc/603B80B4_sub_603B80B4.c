/* sub_603B80B4
 * address: 0x603B80B4   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B80B4(int a1)
{
  float v2; // s0
  float v3; // s4
  float v4; // s10
  unsigned int v5; // r1
  unsigned int v6; // r2
  int v7; // r1
  float v8; // s8
  float v9; // s0
  float *v10; // r0
  float v11; // s12
  float v12; // s10
  float v14; // s4

  StateMgr__execute((StateMgr *)(a1 + 6084));
  ActorScaler_execute((ActorScaler *)(a1 + 23088));
  if ( FIELD_U8(a1, 536) )
    sub_603B869C(a1);
  else
    sub_603B887C(a1);
  if ( !FIELD_U8(a1, 23) )
    StageActor__cullCheck((StageActor *)a1, 0);
  v2 = FIELD_F32(a1, 108);
  if ( v2 < (float)(FIELD_F32(AreaTask_intance, 1812) + -16.0)
    || (v3 = FIELD_F32(a1, 112), v3 > (float)(FIELD_F32(AreaTask_intance, 1824) + 16.0))
    || v2 > (float)(FIELD_F32(AreaTask_intance, 1820) + 16.0)
    || v3 < (float)(FIELD_F32(AreaTask_intance, 1816) + -16.0) )
  {
    FIELD_U8(a1, 19) = 1;
  }
  if ( FIELD_U8(a1, 22613) )
    v4 = FIELD_F32(a1, 6452) + FIELD_F32(a1, 22624);
  else
    v4 = FIELD_F32(a1, 6452);
  v5 = FIELD_U32(a1, 156) - 0x40000000;
  v6 = HIBYTE(v5);
  v7 = v5 & 0xFFFFFF;
  v8 = FIELD_F32(a1, 6456);
  v9 = (float)(v4
             + (float)((float)(sinLutTable[4 * v6 + 2]
                             + (float)((float)(sinLutTable[4 * v6 + 3] * (float)(unsigned int)v7) * 0.000000059605))
                     * -8.0))
     - v2;
  if ( FIELD_U8(a1, 22613) )
    v8 = v8 + FIELD_F32(a1, 22628);
  v10 = &sinLutTable[4 * v6];
  v11 = v10[1];
  v12 = *v10;
  v14 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 304) = v9;
  FIELD_F32(a1, 308) = (float)(v8
                               + (float)((float)(v12 + (float)((float)((float)(unsigned int)v7 * v11) * 0.000000059605))
                                       * -8.0))
                       - v14;
  return 1;
}
