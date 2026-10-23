/* sub_607BA4F4
 * address: 0x607BA4F4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BA4F4(int result)
{
  int *v1; // r1
  int v2; // r2
  bool v3; // nf
  int v4; // r2

  v1 = (int *)(result + 12104);
  v2 = FIELD_U32(result, 12104);
  v3 = v2 < 0;
  if ( v2 )
  {
    v4 = v2 + 335544320;
    *v1 = v4;
    if ( v3 && v4 >= 0 )
    {
      *v1 = 0;
      return 0;
    }
    else
    {
      FIELD_U32(result, 1212) |= 0x100u;
    }
  }
  return result;
}
