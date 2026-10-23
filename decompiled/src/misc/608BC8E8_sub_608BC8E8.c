/* sub_608BC8E8
 * address: 0x608BC8E8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608BC8E8(int a1)
{
  int v1; // r1
  _WORD *v2; // r0
  int v3; // r2

  v1 = FIELD_U16(a1, 16);
  if ( FIELD_U16(a1, 16) )
  {
    v2 = (_WORD *)(a1 + 20);
    v3 = 0;
    while ( *v2 != 16385 )
    {
      ++v3;
      v2 += 6;
      if ( v3 >= v1 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v2 = 0;
  }
  return v2 != 0;
}
