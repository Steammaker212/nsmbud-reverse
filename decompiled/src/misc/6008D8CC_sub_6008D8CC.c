/* sub_6008D8CC
 * address: 0x6008D8CC   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008D8CC(int a1)
{
  int v2; // r0
  unsigned int v3; // r0
  int v4; // r0
  int v5; // r5
  char v6; // r12
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 6304);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "jc_getin";
  sub_60421AE4(v2, v8, 0);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 780))(a1, 0);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 9356) = 0;
  FIELD_U32(a1, 9352) = 0;
  v3 = FIELD_U32(a1, 15240);
  if ( v3 <= 3 )
  {
    v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
    if ( v4 )
      sub_607B8A08(v4, a1);
    ((void (__fastcall *)(int))loc_60093838)(a1);
  }
  v5 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C81738 & ~(1611192764 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C81734) == 1 )
    FIELD_U8(v5, 25364) = 1;
  if ( FIELD_U8(a1, 15260) )
  {
    sub_6040810C(dword_60C9A1E8);
    FIELD_U8(a1, 15260) = 0;
  }
  return sub_60813430(a1 + 9476, "SE_BOSS_JR_CROWN_RIDE", 0);
}
