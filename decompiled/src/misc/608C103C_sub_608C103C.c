/* sub_608C103C
 * address: 0x608C103C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608C103C(int a1, int a2)
{
  unsigned int result; // r0
  unsigned int *v4; // r5
  unsigned int *v5; // r1
  int v6; // r5
  int v7; // r5

  result = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1347703622 )
  {
    result = FIELD_U16(a2, 4);
    if ( result == 65279 )
    {
      result = FIELD_U32(a2, 8) - 0x10000;
      if ( result <= 0x40100 )
      {
        FIELD_U32(a1, 4) = a2;
        v4 = (unsigned int *)sub_608D95B4(a2);
        result = *v4;
        if ( *v4 == 1330007625 )
        {
          result = sub_608D9604(FIELD_U32(a1, 4));
          if ( *(_DWORD *)result == 1413563472 )
          {
            v5 = v4 + 2;
            v6 = 0;
            FIELD_U32(a1, 8) = v5;
            FIELD_U32(a1, 12) = result + 8;
            if ( FIELD_U32(a1, 4) )
            {
              if ( sub_608D965C() == 1 )
              {
                v7 = sub_608D96C0(FIELD_U32(a1, 4));
                v6 = v7 + *(_DWORD *)(sub_608BCA14(FIELD_U32(a1, 8)) + 64) + 8;
              }
            }
            FIELD_U32(a1, 16) = v6;
            result = *(unsigned __int16 *)(sub_608BCA14(FIELD_U32(a1, 8)) + 56);
            FIELD_U16(a1, 20) = result;
          }
        }
      }
    }
  }
  return result;
}
