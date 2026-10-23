/* sub_600F17C0
 * address: 0x600F17C0   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F17C0(float *a1)
{
  char v1; // r12
  unsigned int v3; // r1
  int (__fastcall ***v4)(_DWORD, int *); // r5
  int v5; // r2
  int (__fastcall ***v6)(_DWORD, int *); // r0
  int v7; // r1
  int v8; // r0
  int v9; // r2
  int *v10; // r6
  float v11; // r1
  int *v12; // r1
  Vec3 v14; // [sp+0h] [bp-20h] BYREF

  v3 = *((_DWORD *)a1 + 1784);
  if ( v3 )
    v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
  else
    v4 = 0;
  if ( ((unsigned int)dword_60C856D8 & ~(1611601936 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C856D8) )
  {
    dword_60C856D4 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C856D8);
  }
  if ( v4 && (**v4)(v4, &dword_60C856D4) == 1 )
  {
    if ( (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 716))(a1) == 1 )
    {
      sub_600F5A20(v4, 3, *((_DWORD *)a1 + 2109));
      v5 = *((_DWORD *)a1 + 2109);
      v6 = v4;
      v7 = 3;
    }
    else
    {
      v8 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 720))(a1);
      v10 = (int *)(a1 + 2109);
      v9 = *((_DWORD *)a1 + 2109);
      if ( v8 == 1 )
      {
        sub_600F5A20(v4, 2, v9);
        v5 = *v10;
        v6 = v4;
        v7 = 2;
      }
      else
      {
        sub_600F5A20(v4, 1, v9);
        v5 = *v10;
        v6 = v4;
        v7 = 1;
      }
    }
    sub_600F589C(v6, v7, v5);
  }
  v11 = a1[28];
  v14.x = a1[27];
  v14.y = v11;
  v14.z = 4500.0;
  v14.y = v11 + (float)((float)((float)*((int *)a1 + 2109) * 32.0) + 16.0);
  v12 = dword_600F19AC;
  if ( !*((_DWORD *)a1 + 20) )
    v12 = &dword_600F19AC[1];
  v14.x = v14.x + *(float *)v12;
  return EffectData_create(332, &v14, 0, 0);
}
