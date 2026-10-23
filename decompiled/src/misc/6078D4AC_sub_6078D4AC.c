/* sub_6078D4AC
 * address: 0x6078D4AC   size: 1048   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6078D4AC(int a1)
{
  int v2; // r6
  float v3; // s0
  int *result; // r0
  int v5; // r0
  int v6; // r1
  bool v7; // zf
  int v8; // r1
  int v9; // r5
  int v10; // r7
  int v11; // r1
  int v12; // r0
  int v13; // r1
  bool v14; // zf
  int v15; // r1
  unsigned int v16; // r0
  bool v17; // zf
  unsigned int v18; // r0
  int v19; // r0
  bool v20; // zf
  char v21; // r5
  int v22; // r0
  int (__fastcall ***v23)(_DWORD, int *); // r5
  char v24; // r12
  int v25; // r0
  int *v26; // r1
  signed int v27; // [sp+4h] [bp-24h] BYREF
  signed int v28; // [sp+8h] [bp-20h] BYREF
  int v29[7]; // [sp+Ch] [bp-1Ch] BYREF

  v2 = FIELD_U8(a1, 500);
  FIELD_U8(a1, 500) = 0;
  if ( sub_6040E510(LevelInfo_instance) )
  {
    v29[0] = 0;
    v28 = 201326592;
    v27 = 0x100000;
    return sub_608322C0((int *)(a1 + 484), v29, &v28, &v27);
  }
  v5 = FIELD_U32(a1, 492);
  if ( v5 )
    FIELD_U32(a1, 492) = v5 - 1;
  if ( FIELD_U32(a1, 232) )
    goto LABEL_6;
  v12 = FIELD_U32(a1, 208);
  if ( (v12 & 0x8000) != 0 )
  {
    if ( (v12 & 0x2000) != 0 )
    {
      v9 = 505498570;
      goto LABEL_58;
    }
    if ( (v12 & 0x4000) == 0 )
      goto LABEL_6;
    v26 = &dword_60B0AF80;
  }
  else
  {
    if ( (v12 & 0x2000) != 0 )
    {
      v9 = 718964242;
      goto LABEL_58;
    }
    if ( (v12 & 0x4000) == 0 )
      goto LABEL_6;
    v26 = &dword_60B0AF7C;
  }
  v9 = -*v26;
LABEL_58:
  v10 = 0;
  if ( !v9 )
  {
LABEL_6:
    FIELD_U32(a1, 496) = 0;
    FIELD_U32(a1, 492) = 600;
    if ( dword_60C99DD4 && sub_603FD530((unsigned int *)(dword_60C99DD4 + 764)) == 1 )
      FIELD_U32(a1, 492) = 20;
    if ( !LevelInfo_instance )
      goto LABEL_13;
    v6 = FIELD_U8(LevelInfo_instance, 16);
    v7 = v6 == 6;
    if ( v6 == 6 )
      v7 = FIELD_U8(LevelInfo_instance, 17) == 20;
    if ( !v7 || !ActorMgr__instance )
      goto LABEL_13;
    v23 = *(int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                   ActorMgr__instance,
                                                   711,
                                                   FIELD_U32(ActorMgr__instance, 27172));
    if ( ((unsigned int)&dword_60C7B364 & ~(1618532288 << v24) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( !v23 || (v25 = (**v23)(v23, &StageActor_RTTI), v8 = 60, !v25) )
LABEL_13:
      v8 = sub_60792ADC(a1, 30, v3) - 30;
    v9 = 0;
    v10 = 1;
    v11 = FIELD_U32(a1, 492) + v8;
    if ( v11 <= 0 )
      v11 = 0;
    FIELD_U32(a1, 492) = v11;
    v12 = FIELD_U32(a1, 208);
    if ( (v12 & 0x20) != 0 )
      FIELD_U32(a1, 492) = v11 + 40;
  }
  v13 = FIELD_U32(a1, 164);
  v14 = v13 == 6;
  if ( v13 == 6 )
    v14 = FIELD_U32(a1, 472) == 9;
  if ( v14 )
  {
    v15 = FIELD_U8(a1, 541);
    v16 = v12 & 0x20000;
    v17 = v15 == v16 >> 17;
    if ( v15 != v16 >> 17 )
      v17 = FIELD_U8(a1, 542) == 0;
    if ( !v17 )
    {
      FIELD_U32(a1, 484) = FIELD_U32(a1, 484) + (v16 << 13) - 0x20000000;
      sub_6040EBEC(a1 + 408, 0x17u);
    }
  }
  v18 = FIELD_U32(a1, 492);
  if ( v2 && v18 > 0x14 )
  {
    v18 = 20;
    FIELD_U32(a1, 492) = 20;
  }
  FIELD_U32(a1, 488) = v9;
  if ( v18 || v10 | (FIELD_U32(a1, 496) > 59) )
  {
    v19 = FIELD_U32(a1, 164);
    v20 = v19 == 6;
    if ( v19 == 6 )
      v20 = FIELD_U32(a1, 472) == 9;
    if ( v20 )
    {
      v29[0] = 0;
      v28 = 201326592;
      v27 = 0x100000;
      sub_608322C0((int *)(a1 + 484), v29, &v28, &v27);
      sub_6040EC08(a1 + 408, 0x17u);
      v21 = 0;
    }
    else
    {
      v21 = 0;
      v29[0] = 0;
      v28 = 201326592;
      v27 = 0x100000;
      sub_608322C0((int *)(a1 + 484), v29, &v28, &v27);
    }
  }
  else
  {
    v29[0] = 105575387;
    v28 = 0x100000;
    sub_608322C0((int *)(a1 + 484), (int *)(a1 + 488), v29, &v28);
    v21 = 1;
    if ( (FIELD_U8(a1, 210) & 1) != 0 )
    {
      v22 = FIELD_U32(a1, 496);
      if ( v22 <= 59 )
        FIELD_U32(a1, 496) = v22 + 1;
    }
  }
  FIELD_U8(a1, 542) = v21;
  result = (int *)((FIELD_U32(a1, 208) >> 17) & 1);
  FIELD_U8(a1, 541) = (FIELD_U32(a1, 208) & 0x20000) != 0;
  return result;
}
