/* SumoBroLightning_vf8
 * address: 0x60335484   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SumoBroLightning_vf8(MultiStateActor *a1)
{
  float y; // r1
  int v3; // r0
  Vec3 v5; // [sp+10h] [bp-20h] BYREF
  int v6; // [sp+1Ch] [bp-14h] BYREF

  StateMgr__execute(&FIELD_U32(a1, 0x17C4));
  y = FIELD_F32(a1, 0x70);
  v5.x = FIELD_F32(a1, 0x6C);
  v5.y = y;
  v5.z = 4500.0;
  sub_60237208((int)&a1[1]._._.aCollider.field_C4, &v5, 0, 0);
  if ( (FIELD_U32(a1, 0x14) & 0x100) != 0 )
  {
    ((void (__fastcall *)(int *, Vec3 *, Vec3 *, _DWORD))checkLiquidCollisions)(
      &v6,
      &v5,
      &FIELD_U32(a1, 0x6C),
      (unsigned __int8)FIELD_U8(a1, 0x56));
    if ( v6 != 5 || FIELD_F32(a1, 0x70) >= v5.x )
      LightSource_update2((LightSource *)&a1[1]._._.aCollider.info.distToEdge, &FIELD_U32(a1, 0x6C), 0, 0, 0, 0, 0, 0);
  }
  StageActor__cullCheck(&FIELD_U32(a1, 0x0), 0);
  if ( v3 == 1 )
    (*(void (__fastcall **)(MultiStateActor *))(FIELD_U32(a1, 0x0) + 224))(a1);
  return 1;
}
