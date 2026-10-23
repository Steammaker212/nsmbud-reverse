/* sub_6000A2E8
 * address: 0x6000A2E8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000A2E8(int a1, unsigned int a2)
{
  unsigned int v2; // r9
  int result; // r0
  Actor **v4; // r7
  Actor **v5; // r5
  Actor *v6; // r8
  int v7; // r10
  Actor *v8; // r6
  bool v9; // zf

  v2 = a2;
  if ( a2 >= 4 )
    a2 = 0;
  result = *(_DWORD *)(a1 + 8 * a2 + 100);
  if ( result >= 1 )
  {
    result = ActorMgr__instance;
    v4 = *(Actor ***)(ActorMgr__instance + 27172);
    v5 = *(Actor ***)(ActorMgr__instance + 27180);
    if ( v4 != v5 )
    {
      v6 = 0;
      v7 = -1;
      result = (int)&dword_60AF3498;
      do
      {
        v8 = *v4;
        if ( *v4 )
        {
          result = Actor__getProfileId(*v4);
          v9 = result == 476;
          if ( result == 476 )
          {
            result = v8[84].field_30;
            v9 = result == v2;
          }
          if ( v9 )
          {
            result = LOBYTE(v8[78].vtable);
            if ( !LOBYTE(v8[78].vtable) )
            {
              result = v8[84].field_2C;
              if ( v7 < result )
              {
                v6 = v8;
                v7 = v8[84].field_2C;
              }
            }
          }
        }
        ++v4;
      }
      while ( v5 != v4 );
      if ( v6 )
        return sub_601362A0(v6);
    }
  }
  return result;
}
