/* sub_6063328C
 * address: 0x6063328C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063328C(int a1)
{
  unsigned int v2; // r0
  StateMgr *v3; // r0
  int *v4; // r1
  int v5; // r0
  char v6; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r5
  int v8; // r6

  v2 = FIELD_U32(a1, 20);
  if ( (v2 & 0x100) != 0 )
  {
    FIELD_U8(a1, 6112) = v2 >> 20;
    v5 = sub_606D41DC((unsigned __int8)(v2 >> 20));
    v7 = (int (__fastcall ***)(_DWORD, int *))v5;
    if ( v5 )
    {
      FIELD_U32(a1, 6100) = FIELD_U32(v5, 8);
      if ( ((unsigned int)&dword_60CB10A0 & ~(1617113856 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CB10A0) )
      {
        dword_60CB109C = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60CB10A0);
      }
      v8 = (int)(v7 + 162);
      if ( !(**v7)(v7, &dword_60CB109C) )
        v8 = 648;
      FIELD_U32(a1, 6108) = *(_DWORD *)v8;
      v3 = (StateMgr *)(a1 + 6084);
      v4 = &dword_60CB438C;
    }
    else
    {
      v3 = (StateMgr *)(a1 + 6084);
      v4 = (int *)&unk_60CB436C;
    }
  }
  else
  {
    FIELD_U32(a1, 6104) = (int)(v2 << 26) >> 4;
    v3 = (StateMgr *)(a1 + 6084);
    v4 = &dword_60CB434C;
  }
  StateMgr__changeState(v3, (StateBase *)v4);
  return 1;
}
