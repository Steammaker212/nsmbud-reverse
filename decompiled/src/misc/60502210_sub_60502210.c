/* sub_60502210
 * address: 0x60502210   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60502210(int a1, _DWORD *a2, int a3)
{
  _BYTE *result; // r0
  int v7; // r0
  int v8; // r1

  FIELD_U32(a1, 1028) = *a2;
  FIELD_U32(a1, 1032) = *a2;
  FIELD_U32(a1, 1036) = a3;
  if ( a3 <= 16 )
  {
    v7 = a1 + 96;
    if ( FIELD_U8(a1, 1054) )
      v8 = 4;
    else
      v8 = 0;
    sub_6045BF58(v7, v8);
    goto LABEL_8;
  }
  sub_6045BF58(a1 + 96, 4);
  if ( a3 != 25 )
  {
LABEL_8:
    result = (_BYTE *)(a1 + 92);
    goto LABEL_9;
  }
  FIELD_U8(a1, 92) = 1;
  result = (_BYTE *)(sub_608DE61C(a1 + 52, *a2) - FIELD_U32(a1, 64) + 208);
LABEL_9:
  *result = 0;
  return result;
}
