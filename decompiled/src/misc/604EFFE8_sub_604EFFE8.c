/* sub_604EFFE8
 * address: 0x604EFFE8   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604EFFE8(int a1)
{
  sub_60502548(a1 + 46088);
  FIELD_U16(a1, 47140) = 0;
  sub_6047EABC((_DWORD *)(a1 + 46128));
  sub_60473DE4((_DWORD *)(a1 + 42520), 0, &dword_60CA62FC, 0);
  if ( !FIELD_U8(a1, 74479) )
    sub_604741D8((_DWORD *)(a1 + 42520), 1u, &dword_60CA6304, 0);
  sub_60473DE4((_DWORD *)(a1 + 4), 0, &dword_60CA62FC, 0);
  FIELD_U8(a1, 74477) = 1;
  JUMPOUT(0x608169B8);
}
