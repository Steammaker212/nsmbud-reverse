/* sub_600D584C
 * address: 0x600D584C   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600D584C(int a1, int a2)
{
  char v2; // r12
  unsigned __int8 *v5; // r6
  void (__fastcall ***v6)(_DWORD, int *); // r7
  StateMethodExecuter *result; // r0
  char v8; // r12
  void (__fastcall ***v9)(_DWORD, int *); // r8

  v5 = *(unsigned __int8 **)(a2 + 64);
  v6 = *(void (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)&dword_60C8439C & ~(1611487344 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8439C) )
  {
    dword_60C84398 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C8439C);
  }
  if ( v6 )
    (**v6)(v6, &dword_60C84398);
  FIELD_U8(a1, 110) |= 2u;
  if ( (unsigned int)v5[533] - 1 > 1 )
  {
    result = *(StateMethodExecuter **)(a2 + 140);
    if ( result == (StateMethodExecuter *)2 )
      return (StateMethodExecuter *)sub_600D5B84(2, a1, a2);
  }
  else
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1611487480 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    result = (StateMethodExecuter *)(**(int (__fastcall ***)(unsigned __int8 *, int *))v5)(v5, &dword_60C7B378);
    if ( result == (StateMethodExecuter *)1 )
    {
      if ( (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v5 + 1156))(v5) == 1 )
      {
        result = (StateMethodExecuter *)(FIELD_U32(a1, 92) & 0xFFFFFFFE);
        FIELD_U32(a1, 92) = result;
      }
      else
      {
        if ( ((unsigned int)&dword_60C8439C & ~(1611487652 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8439C) )
        {
          dword_60C84398 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C8439C);
        }
        v9 = 0;
        if ( v6 )
        {
          if ( ((int (__fastcall *)(_DWORD, int *))**v6)(v6, &dword_60C84398) == 1 )
          {
            sub_600D5A94(v6);
            v9 = v6;
          }
        }
        (*(void (__fastcall **)(unsigned __int8 *, int, int))(*(_DWORD *)v5 + 1164))(v5, a1, a2);
        return StateMgr__changeState((StateMgr *)(v9 + 1521), (StateBase *)&dword_60C84378);
      }
    }
  }
  return result;
}
