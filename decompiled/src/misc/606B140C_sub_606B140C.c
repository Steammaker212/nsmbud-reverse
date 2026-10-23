/* sub_606B140C
 * address: 0x606B140C   size: 1020   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B140C(int result)
{
  int v1; // r5
  unsigned int v2; // r1
  int v3; // r4
  char v4; // r12
  int v5; // r0
  bool v6; // zf
  int v7; // r8
  int v8; // r7
  unsigned int v9; // r0
  int v10; // r1
  float v11; // s2
  float v12; // s0
  int v13; // r0
  int v14; // r1
  unsigned int v15; // r1
  int v16; // r0
  float *v17; // r1
  float v18; // s4
  float v19; // s8
  float v20; // s2
  int v21; // r1
  float v22; // s0
  unsigned int v23; // r0
  float *v24; // r1
  float v25; // s8
  float v26; // s12
  float v27; // s2
  float v28; // s6
  float v29; // s4
  char v30; // r12
  int v31; // r0

  v1 = result;
  v2 = FIELD_U32(result, 56);
  if ( !v2 )
    return result;
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  if ( ((unsigned int)&dword_60C7B364 & ~(1617630288 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !v3 || (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) != 1 )
  {
    result = 1;
    FIELD_U32(v1, 68) = 1;
    return result;
  }
  v5 = FIELD_U32(v1, 92);
  v6 = v5 == 1;
  if ( v5 == 1 )
    v6 = FIELD_U8(v1, 134) == 0;
  if ( v6 )
  {
    v11 = FIELD_F32(v3, 108);
    v12 = FIELD_F32(v3, 112);
    v13 = FIELD_U32(v3, 164) + 0x40000000;
    v14 = FIELD_U32(v1, 116) + v13;
    FIELD_U32(v1, 80) = v14;
    if ( FIELD_U8(v1, 133) )
    {
      if ( !FIELD_U8(v1, 132) )
        v14 += 0x80000000;
      v15 = v14 + FIELD_U32(v1, 120) + FIELD_U32(v1, 124);
    }
    else
    {
      if ( !FIELD_U8(v1, 132) )
      {
LABEL_31:
        v23 = FIELD_U32(v1, 120) + v13;
        v24 = (float *)((char *)sinLutTable + ((v23 >> 20) & 0xFF0));
        v25 = (float)(v23 & 0xFFFFFF);
        v26 = FIELD_F32(v1, 112);
        v27 = v11 + (float)(v26 * (float)(v24[2] + (float)((float)(v25 * v24[3]) * 0.000000059605)));
        *(float *)v1 = v27;
        v28 = v24[1];
        v29 = *v24;
        v21 = 1;
        v22 = v12 + (float)(v26 * (float)(v29 + (float)((float)(v25 * v28) * 0.000000059605)));
        FIELD_F32(v1, 4) = v22;
        FIELD_F32(v1, 104) = v27;
        goto LABEL_32;
      }
      v15 = v14 ^ 0x80000000;
    }
    FIELD_U32(v1, 80) = v15;
    goto LABEL_31;
  }
  sub_606D465C(v1, v1 + 80);
  FIELD_U8(v1, 84) = sub_606D4760(v3, FIELD_U32(v1, 92));
  v7 = FIELD_U8(v1, 132);
  v8 = FIELD_U32(v1, 80);
  if ( FIELD_U8(v1, 133) )
  {
    if ( FIELD_U32(v1, 92) == 3 )
    {
      v9 = sub_6000F7B8(
             -(float)(FIELD_F32(v3, 112) - FIELD_F32(v1, 4)),
             -(float)(FIELD_F32(v3, 108) - *(float *)v1));
      v10 = 0x40000000;
      if ( !v7 )
        v10 = -1073741824;
      FIELD_U32(v1, 80) = v10 + v9;
    }
    else
    {
      v16 = v8 + FIELD_U32(v1, 120);
      v8 = v16 + 0x40000000;
      if ( !FIELD_U8(v1, 132) )
        v8 = v16 - 0x40000000;
      FIELD_U32(v1, 80) = v8;
    }
  }
  else if ( FIELD_U8(v1, 132) )
  {
    v8 ^= 0x80000000;
    FIELD_U32(v1, 80) = v8;
  }
  v17 = (float *)((char *)sinLutTable + (((unsigned int)(v8 + 0x40000000) >> 20) & 0xFF0));
  v18 = (float)((v8 + 0x40000000) & 0xFFFFFF);
  FIELD_F32(v1, 104) = *(float *)v1 + (float)((float)(v17[2] + (float)((float)(v17[3] * v18) * 0.000000059605)) * 8.0);
  v19 = v17[1];
  v20 = *v17;
  v21 = FIELD_U32(v1, 92);
  v22 = FIELD_F32(v1, 4) + (float)((float)(v20 + (float)((float)(v18 * v19) * 0.000000059605)) * 8.0);
LABEL_32:
  FIELD_F32(v1, 108) = v22;
  FIELD_U8(v1, 136) = sub_606D46F0(v3, v21);
  *(float *)v1 = *(float *)v1 - FIELD_F32(v1, 36);
  FIELD_F32(v1, 4) = FIELD_F32(v1, 4) - FIELD_F32(v1, 40);
  FIELD_F32(v1, 8) = FIELD_F32(v1, 8) - FIELD_F32(v1, 44);
  result = FIELD_U32(v1, 192);
  if ( result )
  {
    result = FIELD_U32(v1, 92);
    if ( result == 3 )
    {
      if ( ((unsigned int)&dword_60CB1078 & ~(1617631128 << v30) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1078) )
      {
        dword_60CB1074 = (int)&off_60C0AB94;
        _cxa_guard_release(&dword_60CB1078);
      }
      result = (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB1074);
      if ( result == 1 )
      {
        v31 = v3 + 6120;
        return sub_605CDB34(v31);
      }
    }
    else if ( result == 1 )
    {
      if ( ((unsigned int)&dword_60CB0F80 & ~(1617631012 << v30) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(&dword_60CB0F80) )
        {
          dword_60CB0F7C = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60CB0F80);
        }
      }
      result = (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB0F7C);
      if ( result == 1 )
      {
        v31 = v3 + 648;
        return sub_605CDB34(v31);
      }
    }
  }
  return result;
}
