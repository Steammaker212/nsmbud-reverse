/* sub_6091A764
 * address: 0x6091A764   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091A764(int result, int a2, int a3, unsigned int a4, float a5, int a6, int a7)
{
  int v10; // r7
  bool v11; // zf
  int v12; // r3

  v10 = result;
  if ( a4 )
  {
    if ( (a4 & 1) != 0 )
      result = dword_60CC7894(FIELD_U32(a2, 192), a3, a6, 15);
    v11 = (a4 & 6) == 0;
    if ( (a4 & 6) != 0 )
    {
      result = FIELD_U32(v10, 60);
      v11 = result == 0;
    }
    if ( !v11 )
    {
      v12 = a4 & 4;
      if ( (a4 & 4) != 0 )
        v12 = 255;
      return dword_60CC78A0(FIELD_U32(a2, 192), (a4 >> 1) & 1, a7, v12, a5);
    }
  }
  return result;
}
