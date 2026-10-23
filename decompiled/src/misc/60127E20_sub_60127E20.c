/* sub_60127E20
 * address: 0x60127E20   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60127E20(int a1)
{
  char v1; // r12
  Actor **i; // r9
  Actor *v3; // r4
  int v4; // r0
  bool v5; // zf

  for ( i = *(Actor ***)(ActorMgr__instance + 27172); i != *(Actor ***)(ActorMgr__instance + 27180); ++i )
  {
    v3 = *i;
    if ( ((unsigned int)&dword_60C7B364 & ~(1611824892 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v3
      && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &StageActor_RTTI) == 1
      && Actor__getProfileId(v3) == 701 )
    {
      if ( ((unsigned int)&dword_60C87138 & ~(1611825000 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C87138) )
      {
        dword_60C87134 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C87138);
      }
      v4 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &dword_60C87134);
      v5 = v4 == 1;
      if ( v4 == 1 )
        v5 = FIELD_U8(v3, 0x13) == 0;
      if ( v5 )
        SE_BOSS_WENDY_RING_DISAPP_ref_12E6D0(v3);
    }
  }
  FIELD_U32(a1, 8148) = 0;
  FIELD_U32(a1, 8152) = 0;
  return 8152;
}
