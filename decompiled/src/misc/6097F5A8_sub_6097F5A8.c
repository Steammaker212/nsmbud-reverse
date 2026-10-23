/* sub_6097F5A8
 * address: 0x6097F5A8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097F5A8(int a1)
{
  float *v2; // r2
  int v3; // r0
  int v4; // r1

  sub_6090B260(*(_DWORD *)a1);
  v2 = *(float **)a1;
  v3 = FIELD_U32(a1, 8);
  v4 = FIELD_U32(a1, 16);
  if ( FIELD_U32(a1, 12) )
  {
    sub_6090E888(v3, v4, v2);
    sub_6090E95C(FIELD_U32(a1, 12), FIELD_U32(a1, 16), *(float **)a1);
  }
  else
  {
    sub_6090E560(v3, v4, v2);
  }
  return sub_6090B4B0(*(unsigned __int8 **)(a1 + 4), FIELD_U32(a1, 16));
}
