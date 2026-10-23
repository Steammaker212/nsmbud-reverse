/* sub_606E8FE8
 * address: 0x606E8FE8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E8FE8(int a1)
{
  int result; // r0

  result = FIELD_U32(dword_60C995D0, 32);
  if ( !result )
  {
    result = FIELD_U32(dword_60C99DD4, 764);
    if ( result == 3 )
    {
      result = sub_604B2014((unsigned __int8 *)dword_60CA1910);
      if ( !result )
        return SE_SYS_CE_ref_3(a1);
    }
  }
  return result;
}
