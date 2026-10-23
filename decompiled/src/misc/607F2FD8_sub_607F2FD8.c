/* sub_607F2FD8
 * address: 0x607F2FD8   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607F2FD8(int a1, unsigned int a2)
{
  int v3; // r5
  unsigned int result; // r0
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r0

  v3 = dword_60C99DD0;
  result = FIELD_U32(dword_60C99DD0, 3796);
  if ( result <= 3 )
  {
    if ( result == 2 )
    {
      FIELD_U32(a1, 48) = 1;
      StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC6114);
      return (unsigned int)sub_604E60C0(FIELD_U32(dword_60C99DD4, 196));
    }
    else if ( result == 3 )
    {
      FIELD_U32(dword_60C99DD0, 3780) |= 2u;
      v5 = FIELD_U32(v3, 3668);
      if ( v5 )
      {
        if ( sub_604B6E00(v5, a2) )
        {
          FIELD_U32(a1, 48) = 1;
          nullsub_64();
          sub_604E60C0(FIELD_U32(dword_60C99DD4, 196));
        }
        else
        {
          v7 = FIELD_U32(v3, 3668);
          if ( v7 )
          {
            if ( sub_604B6F58(v7, v6) )
            {
              FIELD_U32(a1, 48) = 8;
              FIELD_U8(dword_60C99DD4, 1380) = 1;
              sub_604574C8(dword_60C9CF18, 3, 0);
            }
          }
        }
      }
      return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC60F4);
    }
  }
  return result;
}
