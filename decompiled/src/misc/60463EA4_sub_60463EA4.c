/* sub_60463EA4
 * address: 0x60463EA4   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60463EA4(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  unsigned int v4; // r0
  float v5; // s18
  float *v6; // r1
  float v7; // s0
  float v8; // s20
  float v9; // s16
  float v10; // s22
  float v11; // s26
  float v12; // s24
  float v13; // s0

  v3 = a1[1666];
  v2 = a1 + 1666;
  if ( v3 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a1 + 224))(a1);
    CollisionActor__handleGravity((CollisionActor *)a1);
    v4 = sub_6014C4A4((int)(a1 + 162));
    v5 = *((float *)a1 + 30);
    v6 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
    v7 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
    v8 = v6[2] + (float)(v7 * v6[3]);
    v9 = *v6 + (float)(v6[1] * v7);
    if ( *((_BYTE *)a1 + 6054) || *((_BYTE *)a1 + 6053) )
      v5 = v5 * 0.5;
    v10 = *((float *)a1 + 31);
    v11 = *((float *)a1 + 1506);
    v12 = *((float *)a1 + 1507);
    sub_600037A0((int)a1);
    *((float *)a1 + 27) = *((float *)a1 + 27) + (float)((float)(v11 + (float)(v8 * v5)) + *((float *)a1 + 1500));
    v13 = (float)((float)(v10 + (float)(v9 * v5)) + v12) + *((float *)a1 + 28);
    *((float *)a1 + 28) = v13;
    CollisionMgr_process((_BYTE *)a1 + 648, v13);
    if ( *((_BYTE *)a1 + 6255) )
    {
      if ( *((float *)a1 + 31) < 0.0 )
        a1[31] = 1082130432;
    }
    sub_60462888((int)a1, 1);
    return SE_OBJ_CMN_SPLASH_ref_462370((int)a1);
  }
  else
  {
    a1[36] = 1065353216;
    a1[37] = 1065353216;
    *v2 = 1;
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 244))(a1);
  }
}
