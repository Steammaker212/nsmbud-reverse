/* sead__NinJoyNpadDevice__calc
 * address: 0x608E100C   size: 572   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sead__NinJoyNpadDevice__calc(int a1, const unsigned int *a2)
{
  int v2; // r11
  unsigned int v3; // r5
  unsigned int result; // r0
  bool v5; // zf
  int v6; // r0
  unsigned int v7; // r7
  unsigned int v8; // r10
  unsigned int v9; // r6
  char NpadStyleSet; // r0
  int v11; // r9
  unsigned int v12; // r8
  int *v13; // r8
  int v14; // t1
  int VibrationDeviceHandles; // r0
  int *v16; // r7
  unsigned int v17; // r4
  unsigned int v18; // r0
  unsigned int v19; // r4
  unsigned int v20; // r0
  _DWORD *v21; // r10
  int v22; // t1
  unsigned int v23; // r7
  unsigned int v24; // r1
  int v25; // [sp+4h] [bp-2Ch]
  _DWORD v26[10]; // [sp+8h] [bp-28h] BYREF

  v2 = a1;
  v3 = 0;
  result = FIELD_U32(a1, 20);
  v25 = v2;
  do
  {
    v5 = v3 == result;
    v6 = v3;
    v7 = v3;
    if ( v5 )
    {
      v6 = 32;
      v7 = 8;
    }
    v26[0] = v6;
    if ( v7 >= 9 )
      v7 = 0;
    v8 = v2 + 3736 * v7;
    v9 = v8 + 64;
    NpadStyleSet = nn__hid__GetNpadStyleSet((nn__hid *)v26, a2);
    if ( (NpadStyleSet & 4) != 0 )
    {
      nn__hid__GetNpadStates_9AE618(v8 + 64, 16, v26);
      v11 = 2;
    }
    else if ( (NpadStyleSet & 1) != 0 )
    {
      nn__hid__GetNpadStates_9AE624(v8 + 64, 16, v26);
      v11 = 0;
    }
    else if ( (NpadStyleSet & 8) != 0 )
    {
      nn__hid__GetNpadStates_9AE630(v8 + 64, 16, v26);
      v11 = 3;
    }
    else if ( (NpadStyleSet & 0x10) != 0 )
    {
      nn__hid__GetNpadStates_9AE63C(v8 + 64, 16, v26);
      v11 = 4;
    }
    else
    {
      v11 = 5;
      if ( (NpadStyleSet & 2) != 0 )
      {
        nn__hid__GetNpadStates(v8 + 64, 16, v26);
        v11 = 1;
      }
    }
    v12 = v2 + 4 * v7;
    v14 = FIELD_U32(v12, 28);
    v13 = (int *)(v12 + 28);
    if ( v14 != v11 )
    {
      if ( v11 == 5 )
      {
        FIELD_U32(v8, 704) = 0;
        FIELD_U32(v8, 708) = 0;
      }
      else
      {
        FIELD_U32(v8, 704) = nn__hid__GetSixAxisSensorHandles(v8 + 712, 2, v26, 1 << v11);
        VibrationDeviceHandles = nn__hid__GetVibrationDeviceHandles(v8 + 3792, 2, v26, 1 << v11);
        FIELD_U32(v8, 708) = VibrationDeviceHandles;
        v16 = (int *)(v8 + 708);
        a2 = *(const unsigned int **)(v8 + 704);
        if ( (int)a2 >= 1 )
        {
          v17 = 0;
          do
          {
            v18 = 0;
            if ( v17 < 2 )
              v18 = v17;
            nn__hid__StartSixAxisSensor(v8 + 4 * v18 + 712);
            ++v17;
          }
          while ( (signed int)v17 < FIELD_U32(v8, 704) );
          VibrationDeviceHandles = *v16;
          v2 = v25;
        }
        if ( VibrationDeviceHandles >= 1 )
        {
          v19 = 0;
          do
          {
            v20 = 0;
            if ( v19 < 2 )
              v20 = v19;
            nn__hid__InitializeVibrationDevice(v8 + 4 * v20 + 3792);
            ++v19;
          }
          while ( (int)v19 < *v16 );
        }
      }
      *v13 = v11;
    }
    v22 = FIELD_U32(v8, 704);
    v21 = (_DWORD *)(v8 + 704);
    if ( v22 >= 1 )
    {
      v23 = 0;
      do
      {
        v24 = 0;
        if ( v23 < 2 )
          v24 = v23;
        nn__hid__GetSixAxisSensorStates(v9 + 1536 * v24 + 656, 16, v9 + 4 * v24 + 648);
        ++v23;
      }
      while ( (signed int)v23 < *v21 );
    }
    result = FIELD_U32(v2, 20);
    ++v3;
  }
  while ( v3 <= result );
  return result;
}
