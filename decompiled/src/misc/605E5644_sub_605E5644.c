/* sub_605E5644
 * address: 0x605E5644   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E5644(int a1)
{
  int v2; // r5

  v2 = 0;
  if ( sub_605DBD64(a1) || (FIELD_U16(a1, 6260) & 0x1C0) != 0 || (FIELD_U8(a1, 6805) & 8) == 0 )
    return v2;
  if ( (FIELD_U8(a1, 6809) & 8) == 0 )
  {
    sub_605D79D0(a1, (StateBase *)&dword_60CB1B24, 0);
    return 1;
  }
  sub_605D79D0(a1, (StateBase *)&dword_60CB1B24, 1);
  return 1;
}
