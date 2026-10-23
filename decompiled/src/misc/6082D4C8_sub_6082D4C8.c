/* sub_6082D4C8
 * address: 0x6082D4C8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6082D4C8(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r1
  bool v7; // zf
  int v8; // r6

  v4 = FIELD_U32(a1, 6124);
  result = a1 + 6124;
  v3 = v4;
  if ( !v4 || (*(_DWORD *)result = v3 - 1, v3 <= 1) )
  {
    result = 6104;
    v5 = FIELD_U32(a1, 6104);
    if ( v5 >= 0 )
    {
      if ( (unsigned int)v5 >= 4 )
        v5 = 0;
      result = PlayerMgr_instance;
      v6 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
      v7 = v6 == 0;
      if ( v6 )
        v7 = (FIELD_U8(v6, 1231) & 1) == 0;
      if ( !v7 )
      {
        v8 = FIELD_U32(a1, 20) & 0xF;
        if ( v8 )
        {
          if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) >= 1 )
          {
            FIELD_U16(dword_60C99DE4, 30) = 50 * v8;
            sub_603FBE70(dword_60C99DD4);
          }
        }
        return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CC6EC8);
      }
    }
  }
  return result;
}
