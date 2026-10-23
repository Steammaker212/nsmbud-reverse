/* sub_605E7E8C
 * address: 0x605E7E8C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E7E8C(int a1, int a2)
{
  int result; // r0
  int v5; // r6
  int v6; // r5
  int v7; // r7

  result = sub_605E7FAC();
  if ( result == 1 )
  {
    FIELD_U32(a1, 32) = 0;
    FIELD_U32(a1, 36) = 0;
    StateMgr__changeState((StateMgr *)(a1 + 332), (StateBase *)&dword_60CB1BE8);
    FIELD_U8(a1, 309) = 0;
    if ( FIELD_U32(a2, 492) == 1 && !FIELD_U8(LevelInfo_instance, 16) && FIELD_U8(LevelInfo_instance, 17) == 3 )
    {
      FIELD_U8(a1, 309) = 1;
      FIELD_U32(a2, 500) = 11;
    }
    result = sub_603FD44C(a2);
    if ( result == 1 )
    {
      result = sub_603FD434(a2);
      v5 = -1;
      if ( result == 11 )
        v5 = 1;
      if ( result == 10 )
        v5 = 0;
      FIELD_U32(a1, 304) = v5;
      if ( v5 != -1 )
      {
        v6 = sub_6078A030(PlayerMgr_instance);
        if ( v6 >= 1 )
        {
          v7 = 0;
          do
          {
            sub_605E8AB0(v5, &dword_60B3B95C, 1, v7, v7, v6);
            ++v7;
          }
          while ( v6 != v7 );
        }
        FIELD_U32(a2, 500) = 15;
        return 15;
      }
    }
  }
  return result;
}
