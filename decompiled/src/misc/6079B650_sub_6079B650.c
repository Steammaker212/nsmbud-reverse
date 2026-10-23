/* sub_6079B650
 * address: 0x6079B650   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079B650(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int *v4; // r5
  int result; // r0
  bool v6; // zf

  FIELD_U32(a1, 1220) &= ~0x1000u;
  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11408));
  if ( ((unsigned int)dword_60CAFA60 & ~(1618589336 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CAFA60) )
  {
    dword_60CAFA5C = (int)&off_60BDBC48;
    _cxa_guard_release(dword_60CAFA60);
  }
  if ( v2 && (**v2)(v2, &dword_60CAFA5C) == 1 && sub_605999E8((int)v2) )
  {
    if ( (FIELD_U8(a1, 1240) & 2) != 0 )
      FIELD_U32(a1, 1220) |= 0x1000u;
    else
      sub_6059A758((int)v2);
  }
  v4 = (int *)(a1 + 11360);
  result = sub_607946CC(FIELD_U32(a1, 11360));
  v6 = result == 1;
  if ( result == 1 )
  {
    result = FIELD_U8(a1, 1221);
    v6 = (result & 0x10) == 0;
  }
  if ( v6 )
  {
    result = sub_607931A8(*v4);
    if ( result == 1 )
    {
      sub_6079465C(*v4);
      return (*(int (__fastcall **)(int, float))(*(_DWORD *)*v4 + 92))(*v4, 0.0);
    }
  }
  return result;
}
