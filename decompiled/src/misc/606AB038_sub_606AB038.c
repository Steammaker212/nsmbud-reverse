/* sub_606AB038
 * address: 0x606AB038   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AB038(int result, int a2)
{
  int v2; // r12
  int v3; // r3
  unsigned int v4; // lr
  bool v5; // cf
  char v6; // r12
  int v7; // r2
  bool v8; // cf

  v2 = FIELD_U8(result, 6115);
  v3 = (FIELD_U32(result, 20) >> 28) & 7;
  v4 = v3 - 1;
  FIELD_U8(result, 6140) = v3;
  if ( v2 )
  {
    v5 = v4 >= 2;
    v6 = 0;
    if ( v4 >= 2 )
    {
      v6 = 1;
      v5 = (unsigned int)(v3 - 3) >= 2;
    }
    if ( !v5 )
      goto LABEL_13;
    v7 = 6325;
LABEL_12:
    v6 = *(_BYTE *)(a2 + v7);
    goto LABEL_13;
  }
  v8 = v4 >= 2;
  v6 = 0;
  if ( v4 >= 2 )
  {
    v6 = 1;
    v8 = (unsigned int)(v3 - 3) >= 2;
  }
  if ( v8 )
  {
    v7 = 6321;
    goto LABEL_12;
  }
LABEL_13:
  FIELD_U8(result, 6141) = v6;
  return result;
}
