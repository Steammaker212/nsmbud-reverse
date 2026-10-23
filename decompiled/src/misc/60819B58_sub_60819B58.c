/* sub_60819B58
 * address: 0x60819B58   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60819B58(int a1)
{
  __int64 v2; // r0
  __int64 v3; // r2
  __int64 v4; // kr00_8

  if ( FIELD_U32(a1, 24) != 2 )
  {
    v3 = qword_60CCFB50 % 1000;
    v2 = qword_60CCFB50 / 1000;
    v4 = qword_60CCFB50 / 1000;
    do
    {
      if ( FIELD_U8(a1, 33) )
      {
        sub_609085CC(v4, HIDWORD(v4), v3, HIDWORD(v3));
      }
      else if ( !sub_6081A088(dword_60CC6BFC, HIDWORD(v2), v3, HIDWORD(v3))
             && cobCastle_ref(dword_60C88AC0) != 1
             && (FIELD_U32(a1, 24) == 1 || !sub_6081A048(dword_60CC6BFC)) )
      {
        break;
      }
    }
    while ( FIELD_U32(a1, 24) != 2 );
  }
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  return 0;
}
