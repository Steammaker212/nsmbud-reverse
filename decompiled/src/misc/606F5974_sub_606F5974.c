/* sub_606F5974
 * address: 0x606F5974   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_606F5974(int a1)
{
  int v1; // r5
  int v2; // r8
  unsigned int *v3; // r10
  unsigned int result; // r0
  float v5; // s2
  float v6; // s0
  float v7; // s4
  float v8; // s0
  int v9; // r1
  float v10; // s2
  int *v11; // r0
  char v12; // r1
  int v13; // r0
  float v14; // s0
  float *v15; // r7
  unsigned int v16; // r1
  int v17; // r6
  char v18; // r12
  int v19; // r0
  bool v20; // zf
  float *v21; // [sp+Ch] [bp-6Ch]
  float *v22; // [sp+14h] [bp-64h]

  v1 = 0;
  v2 = a1 + 6536;
  v21 = (float *)(a1 + 6492);
  v22 = (float *)(a1 + 6116);
  v3 = (unsigned int *)(a1 + 6520);
  result = (unsigned int)&TileMgr_instance;
  do
  {
    v15 = (float *)(v2 + v1);
    v16 = *(_DWORD *)(v2 + v1 - 12);
    if ( !v16 )
      goto LABEL_31;
    v17 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v16);
    if ( ((unsigned int)&dword_60C7B364 & ~(1617910772 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( !v17 )
      goto LABEL_30;
    v19 = (**(int (__fastcall ***)(int, int *))v17)(v17, &StageActor_RTTI);
    v20 = v19 == 1;
    if ( v19 == 1 )
      v20 = FIELD_U8(v17, 536) == 0;
    if ( !v20 )
      goto LABEL_30;
    *(_DWORD *)(a1 + v1 + 6528) = 1;
    v5 = v15[1] + 0.3;
    v15[1] = v5;
    v6 = v15[2];
    if ( v5 > v6 )
      v15[1] = v6;
    sub_6060FAA0((int)(v15 - 3));
    v7 = FIELD_F32(v17, 112) - FIELD_F32(a1, 112);
    if ( v7 >= (float)(*v22 + -1.0) )
    {
      v14 = v15[1];
      if ( FIELD_U8(v17, 533) != 1 || (FIELD_U8(v17, 6900) & 2) == 0 )
      {
        ((void (__fastcall *)(float))loc_606F6364)(v14);
        v9 = 1;
        goto LABEL_17;
      }
      v9 = 0;
      if ( (float)(v7 - *v22) > 0.0 )
      {
        ((void (__fastcall *)(float))loc_606F6364)(v14);
        goto LABEL_16;
      }
    }
    else
    {
      v8 = FIELD_F32(a1, 108);
      v9 = 0;
      v10 = FIELD_F32(v17, 108) - v8;
      if ( fabsf(v10) >= (float)(*v21 * 0.48) )
      {
        v11 = dword_606F5CA4;
        if ( v10 < 0.0 )
          v11 = &dword_606F5CA4[1];
        sub_607160F4(
          TileMgr_instance,
          (int)(float)(v8 + *(float *)v11),
          (unsigned __int16)(int)(float)-*v15,
          FIELD_U8(a1, 86),
          1);
        v13 = v12 & 0xF;
        v9 = 0;
        if ( v13 != 1 )
        {
          sub_606F6590();
LABEL_16:
          v9 = 1;
        }
      }
    }
LABEL_17:
    result = (unsigned __int8)(FIELD_U8(v17, 533) - 1);
    if ( result <= 1 )
    {
      result = FIELD_U8(v17, 1211);
      if ( (result & 4) == 0 )
      {
        sub_606F6798(0.0);
LABEL_30:
        *(v15 - 3) = 0.0;
        v15[1] = 0.0;
        v15[2] = 2.0;
        result = *v3 - 1;
        *v3 = result;
        goto LABEL_31;
      }
    }
    if ( v9 )
      goto LABEL_30;
LABEL_31:
    v1 += 36;
  }
  while ( v1 != 360 );
  return result;
}
