/* MovementHandler_findMovementController_helper
 * address: 0x606B0E7C   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MovementHandler_findMovementController_helper(float *a1, float *a2)
{
  char v2; // r12
  float v5; // s16
  float v6; // s18
  float v7; // s20
  float v8; // s22
  float v9; // r7
  float v10; // r8
  float v11; // s16
  float v12; // s18
  int v13; // r0
  int v14; // r1
  int *v15; // r4
  float v16; // s22
  float v17; // s20
  bool v18; // zf
  char v19; // r12
  int result; // r0
  float v21; // s0
  float v22; // s2
  char v23; // r12
  float *v24; // r0
  float *v25; // r1

  v5 = a1[1];
  v6 = *a1;
  v7 = a1[9];
  v8 = a1[10];
  v9 = a2[27];
  v10 = a2[28];
  if ( ((unsigned int)&dword_60CB0F80 & ~(1617628852 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0F80) )
  {
    dword_60CB0F7C = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB0F80);
  }
  v11 = v5 + v8;
  v12 = v6 + v7;
  if ( (**(int (__fastcall ***)(float *, int *))a2)(a2, &dword_60CB0F7C) )
  {
    v13 = sub_605CDB0C((int)(a2 + 162));
    *((_DWORD *)a1 + 32) = v13;
    v15 = (int *)(a1 + 23);
    v14 = *((_DWORD *)a1 + 23);
    if ( (v14 | 2) == 3 )
      *((_DWORD *)a1 + 32) = v13 + 0x40000000;
  }
  else
  {
    v15 = (int *)(a1 + 23);
    v14 = *((_DWORD *)a1 + 23);
  }
  v16 = v10 - v11;
  v17 = v9 - v12;
  if ( v14 == 3 )
  {
    a1[28] = sqrtf((float)(v16 * v16) + (float)(v17 * v17));
    *((_DWORD *)a1 + 30) = sub_6000F7B8(-v16, -v17);
    a1[29] = a1[20];
    a1[31] = 2.0;
    if ( ((unsigned int)&dword_60CB1078 & ~(1617629288 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1078) )
    {
      dword_60CB1074 = (int)&off_60C0AB94;
      _cxa_guard_release(&dword_60CB1078);
    }
    v24 = (float *)(**(int (__fastcall ***)(float *, int *))a2)(a2, &dword_60CB1074);
    if ( v24 )
      v24 = a2;
    v25 = v24 + 1559;
    result = (int)(v24 + 1558);
    v21 = *(float *)result;
    v22 = *v25;
    goto LABEL_27;
  }
  v18 = v14 == 1;
  if ( v14 == 1 )
    v18 = *((_BYTE *)a1 + 134) == 0;
  if ( !v18 )
  {
    *((_DWORD *)a1 + 30) = sub_6000F7B8(-v16, -v17);
    result = *v15;
    if ( *v15 == 2 )
    {
      if ( ((unsigned int)&dword_60CB10C0 & ~(1617629084 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60CB10C0) )
      {
        dword_60CB10BC = (int)&off_60C0AB94;
        _cxa_guard_release(&dword_60CB10C0);
      }
      result = (**(int (__fastcall ***)(float *, int *))a2)(a2, &dword_60CB10BC);
      if ( result )
        result = (int)a2;
      v10 = FIELD_F32(result, 6152);
      v9 = FIELD_F32(result, 6148);
    }
    v21 = v9;
    v22 = v10;
LABEL_27:
    a1[24] = v12 - v21;
    a1[25] = v11 - v22;
    return result;
  }
  a1[28] = sqrtf((float)(v16 * v16) + (float)(v17 * v17));
  *((_DWORD *)a1 + 30) = sub_6000F7B8(-v16, -v17);
  a1[29] = a1[20];
  a1[31] = 2.0;
  return 0x40000000;
}
