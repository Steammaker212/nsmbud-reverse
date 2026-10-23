/* sub_6006B1C0
 * address: 0x6006B1C0   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6006B1C0(int a1)
{
  int v1; // r4
  char v2; // r12
  _BYTE *v3; // r4
  int v4; // t1

  FIELD_U8(a1, 25365) = 1;
  v1 = *(_DWORD *)sub_60008598(ActorMgr__instance, 373, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C81104 & ~(1611051528 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( v1 && (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C81100) == 1 )
  {
    v4 = FIELD_U8(v1, 15262);
    v3 = (_BYTE *)(v1 + 15262);
    if ( v4 )
      *v3 = 0;
  }
}
