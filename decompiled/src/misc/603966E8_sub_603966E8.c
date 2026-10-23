/* sub_603966E8
 * address: 0x603966E8   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603966E8(int a1)
{
  int v2; // r5
  char v3; // r12
  _BOOL4 v4; // r0
  bool v5; // zf
  int v6; // r1

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6572));
  if ( ((unsigned int)&dword_60C7B408 & ~(1614374692 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B404) == 1 )
  {
    v4 = 0;
    if ( (FIELD_U8(v2, 6900) & 1) == 0 )
      v4 = (FIELD_U8(v2, 1219) & 1) == 0;
    v5 = !v4;
    if ( !v4 )
      v5 = FIELD_U8(a1, 6522) == 0;
    if ( v5 && !sub_60377C74(dword_60C96478) )
    {
      v6 = FIELD_S8(a1, 84);
      if ( (FIELD_U8(v2, 1219) & 1) != 0 )
        SE_EMY_SHADOW_JITABATA_ref_2_helper_377D44(dword_60C96478, v6);
      else
        sub_60377CF4(dword_60C96478, v6);
    }
  }
}
