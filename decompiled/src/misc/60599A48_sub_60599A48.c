/* sub_60599A48
 * address: 0x60599A48   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60599A48(int a1)
{
  float v2; // s16
  float *v3; // r5
  float *v4; // r0
  CollisionMgr_Sensor sensor; // [sp+4h] [bp-4Ch] BYREF
  CollisionMgr_Sensor v6; // [sp+10h] [bp-40h] BYREF
  CollisionMgr_Sensor v7; // [sp+1Ch] [bp-34h] BYREF
  CollisionMgr_Sensor v8; // [sp+28h] [bp-28h] BYREF

  sub_605DA874();
  if ( (FIELD_U8(a1, 6262) & 2) != 0 )
  {
    v2 = sub_6059BB74(a1 + 8036);
    v3 = (float *)sub_605DA7BC(a1, v2);
    v4 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 392))(a1);
    if ( v2 >= 0.0 )
    {
      if ( v2 > 1.0 )
        v2 = 1.0;
    }
    else
    {
      v2 = 0.0;
    }
    sensor.a = *v3 + (float)(v2 * (float)(*v4 - *v3));
    sensor.b = v3[1] + (float)(v2 * (float)(v4[1] - v3[1]));
    sensor.c = v3[2] + (float)(v2 * (float)(v4[2] - v3[2]));
    v6.a = v3[3] + (float)(v2 * (float)(v4[3] - v3[3]));
    v6.b = v3[4] + (float)(v2 * (float)(v4[4] - v3[4]));
    v6.c = v3[5] + (float)(v2 * (float)(v4[5] - v3[5]));
    v7.a = v3[6] + (float)(v2 * (float)(v4[6] - v3[6]));
    v7.b = v3[7] + (float)(v2 * (float)(v4[7] - v3[7]));
    v7.c = v3[8] + (float)(v2 * (float)(v4[8] - v3[8]));
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &sensor, 3);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v6, 2);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v7, 0);
    v8.b = v7.b;
    v8.a = v7.a;
    v8.c = -v7.c;
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v8, 1);
  }
}
