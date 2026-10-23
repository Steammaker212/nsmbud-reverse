/* sub_6073A6EC
 * address: 0x6073A6EC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6073A6EC(int a1)
{
  unsigned int result; // r0
  unsigned __int8 v3; // r7
  int v4; // r0
  int v5; // r1

  sub_6073B6B0();
  sub_6073B8E8(a1);
  result = FIELD_U8(a1, 6108);
  if ( FIELD_U8(a1, 6108) )
  {
    v3 = 0;
    do
    {
      v4 = sub_6073AFA4(a1, v3);
      v5 = a1;
      if ( v3 < 5u )
        v5 = a1 + v3;
      sub_60737DC8(v4, FIELD_U8(v5, 6200), FIELD_S8(v5, 6205), FIELD_F32(a1, 6104));
      result = FIELD_U8(a1, 6108);
      ++v3;
    }
    while ( v3 < result );
  }
  return result;
}
