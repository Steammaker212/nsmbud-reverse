/* sub_603FD0E8
 * address: 0x603FD0E8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603FD0E8(int a1)
{
  int v1; // r1

  if ( !FIELD_U8(a1, 20) || (v1 = 1, FIELD_U32(a1, 32) != 4) )
  {
    if ( !FIELD_U8(a1, 92) || (v1 = 1, FIELD_U32(a1, 104) != 4) )
    {
      if ( !FIELD_U8(a1, 164) || (v1 = 1, FIELD_U32(a1, 176) != 4) )
      {
        if ( !FIELD_U8(a1, 236) || (v1 = 1, FIELD_U32(a1, 248) != 4) )
        {
          if ( !FIELD_U8(a1, 308) || (v1 = 1, FIELD_U32(a1, 320) != 4) )
          {
            if ( !FIELD_U8(a1, 380) || (v1 = 1, FIELD_U32(a1, 392) != 4) )
            {
              if ( !FIELD_U8(a1, 20) || (v1 = 1, FIELD_U32(a1, 32) != 5) )
              {
                if ( !FIELD_U8(a1, 92) || (v1 = 1, FIELD_U32(a1, 104) != 5) )
                {
                  if ( !FIELD_U8(a1, 164) || (v1 = 1, FIELD_U32(a1, 176) != 5) )
                  {
                    if ( !FIELD_U8(a1, 236) || (v1 = 1, FIELD_U32(a1, 248) != 5) )
                    {
                      if ( !FIELD_U8(a1, 308) || (v1 = 1, FIELD_U32(a1, 320) != 5) )
                      {
                        if ( FIELD_U8(a1, 380) )
                          return FIELD_U32(a1, 392) == 5;
                        return 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
