/* sub_6041C894
 * address: 0x6041C894   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041C894(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  void *v4; // r0

  result = a1[194];
  if ( result )
  {
    v3 = a1[400];
    if ( (v3 & a1[401]) != 0xFFFFFFFF )
    {
      sub_60916A94(dword_60CCFC8C, v3);
      a1[400] = -1;
      a1[401] = -1;
    }
    if ( *((_QWORD *)a1 + 201) != -1 )
    {
      sub_60916A94(dword_60CCFC8C, a1[402]);
      a1[402] = -1;
      a1[403] = -1;
    }
    if ( *((_QWORD *)a1 + 202) != -1 )
    {
      sub_60916A94(dword_60CCFC8C, a1[404]);
      a1[404] = -1;
      a1[405] = -1;
    }
    sub_6083DEF4(a1 + 193, FIELD_U32(dword_60CCFC8C, 24));
    sub_60913ABC(a1 + 268);
    sub_60913AD4(a1 + 268);
    v4 = (void *)a1[194];
    if ( v4 )
      operator_delete(v4);
    a1[194] = 0;
    return 0;
  }
  return result;
}
