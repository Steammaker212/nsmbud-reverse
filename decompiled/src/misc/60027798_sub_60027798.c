/* sub_60027798
 * address: 0x60027798   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60027798(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  int v4; // r4
  char v5; // r12
  int v6; // r0

  v3 = (_DWORD *)(a1 + 6104);
  v2 = FIELD_U32(a1, 6104);
  if ( v2 == 1 )
  {
    v6 = FIELD_U32(a1, 6116);
    FIELD_U32(a1, 6116) = v6 - 1;
    if ( v6 <= 1 )
      FIELD_U8(a1, 6100) = 1;
    if ( FIELD_U8(a1, 6101) )
      sub_6077A918(dword_60CBFA90, 0);
    if ( FIELD_U8(a1, 6100) )
    {
      FIELD_U32(dword_60C99D88, 32) = 0;
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&unk_60C7F6C4);
    }
  }
  else if ( !v2 && sub_6077A158(dword_60CBFA90) == 1 )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6112));
    if ( ((unsigned int)&dword_60C7F664 & ~(1610774536 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7F664) )
    {
      dword_60C7F660 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C7F664);
    }
    if ( v4 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7F660) == 1 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 692))(v4);
        *v3 = 1;
      }
    }
  }
}
