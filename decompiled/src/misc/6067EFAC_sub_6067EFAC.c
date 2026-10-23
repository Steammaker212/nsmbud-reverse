/* sub_6067EFAC
 * address: 0x6067EFAC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067EFAC(int a1)
{
  unsigned int v2; // r5
  int *v3; // r6
  int v4; // t1

  v2 = FIELD_U8(a1, 3049);
  if ( v2 >= 8 )
    v2 = 8;
  if ( v2 )
  {
    v3 = (int *)a1;
    do
    {
      v4 = *v3++;
      sub_6067DA10(v4);
      --v2;
    }
    while ( v2 );
  }
  FIELD_U32(a1, 3044) = 0;
  FIELD_U8(a1, 3048) = 0;
  return 0;
}
