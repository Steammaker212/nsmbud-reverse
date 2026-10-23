/* jc_quake_st_ref_3
 * address: 0x600FDE00   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_quake_st_ref_3(int a1)
{
  int v2; // r0
  int v3; // r5
  char v4; // r12
  float v5; // r1
  int v6; // r5
  Vec2 v8; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 6304);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "jc_quake_st";
  sub_60421AE4(v2, &position, 0);
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  if ( ((unsigned int)dword_60C81768 & ~(1611652712 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
  {
    dword_60C81764 = (int)&off_60BC2CB4;
    _cxa_guard_release(dword_60C81768);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C81764) == 1 )
    sub_60421AD4(FIELD_U32(v3, 7100));
  FIELD_U16(a1, 6276) = 10;
  v5 = FIELD_F32(a1, 112);
  v6 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v5;
  mapPositionToScreen(&v8, &position);
  return BasicSoundActor1_playSound(v6, "SE_VOC_JR_GO", (int)&v8, 0);
}
