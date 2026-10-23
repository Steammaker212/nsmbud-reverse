/* sub_6079E27C
 * address: 0x6079E27C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6079E27C(int a1, int a2, int a3)
{
  unsigned int *v4; // r5
  _BYTE *v5; // r5
  char v6; // r12

  FIELD_U32(a1, 11408) = a2;
  v4 = (unsigned int *)(a1 + 11408);
  FIELD_U32(a1, 12160) = a3;
  Player_changeState(a1, (StateBase *)&dword_60CC4DAC, 0);
  v5 = (_BYTE *)ActorMgrRelated_getById(ActorMgr__instance + 27168, *v4);
  if ( ((unsigned int)&dword_60C7B364 & ~(1618600668 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v5 )
  {
    if ( (**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &StageActor_RTTI) == 1 )
    {
      (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v5 + 92))(v5, a1);
      if ( v5[533] == 1 )
      {
        if ( dword_60C99DD4 )
          sub_603FFD04(dword_60C99DD4 + 852);
      }
    }
  }
}
