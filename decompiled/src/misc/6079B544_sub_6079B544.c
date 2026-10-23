/* sub_6079B544
 * address: 0x6079B544   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079B544(int a1, float a2, float a3)
{
  int (__fastcall ***v6)(_DWORD, int *); // r5
  char v7; // r12
  int v8; // r6

  v6 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11408));
  if ( ((unsigned int)dword_60CAFA60 & ~(1618589068 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60CAFA60) )
  {
    dword_60CAFA5C = (int)&off_60BDBC48;
    _cxa_guard_release(dword_60CAFA60);
  }
  v8 = 0;
  if ( v6 && (**v6)(v6, &dword_60CAFA5C) == 1 && sub_605999E8((int)v6) )
  {
    FIELD_F32(a1, 124) = a2;
    FIELD_F32(a1, 88) = a3;
    Player_changeState(a1, (StateBase *)&dword_60CC4FAC, 2);
    return 1;
  }
  return v8;
}
