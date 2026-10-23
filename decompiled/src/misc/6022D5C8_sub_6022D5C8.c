/* sub_6022D5C8
 * address: 0x6022D5C8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6022D5C8()
{
  int v0; // r5
  int i; // r4
  int result; // r0
  int v3; // r1
  int v4; // r2
  bool v5; // zf

  v0 = 0;
  for ( i = 0; i < 18; ++i )
  {
    result = dword_60CC6D78;
    v3 = dword_60CC6D78 + v0;
    if ( *(_DWORD *)(dword_60CC6D78 + v0 + 540) == -1 )
      break;
    v4 = FIELD_U32(v3, 544);
    v5 = v4 == -1;
    if ( v4 != -1 )
      v5 = FIELD_U32(v3, 548) == -1;
    if ( v5 )
      break;
    result = sub_6081F038(dword_60CC6D78);
    v0 += 12;
  }
  return result;
}
