/* sub_609894D0
 * address: 0x609894D0   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609894D0(int a1, int a2, int a3, int a4, unsigned __int16 *a5)
{
  int v5; // r12
  unsigned __int16 *v6; // r0
  unsigned int v7; // lr
  int v8; // r1
  int v9; // r3
  __int16 v10; // r4

  v5 = FIELD_U16(a2, 8);
  v6 = a5;
  if ( !FIELD_U16(a2, 8) )
    goto LABEL_15;
  v7 = FIELD_U32(a3, 8);
  v8 = 0;
  if ( (unsigned int)a5 >= v7 )
    goto LABEL_15;
LABEL_10:
  while ( 2 )
  {
    v9 = *v6;
    v10 = v9 | 1;
    do
    {
      if ( v10 != 15 )
      {
        ++v8;
        ++v6;
        if ( v8 >= v5 )
          goto LABEL_15;
LABEL_9:
        if ( (unsigned int)v6 >= v7 )
          goto LABEL_15;
        goto LABEL_10;
      }
      if ( v9 == 15 )
      {
        v6 += 3;
        goto LABEL_9;
      }
      v10 = 15;
    }
    while ( v9 != 14 );
    v6 = (unsigned __int16 *)((char *)v6 + v6[3] + 8);
    if ( (unsigned int)v6 < v7 )
      continue;
    break;
  }
LABEL_15:
  FIELD_U32(a3, 4) = v6;
  return 0;
}
