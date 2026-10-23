/* sub_60027938
 * address: 0x60027938   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60027938(int a1)
{
  int v2; // r1
  int v3; // r5
  char v4; // r12

  sub_607780C4(dword_60CBFA90, 0);
  sub_6077A44C(dword_60CBFA90);
  v2 = FIELD_U32(dword_60C99DE4, 16);
  if ( v2 )
    FIELD_U32(dword_60C99DE4, 16) = v2 - 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6112));
  if ( ((unsigned int)&dword_60C7F664 & ~(1610774976 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7F664) )
  {
    dword_60C7F660 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C7F664);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7F660) == 1 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 700))(v3);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 688))(v3);
  }
  FIELD_U8(a1, 6102) = 0;
  return 6102;
}
