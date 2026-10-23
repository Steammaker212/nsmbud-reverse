/* sub_608BB150
 * address: 0x608BB150   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BB150(int a1, int a2)
{
  int result; // r0
  int v5; // r4

  result = ((int (*)(void))loc_608BB3C8)();
  v5 = FIELD_U32(a1, 380);
  if ( v5 )
  {
    if ( a2 < 0 )
    {
      do
      {
        result = FIELD_U8(v5, 177);
        if ( FIELD_U8(v5, 177) )
          result = sub_608C7BA4(v5);
        v5 = FIELD_U32(v5, 368);
      }
      while ( v5 );
    }
    else
    {
      do
      {
        result = FIELD_U8(v5, 177);
        if ( FIELD_U8(v5, 177) )
        {
          sub_608C5708(v5 + 16, (unsigned __int8)a2);
          result = sub_608C7BA4(v5);
        }
        v5 = FIELD_U32(v5, 368);
      }
      while ( v5 );
    }
  }
  return result;
}
