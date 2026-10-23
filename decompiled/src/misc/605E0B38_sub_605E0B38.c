/* sub_605E0B38
 * address: 0x605E0B38   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605E0B38(int a1)
{
  int v2; // r0
  int v3; // r4

  v2 = FIELD_U32(a1, 6264);
  if ( (v2 & 0x20000000) == 0 || FIELD_U32(a1, 6792) != 1 )
    return 0;
  v3 = 1;
  if ( (v2 & 0x40000000) != 0 )
    return v3;
  if ( (FIELD_U8(a1, 6261) & 4) == 0 )
    return 0;
  if ( !sub_605DBDAC(a1) )
    return v3;
  return (FIELD_U8(a1, 538) & 1) != 0;
}
