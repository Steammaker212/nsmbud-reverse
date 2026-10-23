/* sub_60186B24
 * address: 0x60186B24   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60186B24(_DWORD *a1)
{
  int result; // r0

  result = a1[89];
  if ( result )
  {
    a1[89] = --result;
    if ( !result )
    {
      (*(void (__fastcall **)(_DWORD *))(*a1 + 124))(a1);
      result = sub_60190968(dword_60C8996C);
      if ( result == 1 )
      {
        result = sub_601916EC(dword_60C8996C);
        if ( result == 31 )
        {
          (*(void (__fastcall **)(_DWORD *))(*a1 + 140))(a1);
          return sub_601E4C88(dword_60C8B13C, 144, a1 + 20, 1);
        }
      }
    }
  }
  return result;
}
