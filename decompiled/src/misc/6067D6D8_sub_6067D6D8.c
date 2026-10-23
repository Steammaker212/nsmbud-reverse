/* sub_6067D6D8
 * address: 0x6067D6D8   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067D6D8(int a1)
{
  int v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  unsigned int v5; // r0
  ModelWrapper *v6; // r5
  float *v7; // r1
  float v8; // s4
  float v9; // s8
  float v10; // s0
  float v11; // s14
  float v12; // s3
  int v14[16]; // [sp+0h] [bp-40h] BYREF

  v2 = 0;
  v14[0] = 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 168));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*((int (__fastcall **)(State *))LineFollower_StateID_Fall._.vtable + 2))(&LineFollower_StateID_Fall) )
    v2 = sub_6000F350((LineFollower *)(a1 + 148));
  v14[0] = v2;
  moveValueTo((int *)(a1 + 320), v14, &dword_60CB7FC0);
  if ( FIELD_U8(a1, 332) )
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 328));
  if ( FIELD_U8(a1, 336) )
    FIELD_U8(a1, 335) = 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 4))(a1);
  SE_OBJ_CMN_SPLASH_POISON_ref_67D8B4(a1);
  v5 = FIELD_U32(a1, 320);
  v6 = *(ModelWrapper **)(a1 + 328);
  v7 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v8 = (float)(0.024541 * 0.0) + 0.0;
  v9 = (float)(-0.00030118 * 0.0) + 1.0;
  v10 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v11 = *v7 + (float)(v10 * v7[1]);
  v12 = v7[2] + (float)(v10 * v7[3]);
  *(float *)v14 = v9 * v12;
  *(float *)&v14[4] = v9 * v11;
  *(float *)&v14[8] = -v8;
  *(float *)&v14[1] = (float)((float)(v8 * v8) * v12) - (float)(v9 * v11);
  *(float *)&v14[5] = (float)(v9 * v12) + (float)((float)(v8 * v8) * v11);
  *(float *)&v14[9] = v8 * v9;
  *(float *)&v14[2] = (float)(v8 * (float)(v9 * v12)) + (float)(v8 * v11);
  *(float *)&v14[6] = (float)(v8 * (float)(v9 * v11)) - (float)(v8 * v12);
  *(float *)&v14[10] = v9 * v9;
  v14[3] = FIELD_U32(a1, 308);
  v14[7] = FIELD_U32(a1, 312);
  v14[11] = FIELD_U32(a1, 316);
  (*(void (__fastcall **)(void *, int *))(*(_DWORD *)FIELD_U32(v6, 0x0) + 60))(FIELD_U32(v6, 0x0), v14);
  ModelWrapper_updateModel(v6);
  if ( FIELD_U8(a1, 334) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  FIELD_U16(a1, 336) = 0;
  FIELD_U8(a1, 338) = 0;
  return 336;
}
