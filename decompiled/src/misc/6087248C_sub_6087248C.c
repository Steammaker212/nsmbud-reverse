/* sub_6087248C
 * address: 0x6087248C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6087248C(int a1, float *a2, unsigned __int8 *a3, int a4, float a5)
{
  int v10; // r4
  char *v11; // r7
  int v12; // r0
  bool v13; // zf

  v10 = FIELD_U16(a1, 34);
  if ( FIELD_U16(a1, 34) )
  {
    v11 = (char *)(FIELD_U32(a1, 24) + 8);
    do
    {
      v12 = *a3;
      v13 = v12 == 255;
      if ( v12 != 255 )
      {
        v12 = *v11;
        v13 = v12 == -1;
      }
      if ( !v13 )
        *a2 = ((float (__fastcall *)(int, int, float))loc_6086E838)(FIELD_U32(a1, 8) + 48 * v12, a4 + 12 * v12, a5);
      ++a2;
      --v10;
      ++a3;
      v11 += 16;
    }
    while ( v10 );
  }
}
