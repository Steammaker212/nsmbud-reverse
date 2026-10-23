/* sub_6098DC24
 * address: 0x6098DC24   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098DC24(int a1)
{
  _BYTE *v2; // r0

  if ( FIELD_U32(a1, 80) )
    sub_608E6B98((_BYTE *)a1, a1 + 88);
  FIELD_U32(a1, 88) = &off_60BFAA14;
  v2 = *(_BYTE **)(a1 + 96);
  if ( v2 )
    sub_608E6B98(v2, a1 + 88);
  return sub_608E60A4((_DWORD *)a1);
}
