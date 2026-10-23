/* sub_6019C9BC
 * address: 0x6019C9BC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019C9BC(int a1)
{
  int result; // r0
  bool v3; // zf

  result = sub_60190968(dword_60C8996C);
  if ( result == 1 )
  {
    result = dword_60C8996C;
    if ( FIELD_U8(dword_60C8996C, 1384) )
    {
      result = sub_6019112C(dword_60C8996C);
      v3 = result == 16;
      if ( result != 16 )
        v3 = result == 17;
      if ( v3 || result == 18 )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    }
  }
  return result;
}
