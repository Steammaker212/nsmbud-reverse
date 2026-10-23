/* sub_607965CC
 * address: 0x607965CC   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607965CC(unsigned __int8 *a1)
{
  signed int result; // r0
  bool v3; // zf

  if ( (a1[1206] & 4) == 0 || (result = sub_607B94F0(a1)) == 0 )
  {
    result = sub_60766714((int)a1);
    v3 = result == 0;
    if ( !result )
    {
      result = a1[1219];
      v3 = (result & 8) == 0;
    }
    if ( v3 )
    {
      result = sub_607A9664(a1);
      if ( !result )
      {
        result = sub_607A9790(a1);
        if ( !result )
        {
          result = SE_EMY_MAMEKURIBO_CLINGING_NOW_ref(a1);
          if ( !result )
          {
            result = sub_607A1E6C(a1);
            if ( !result )
            {
              result = sub_607C2404(a1);
              if ( !result )
              {
                result = sub_607B5380(a1);
                if ( !result )
                {
                  result = sub_607B2C38(a1);
                  if ( !result )
                  {
                    result = sub_607B17A4(a1);
                    if ( !result )
                    {
                      result = sub_607C6648(a1);
                      if ( !result )
                      {
                        result = sub_607BFE30(a1);
                        if ( !result )
                        {
                          result = sub_607B94F0(a1);
                          if ( !result )
                          {
                            result = sub_607AAA00(a1);
                            if ( !result )
                              return sub_607BB984(a1);
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
    }
  }
  return result;
}
