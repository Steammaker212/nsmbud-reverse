/* sub_601C9680
 * address: 0x601C9680   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C9680(_DWORD *a1)
{
  int result; // r0
  int v3; // r0

  result = a1[253];
  if ( result == 1 )
  {
    result = a1[281];
    if ( result >= 1 )
      a1[281] = --result;
    if ( !result )
      return (int)sub_601B1FA4((int)a1, (StateBase *)&dword_60C8AA4C);
  }
  else if ( !result )
  {
    result = sub_60190968(dword_60C8996C);
    if ( !result )
    {
      v3 = sub_605603C4(dword_60C89E18 + 240464);
      a1[302] = v3;
      if ( v3 == 10 )
      {
        a1[281] = 30;
        a1[253] = 1;
      }
      else
      {
        a1[280] &= ~0x4000000u;
        FIELD_U8(dword_60CC6D78, 511) = 0;
        sub_601D10C8(a1);
      }
      return sub_601D07C8(dword_60C8AEF0);
    }
  }
  return result;
}
