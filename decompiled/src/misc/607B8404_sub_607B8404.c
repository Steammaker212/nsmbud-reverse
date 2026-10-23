/* sub_607B8404
 * address: 0x607B8404   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B8404(int a1)
{
  int v2; // r4
  bool v3; // zf
  int v4; // r6
  char v5; // r12
  bool v6; // zf

  v2 = 0;
  v3 = FIELD_U8(dword_60CC6D8C, 17) == 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v3 = (FIELD_U8(a1, 1217) & 0x10) == 0;
  if ( !v3 )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
    if ( ((unsigned int)&dword_60C7B374 & ~(1618707556 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v4
      && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B370) == 1
      && (FIELD_U8(v4, 6900) & 2) != 0
      && (FIELD_U8(v4, 6904) & 1) != 0 )
    {
      v6 = (FIELD_U8(v4, 1207) & 2) == 0;
      if ( (FIELD_U8(v4, 1207) & 2) == 0 )
        v6 = (FIELD_U8(v4, 1217) & 0x20) == 0;
      if ( v6 )
      {
        v2 = 1;
        FIELD_U32(a1, 9964) = 30;
        (*(void (__fastcall **)(int, int, _DWORD, _DWORD, float, float))(*(_DWORD *)a1 + 748))(a1, 1, 0, 0, 0.0, 0.0);
      }
    }
  }
  return v2;
}
