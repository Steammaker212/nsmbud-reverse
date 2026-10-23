/* FinalBowser__executeState_DieFumi
 * address: 0x60078714   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600260D8
// 
// Overridden by: None
int __fastcall FinalBowser__executeState_DieFumi(_DWORD *a1)
{
  _DWORD *v2; // r5
  int *v3; // r1
  unsigned int v4; // r0
  int v5; // r6
  int v6; // r5
  int result; // r0

  v2 = a1 + 1778;
  j_ModelWrapper_updateAnims(a1[1778]);
  v3 = *(int **)(*v2 + 12);
  v4 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v4 )
    v3 += v4;
  v5 = *v3;
  v6 = *v3 + 4;
  if ( sub_60418548(v6) )
  {
    AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 1, 0, 0);
    sub_60813430(a1 + 1583, "SE_BOSS_KOOPA_L_FOOT", 0);
  }
  if ( sub_60418548(v6) )
  {
    AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 1, 0, 0);
    sub_60813430(a1 + 1583, "SE_BOSS_KOOPA_L_FOOT", 0);
  }
  if ( sub_60418548(v6) )
  {
    AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 1, 0, 0);
    sub_60813430(a1 + 1583, "SE_BOSS_KOOPA_L_FOOT", 0);
  }
  if ( sub_60418548(v6) )
    sub_60813430(a1 + 1583, "SE_VOC_KP_L_FALLING", 0);
  if ( sub_60418548(v6) )
    AreaRumbleMgr_rumble2(AreaRumbleMgr_instance, 8, 3, 0);
  if ( sub_60418548(v6) )
    sub_60400BE4(AreaRumbleMgr_instance);
  if ( sub_60418548(v6) )
    sub_60813430(a1 + 1583, "SE_VOC_KP_L_LAST_DAMAGE", 0);
  result = FIELD_U8(v5, 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C816D0);
  return result;
}
