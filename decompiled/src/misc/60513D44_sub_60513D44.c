/* sub_60513D44
 * address: 0x60513D44   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60513D44(int a1)
{
  int result; // r0
  _DWORD *v3; // r4
  int v4; // t1

  sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CA84E8, 0);
  FIELD_U8(a1, 5685) = 1;
  FIELD_U8(a1, 5687) = 1;
  FIELD_U8(a1, 5686) = 0;
  v4 = FIELD_U32(a1, 4616);
  v3 = (_DWORD *)(a1 + 4616);
  result = v4;
  if ( v4 )
    *v3 = 0;
  return result;
}
