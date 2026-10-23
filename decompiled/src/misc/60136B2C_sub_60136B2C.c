/* sub_60136B2C
 * address: 0x60136B2C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60136B2C(int a1)
{
  int (__fastcall ***v1)(_DWORD, int *); // r5
  char v2; // r12
  int v3; // r4
  int result; // r0
  float v5; // r1
  float v6; // r2
  Vec3 v7; // [sp+4h] [bp-1Ch] BYREF

  v1 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)&dword_60C823C4 & ~(1611885416 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C823C4) )
  {
    FireballBase_RTTI = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C823C4);
  }
  if ( v1 )
  {
    v3 = (**v1)(v1, &FireballBase_RTTI);
    if ( v3 )
      v3 = (int)v1;
  }
  else
  {
    v3 = 0;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 240))(v3);
  result = FIELD_U8(v3, 6240);
  if ( !FIELD_U8(v3, 6240) )
  {
    v5 = FIELD_F32(v3, 112);
    v6 = FIELD_F32(v3, 116);
    v7.x = FIELD_F32(v3, 108);
    v7.y = v5;
    v7.z = v6;
    if ( sub_60236FD4((float *)(v3 + 584)) == 1 )
      v7.z = 4500.0;
    EffectData_create(4, &v7, 0, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 296))(v3);
    FIELD_U8(v3, 6240) = 1;
    return 1;
  }
  return result;
}
