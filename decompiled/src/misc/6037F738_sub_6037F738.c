/* sub_6037F738
 * address: 0x6037F738   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037F738(int a1)
{
  float v2; // s0
  int result; // r0
  int v4; // r5
  int *v5; // r4

  sub_603812B4();
  if ( FIELD_U32(a1, 6324) == 1 )
    v2 = 0.0;
  else
    v2 = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 0.375;
  FIELD_F32(a1, 120) = v2;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  result = 6300;
  v4 = FIELD_U32(a1, 6300);
  if ( v4 )
  {
    v5 = *(int **)(a1 + 6304);
    do
    {
      result = *v5;
      if ( *(_BYTE *)(*v5 + 128) )
        result = sub_60386654(result + 12, 0);
      ++v5;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
