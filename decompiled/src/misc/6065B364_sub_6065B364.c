/* sub_6065B364
 * address: 0x6065B364   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065B364(_DWORD *a1)
{
  char v1; // r12
  _DWORD *v3; // r7
  _DWORD *v4; // r10
  int v5; // r8
  char *v6; // r5
  int v7; // r0
  StateBase *CurrentState; // r0
  int v9; // r5
  int result; // r0

  v3 = (_DWORD *)a1[9];
  v4 = a1 + 8;
  if ( v3 == a1 + 8 )
    return (*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60CB6670);
  v5 = a1[11];
  v6 = (char *)v3 - v5;
  while ( 1 )
  {
    if ( ((unsigned int)&dword_60CB676C & ~(1617277916 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB676C) )
    {
      dword_60CB6768 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CB676C);
    }
    v7 = (**(int (__fastcall ***)(char *, int *))v6)(v6, &dword_60CB6768);
    if ( v6 )
    {
      if ( v7 == 1 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)v6 + 437);
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        result = (*(int (__fastcall **)(int *))(dword_60CB67F0 + 8))(&dword_60CB67F0);
        if ( v9 == result )
          break;
      }
    }
    v3 = (_DWORD *)v3[1];
    v6 = (char *)v3 - v5;
    if ( (char *)v3 - v5 == (char *)v4 - a1[11] )
      return (*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60CB6670);
  }
  return result;
}
