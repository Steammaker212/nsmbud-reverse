/* sub_60621D28
 * address: 0x60621D28   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60621D28(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r0
  bool v5; // zf

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6320));
  if ( ((unsigned int)dword_60CB3A50 & ~(1617042788 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CB3A50) )
  {
    dword_60CB3A4C = (int)&off_60C1138C;
    _cxa_guard_release(dword_60CB3A50);
  }
  if ( v2 )
  {
    v4 = (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60CB3A4C);
    v5 = v4 == 1;
    if ( v4 == 1 )
      v5 = FIELD_U8(v2, 19) == 0;
    if ( v5 )
    {
      FIELD_U8(v2, 6324) = 1;
      if ( FIELD_U32(a1, 6652) == 1 )
        FIELD_U8(v2, 7388) = 1;
    }
  }
}
