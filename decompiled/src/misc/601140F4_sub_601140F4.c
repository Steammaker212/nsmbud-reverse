/* sub_601140F4
 * address: 0x601140F4   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601140F4(int a1)
{
  char v1; // r12
  int v3; // r5
  StateBase *CurrentState; // r0
  int v5; // r6
  int v6; // r5
  _BYTE *v7; // r0
  void (*v8)(void); // r2

  FIELD_U32(a1, 144) = 1067030938;
  FIELD_U32(a1, 148) = 1067030938;
  FIELD_U32(a1, 152) = 1067030938;
  v3 = FIELD_U32(a1, 7244);
  if ( ((unsigned int)&dword_60C86B30 & ~(1611743528 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
  {
    dword_60C86B2C = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C86B30);
  }
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C86B2C) == 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v5 != (*(int (**)(void))(dword_60C86D94 + 8))() )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C86D94);
    }
  }
  v6 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v6 == (*(int (**)(void))(dword_60C869A4 + 8))() )
  {
    FIELD_U32(a1, 7648) = 2;
    v7 = *(_BYTE **)(a1 + 7608);
    if ( v7[7659] == 1 )
    {
      v8 = *(void (**)(void))(*(_DWORD *)v7 + 192);
      goto LABEL_14;
    }
    if ( !v7[7659] )
    {
      v8 = *(void (**)(void))(*(_DWORD *)v7 + 192);
LABEL_14:
      v8();
    }
  }
  else
  {
    PlayerLookTargetList_add(PlayerLookTargetList_instance, a1 + 6644);
    FIELD_U32(a1, 6676) |= 1u;
    FIELD_U8(a1, 7653) = 0;
    FIELD_U32(a1, 7648) = 1;
  }
  FIELD_U8(a1, 535) = 1;
  return 1;
}
