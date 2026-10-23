/* sub_60626F5C
 * address: 0x60626F5C   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60626F5C(int a1)
{
  int v1; // r10
  unsigned int *v2; // r6
  int v3; // r5
  unsigned int result; // r0
  float v5; // s2
  float v6; // s0
  float v7; // s0
  float v8; // s2
  int v9; // r2
  float v10; // s4
  int *v11; // r0
  float v12; // s0
  char v13; // r1
  int v14; // r4
  char v15; // r12
  int v16; // r0
  bool v17; // zf
  float *v18; // [sp+8h] [bp-60h]

  v1 = 10;
  v18 = (float *)(a1 + 6120);
  v2 = (unsigned int *)(a1 + 6468);
  v3 = a1 + 6472;
  result = (unsigned int)&TileMgr_instance;
  do
  {
    if ( !*(_DWORD *)v3 )
      goto LABEL_26;
    v14 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)v3);
    if ( ((unsigned int)&dword_60C7B364 & ~(1617064272 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( !v14 )
      goto LABEL_25;
    v16 = (**(int (__fastcall ***)(int, int *))v14)(v14, &StageActor_RTTI);
    v17 = v16 == 1;
    if ( v16 == 1 )
      v17 = FIELD_U8(v14, 536) == 0;
    if ( !v17 )
      goto LABEL_25;
    v5 = FIELD_F32(v3, 16) + 0.3;
    FIELD_F32(v3, 16) = v5;
    v6 = FIELD_F32(v3, 20);
    if ( v5 > v6 )
      FIELD_F32(v3, 16) = v6;
    sub_6060FAA0(v3);
    FIELD_U32(v3, 4) = 0;
    v7 = FIELD_F32(v3, 12);
    if ( (float)(v7 - FIELD_F32(a1, 112)) >= (float)(*v18 + -2.0) )
    {
      ((void (__fastcall *)(float))loc_60627538)(FIELD_F32(v3, 16));
      goto LABEL_11;
    }
    v8 = FIELD_F32(a1, 108);
    v9 = 0;
    v10 = FIELD_F32(v3, 8) - v8;
    if ( fabsf(v10) >= 30.72 )
    {
      v11 = dword_60627200;
      v12 = -v7;
      if ( v10 < 0.0 )
        v11 = &dword_60627200[1];
      sub_607160F4(
        TileMgr_instance,
        (int)(float)(v8 + *(float *)v11),
        (unsigned __int16)(int)v12,
        FIELD_U8(a1, 86),
        1);
      v9 = 0;
      if ( (v13 & 0xF) != 1 )
      {
        sub_60627754();
LABEL_11:
        v9 = 1;
      }
    }
    result = (unsigned __int8)(FIELD_U8(v14, 533) - 1);
    if ( result <= 1 )
    {
      result = FIELD_U8(v14, 1211);
      if ( (result & 4) == 0 )
      {
        sub_6062795C(0.0);
LABEL_25:
        *(_DWORD *)v3 = 0;
        FIELD_U32(v3, 16) = 0;
        FIELD_U32(v3, 20) = 0x40000000;
        result = *v2 - 1;
        *v2 = result;
        goto LABEL_26;
      }
    }
    if ( v9 )
      goto LABEL_25;
LABEL_26:
    --v1;
    v3 += 36;
  }
  while ( v1 );
  return result;
}
