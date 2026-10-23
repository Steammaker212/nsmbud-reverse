/* sub_6074780C
 * address: 0x6074780C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6074780C(int a1)
{
  float v2; // s0
  unsigned int v3; // r0
  float v4; // s4
  float *v5; // r1
  float v6; // s10
  float v7; // s12
  signed int v8; // r1
  signed int v9; // r2
  StateMethodExecuter *result; // r0
  signed int v11[3]; // [sp+4h] [bp-2Ch] BYREF
  signed int v12[8]; // [sp+10h] [bp-20h] BYREF

  FIELD_U32(a1, 104) = 1028443341;
  v2 = (float)byte_60B0A5B0[FIELD_U32(a1, 80)];
  FIELD_F32(a1, 132) = v2 + v2;
  StageActor__accelerateX((StageActor *)a1);
  v12[0] = 35791394;
  v11[0] = 11930464;
  sub_608322C0((int *)(a1 + 776), &dword_60CBE6A4, v12, v11);
  v3 = FIELD_U32(a1, 772) + byte_60B0A5B0[FIELD_U32(a1, 792)] * FIELD_U32(a1, 776);
  FIELD_U32(a1, 772) = v3;
  v4 = FIELD_F32(a1, 784);
  v5 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v6 = *v5;
  v7 = v5[1];
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = (float)(v4
                               + (float)((float)(v6 + (float)(v7 * (float)((float)(v3 & 0xFFFFFF) * 0.000000059605)))
                                       * 20.0))
                       + FIELD_F32(a1, 124);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  v8 = FIELD_U32(a1, 112);
  v9 = FIELD_U32(a1, 116);
  v12[0] = FIELD_U32(a1, 108);
  v12[1] = v8;
  v12[2] = v9;
  *(float *)v12 = *(float *)v12 + (float)((float)byte_60B0A5B0[FIELD_U32(a1, 80)] * -128.0);
  sub_60233464(dword_60C8D904, (int)v11);
  result = *(StateMethodExecuter **)(a1 + 80);
  if ( result == (StateMethodExecuter *)1 )
  {
    if ( *(float *)v11 > -0.99 )
      return result;
    return StateMgr__changeState((StateMgr *)(a1 + 712), (StateBase *)&dword_60CBE670);
  }
  if ( !result && *(float *)v11 >= 0.99 )
    return StateMgr__changeState((StateMgr *)(a1 + 712), (StateBase *)&dword_60CBE670);
  return result;
}
