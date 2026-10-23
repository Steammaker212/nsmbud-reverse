/* sub_60422C24
 * address: 0x60422C24   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60422C24(int a1)
{
  bool v2; // zf

  v2 = dword_60C8D9DC == 0;
  if ( dword_60C8D9DC )
    v2 = FIELD_U8(dword_60C8D9DC, 2312) == 0;
  if ( !v2 )
  {
    if ( FIELD_U8(dword_60C8D9DC, 2315) )
      FIELD_U8(dword_60C8D9DC, 2315) = 0;
    else
      sub_608908F8(FIELD_U32(dword_60C8D9DC, 16));
  }
  sub_60957B80(dword_60CD0B40, 0, 1);
  return sub_60422C94(a1);
}
