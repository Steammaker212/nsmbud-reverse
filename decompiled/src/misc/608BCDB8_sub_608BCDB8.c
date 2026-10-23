/* sub_608BCDB8
 * address: 0x608BCDB8   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608BCDB8(int *a1, int a2)
{
  unsigned int result; // r0
  int v5; // r0
  int v6; // r4
  unsigned int v7; // t1

  result = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1297371974 )
  {
    result = FIELD_U16(a2, 4);
    if ( result == 65279 )
    {
      result = FIELD_U32(a2, 8) - 0x10000;
      if ( result <= 0x50100 )
      {
        *a1 = a2;
        v5 = sub_608BC98C(a2);
        v7 = *(_DWORD *)(a2 + v5);
        v6 = a2 + v5;
        result = v7;
        if ( v7 == 1330007625 )
        {
          a1[1] = v6 + 8;
          return v6 + 8;
        }
      }
    }
  }
  return result;
}
