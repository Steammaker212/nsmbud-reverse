/* sub_6072E0A4
 * address: 0x6072E0A4   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072E0A4(int a1)
{
  int (__fastcall ****v1)(_DWORD, int *); // r11
  int (__fastcall ***v2)(_DWORD, int *); // r4
  char v3; // r12
  char v4; // r12
  int v5; // r5
  int v6; // r6
  int (__fastcall ***v7)(_DWORD, int *); // r7
  int v8; // r0
  int result; // r0

  v1 = (int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                               ActorMgr__instance,
                                               829,
                                               *(_DWORD *)(ActorMgr__instance + 27172));
  v2 = *v1;
  if ( ((unsigned int)&dword_60CBD938 & ~(1618141420 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD938) )
  {
    dword_60CBD934 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CBD938);
  }
  if ( v2 && (**v2)(v2, &dword_60CBD934) == 1 )
  {
    v5 = 0;
    v6 = a1 + 6356;
    do
    {
      v7 = v1[v5];
      if ( ((unsigned int)&dword_60CBD938 & ~(1618141608 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD938) )
      {
        dword_60CBD934 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60CBD938);
      }
      if ( !v7 )
        break;
      v8 = (**v7)(v7, &dword_60CBD934);
      if ( v8 )
        v8 = (int)v7;
      if ( v8 && !*(_DWORD *)(v6 + 4 * v5) )
        *(_DWORD *)(v6 + 4 * v5) = FIELD_U32(v8, 8);
      if ( !v8 )
        break;
      ++v5;
    }
    while ( v5 < 2 );
  }
  result = FIELD_U32(a1, 6356);
  if ( result )
    result = -1;
  if ( (FIELD_U32(a1, 6360) != 0) != result )
    return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBDAA8);
  return result;
}
