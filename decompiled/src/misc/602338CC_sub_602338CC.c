/* sub_602338CC
 * address: 0x602338CC   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602338CC(int *a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  int v11; // r0
  int v12; // r2
  float v13; // s0
  float v14; // s0
  int v16; // [sp+4h] [bp-1Ch] BYREF
  int speed; // [sp+8h] [bp-18h] BYREF
  int target; // [sp+Ch] [bp-14h] BYREF
  float v19; // [sp+10h] [bp-10h] BYREF
  float v20[3]; // [sp+14h] [bp-Ch] BYREF
  _DWORD v21[6]; // [sp+20h] [bp+0h] BYREF

  v21[3] = a5[3];
  v21[4] = a5[7];
  v21[5] = a5[11];
  sub_6090A308(a3, v21);
  sub_6090BED8(a4, v20, v21);
  v11 = a1[2];
  if ( v11 < 1 )
  {
    v12 = a8;
  }
  else
  {
    v12 = 0;
    a1[2] = v11 - 1;
  }
  v19 = 0.0;
  if ( (v12 & a7) != 0 || a2 == 1 )
  {
    target = 0;
    if ( ((int (__fastcall *)(int, int *, float *, float))loc_6023586C)(a6, &target, &v19, v20[0]) == 1 )
    {
      v14 = -1.0;
      if ( (float)(v19 - v20[0]) >= -1.0 )
      {
        v14 = v19 - v20[0];
        if ( (float)(v19 - v20[0]) > 1.0 )
          v14 = 1.0;
      }
      speed = (int)(float)(v14 * 536870000.0);
      if ( a2 == 1 )
      {
        *a1 = (int)(float)(v14 * 536870000.0);
        a1[1] = target;
        goto LABEL_20;
      }
      v16 = 35791394;
      moveValueTo(a1, &speed, &v16);
      if ( a1[1] != target )
      {
        a1[1] = target;
        a1[2] = ((120 * (unsigned __int64)sead__Random__getU32((void *)sead__GlobalRandom__sInstance)) >> 32) + 120;
      }
    }
    if ( a2 != 1 )
      return *a1;
LABEL_20:
    a1[2] = ((120 * (unsigned __int64)sead__Random__getU32((void *)sead__GlobalRandom__sInstance)) >> 32) + 120;
    return *a1;
  }
  if ( a7 == 1 )
  {
    v13 = -1.0;
    v19 = *(float *)(a6 + 4 * a1[1] + 4);
    if ( (float)(v19 - v20[0]) >= -1.0 )
    {
      v13 = v19 - v20[0];
      if ( (float)(v19 - v20[0]) > 1.0 )
        v13 = 1.0;
    }
    speed = 35791394;
    target = (int)(float)(v13 * 536870000.0);
    moveValueTo(a1, &target, &speed);
  }
  return *a1;
}
