/* sub_601E1A20
 * address: 0x601E1A20   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E1A20(int a1, _DWORD *a2, int *a3)
{
  int v6; // r7
  int v7; // r0
  int v8; // r6
  int result; // r0

  v6 = 0;
  if ( !sub_601DAABC(a1) )
  {
    v6 = 1;
    if ( !sub_601DAAF4(a1) )
    {
      v6 = -1;
      if ( sub_601DAB2C(a1) )
        v6 = 2;
    }
  }
  v7 = sub_601A4454(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  v8 = sub_60178780(v7, FIELD_U32(a1, 8)) + 4;
  *a2 = sub_6040D7A8(v8, v6);
  result = sub_6040DF10(v8, v6);
  *a3 = result;
  return result;
}
