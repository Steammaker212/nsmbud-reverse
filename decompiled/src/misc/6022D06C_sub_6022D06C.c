/* sub_6022D06C
 * address: 0x6022D06C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022D06C(int result, int *a2, char a3)
{
  int v3; // r12
  int v4; // r3
  int v5; // lr
  int v6; // r1
  unsigned int v7; // r4
  unsigned int v8; // r5
  int v9; // r5
  int v10; // r6
  bool v11; // zf

  v3 = FIELD_U32(result, 340);
  if ( v3 >= 1 )
  {
    v4 = *a2;
    v5 = a2[1];
    v6 = a2[2];
    v7 = 0;
    while ( 1 )
    {
      v8 = 0;
      if ( v7 < 0x10 )
        v8 = v7;
      v9 = result + 16 * v8;
      v10 = FIELD_U32(v9, 84);
      v11 = v4 == v10;
      if ( v4 == v10 )
        v11 = v5 == FIELD_U32(v9, 88);
      if ( v11 && v6 == FIELD_U32(v9, 92) )
        break;
      if ( (int)++v7 >= v3 )
        return result;
    }
    FIELD_U8(v9, 96) = a3;
  }
  return result;
}
