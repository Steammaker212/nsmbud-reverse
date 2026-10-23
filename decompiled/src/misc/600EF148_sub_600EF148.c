/* sub_600EF148
 * address: 0x600EF148   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EF148(int a1)
{
  int v2; // r5
  int v3; // r0
  float v4; // r1
  char v5; // r12
  unsigned int v6; // r1
  Vec3 v8; // [sp+4h] [bp-1Ch] BYREF

  v2 = 0;
  v3 = FIELD_U32(a1, 7096);
  LODWORD(v8.x) = &sead__SafeStringBase__vtable;
  LODWORD(v8.y) = "jump_quake_ed";
  sub_60421AD4(v3);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 1, 0, 0);
  sub_600F14EC(a1);
  sub_60813430(a1 + 6332, "SE_VOC_MOR_QUAKE", 0);
  v4 = FIELD_F32(a1, 112);
  v8.x = FIELD_F32(a1, 108);
  v8.y = v4;
  v8.z = 4500.0;
  EffectData_create(319, &v8, 0, 0);
  sub_60813430(a1 + 6332, "SE_BOSS_CMN_FAT_LAND_QUAKE", 0);
  v6 = FIELD_U32(a1, 7136);
  if ( v6 )
    v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v6);
  if ( ((unsigned int)dword_60C856D8 & ~(1611592296 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C856D8) )
  {
    dword_60C856D4 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C856D8);
  }
  if ( !v2 || !(**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C856D4) )
  {
    FIELD_U32(a1, 8432) = FIELD_U32(a1, 80) ^ 1;
    v2 = sub_600F1664(a1);
  }
  (*(void (__fastcall **)(int, void *))(*(_DWORD *)v2 + 192))(v2, &unk_60C85A18);
  FIELD_U16(a1, 6276) = 60;
  return 6276;
}
