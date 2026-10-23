/* KaniboTama__executeState_Unk1
 * address: 0x603107EC   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall KaniboTama__executeState_Unk1(Enemy *a1)
{
  int v2; // r0
  Enemy *result; // r0
  char *v4; // r6
  int v5; // r1
  int v6; // r5
  float v7; // s0
  int v8; // [sp+4h] [bp-14h] BYREF

  CollisionActor__handleSpeed(&FIELD_U32(a1, 0x0));
  CollisionActor__sub_600034C8(&FIELD_U32(a1, 0x0));
  v2 = *(_DWORD *)&FIELD_U8(a1, 0x288)[2224];
  if ( (v2 & 0x11) == 1
    || (v2 & 0x440000) != 0 && (v2 & 0x10000000) == 0
    || (v2 & 0x880000) != 0 && (v2 & 0x20000000) == 0 )
  {
    return (Enemy *)KaniboTama__sub_60310F74((int)a1, 0);
  }
  FIELD_U8(a1, 0x17A6) = 0;
  v4 = &FIELD_U8(a1, 0x17A6);
  ((void (__fastcall *)(int *, _DWORD, Vec3 *, _DWORD))checkLiquidCollisions)(
    &v8,
    0,
    &FIELD_U32(a1, 0x6C),
    (unsigned __int8)FIELD_U8(a1, 0x56));
  if ( v8 )
    sub_600038DC(a1);
  v5 = 0x8000000;
  if ( *v4 )
    v5 = 80478208;
  FIELD_U32(a1, 0x9C) -= v5;
  v6 = (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 148))(a1);
  v7 = (float)(a1[1]._._._.position.z * flt_60AF2060[LODWORD(a1[1]._._._.position.x)])
     * (float)byte_60AFE3F4[FIELD_U32(a1, 0x50)];
  if ( *v4 )
    v7 = v7 * 0.66;
  FIELD_F32(a1, 0x78) = v7;
  ((void (__fastcall *)(float, float, float, float))loc_60832560)(1.0, 0.04, 0.1, 0.01);
  result = (Enemy *)&FIELD_F32(a1, 0x7C);
  if ( v6 != 1 )
    return (Enemy *)((_DWORD *(__fastcall *)(Enemy *, float, float, float, float))loc_60832560)(
                      result,
                      0.0,
                      0.2,
                      0.1,
                      0.01);
  FIELD_U32(result, 0x0) = 0;
  return result;
}
