/* sub_605E42F0
 * address: 0x605E42F0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_605E42F0(int a1))(_DWORD, int *)
{
  int v1; // r4
  int v2; // r1
  bool v3; // zf
  int (__fastcall ***v4)(_DWORD, int *); // r5
  char v5; // r12

  v1 = 0;
  v2 = FIELD_U8(a1, 6261);
  v3 = (v2 & 8) == 0;
  if ( (v2 & 8) != 0 )
  {
    v2 = FIELD_U32(a1, 620);
    v3 = v2 == 0;
  }
  if ( !v3 )
  {
    v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v2, 8));
    if ( ((unsigned int)&dword_60C7B408 & ~(1616790336 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    if ( v4 )
    {
      v1 = (**v4)(v4, &dword_60C7B404);
      if ( v1 )
        return v4;
    }
  }
  return (int (__fastcall ***)(_DWORD, int *))v1;
}
