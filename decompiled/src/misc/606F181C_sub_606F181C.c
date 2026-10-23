/* sub_606F181C
 * address: 0x606F181C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F181C(int a1)
{
  int v2; // r0
  int *v3; // r5
  bool v4; // cc
  int result; // r0
  int v6; // r1
  int v7; // r1

  v3 = (int *)(a1 + 6100);
  v2 = FIELD_U32(a1, 6100);
  if ( !v2 || (v4 = v2 <= 1, result = v2 - 1, *v3 = result, v4) )
  {
    sub_606F1918(a1);
    *v3 = FIELD_U32(a1, 6104);
    result = a1 + 6108;
    v6 = FIELD_U32(a1, 6108);
    if ( v6 >= 1 )
    {
      v7 = v6 - 1;
      *(_DWORD *)result = v7;
      if ( !v7 )
      {
        FIELD_U8(a1, 19) = 1;
        return 1;
      }
    }
  }
  return result;
}
