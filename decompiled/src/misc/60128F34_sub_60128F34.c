/* sub_60128F34
 * address: 0x60128F34   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60128F34(unsigned int *a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r5
  char v5; // r12
  int v6; // r4
  char v7; // r12

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2037]);
  if ( ((unsigned int)&dword_60C87138 & ~(1611829104 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C87138) )
  {
    dword_60C87134 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C87138);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C87134) == 1 )
    FIELD_U8(v2, 6104) = 1;
  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2038]);
  if ( ((unsigned int)&dword_60C87138 & ~(1611829264 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C87138) )
  {
    dword_60C87134 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C87138);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C87134) == 1 )
    FIELD_U8(v4, 6104) = 1;
  v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2039]);
  if ( ((unsigned int)&dword_60C87138 & ~(1611829424 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C87138) )
  {
    dword_60C87134 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C87138);
  }
  if ( v6 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C87134) == 1 )
      FIELD_U8(v6, 6104) = 1;
  }
}
