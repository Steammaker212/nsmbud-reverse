/* sub_608D56D0
 * address: 0x608D56D0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D56D0(int a1)
{
  int v1; // r0
  unsigned int v2; // r2
  unsigned int v3; // t1
  int v4; // r1
  int v5; // r0

  v3 = FIELD_U32(a1, 4);
  v1 = a1 + 4;
  v2 = v3;
  v4 = 0;
  if ( (v3 & 0x10) != 0 )
  {
    v5 = v1 + 4 * ((v2 & 1) + ((v2 >> 1) & 1) + ((v2 >> 2) & 1) + ((v2 >> 3) & 1));
    v4 = FIELD_U8(v5, 4);
    if ( FIELD_U8(v5, 4) )
      return 1;
  }
  return v4;
}
