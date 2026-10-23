/* sub_6069A940
 * address: 0x6069A940   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069A940(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r6
  int v4; // r4
  int v5; // r5
  int result; // r0
  StateBase *CurrentState; // r0
  int v8; // r6

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60CB9550 & ~(1617537372 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9550) )
  {
    dword_60CB954C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB9550);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &dword_60CB954C);
    if ( v5 )
      v5 = (int)v3;
  }
  else
  {
    v5 = 0;
  }
  result = FIELD_U8(v4, 533);
  if ( (unsigned int)(result - 1) < 3
    || !FIELD_U8(v4, 533)
    && (result = Actor__getProfileId((Actor *)v4), result == 392)
    && (CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084)),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        result = (*((int (**)(void))stru_60C92664.vtable + 2))(),
        v8 != result) )
  {
    result = v5 + 6120;
    if ( fabsf(FIELD_F32(v4, 108) - FIELD_F32(v5, 108)) <= (float)(FIELD_F32(v5, 6120) * 0.5) )
    {
      result = v5 + 6124;
      if ( FIELD_F32(v4, 112) >= (float)(FIELD_F32(v5, 112) + (float)(FIELD_F32(v5, 6124) * 0.2)) )
      {
        result = *(unsigned __int8 *)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4) + 2224);
        if ( (result & 1) == 0 )
        {
          result = FIELD_U32(v4, 8);
          if ( FIELD_U32(v5, 6156) != result
            && FIELD_U32(v5, 6168) != result
            && FIELD_U32(v5, 6180) != result
            && FIELD_U32(v5, 6192) != result
            && FIELD_U32(v5, 6204) != result
            && FIELD_U32(v5, 6216) != result
            && FIELD_U32(v5, 6228) != result
            && FIELD_U32(v5, 6240) != result
            && FIELD_U32(v5, 6252) != result
            && FIELD_U32(v5, 6264) != result
            && FIELD_U32(v5, 6276) != result
            && FIELD_U32(v5, 6288) != result )
          {
            return sub_6069ABA8(v5, v4);
          }
        }
      }
    }
  }
  return result;
}
