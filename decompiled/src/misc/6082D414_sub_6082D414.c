/* sub_6082D414
 * address: 0x6082D414   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6082D414(StateMethodExecuter *result)
{
  void *owner; // r1
  unsigned int v2; // r3
  unsigned int v3; // r2
  int v4; // r2
  int v5; // r4
  int v6; // r4
  bool v7; // zf

  owner = result[508].owner;
  if ( owner )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = 0;
      if ( v2 < 4 )
        v3 = v2;
      v4 = *((_DWORD *)&result[509].vtable + v3);
      if ( v4 >= 0 )
      {
        v5 = 0;
        if ( (unsigned int)v4 < 4 )
          v5 = v4;
        v6 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
        v7 = v6 == 0;
        if ( v6 )
          v7 = (FIELD_U8(v6, 1231) & 1) == 0;
        if ( !v7 )
          break;
      }
      if ( ++v2 >= (unsigned int)owner )
        return result;
    }
    result[508].currentState = v4;
    return StateMgr__changeState((StateMgr *)&result[507], &stru_60CC6EA8);
  }
  return result;
}
