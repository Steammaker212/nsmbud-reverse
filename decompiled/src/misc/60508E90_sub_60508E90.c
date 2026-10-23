/* sub_60508E90
 * address: 0x60508E90   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60508E90(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  unsigned int v4; // r0

  result = FIELD_U32(a1, 3736);
  if ( result < 1 || FIELD_U8(a1, 3751) )
    return result;
  FIELD_U8(a1, 3749) = 1;
  FIELD_U8(a1, 3751) = 1;
  if ( FIELD_U32(a1, 3732) == 1 )
  {
    sub_60473DE4((_DWORD *)(a1 + 40), 4u, &dword_60CA7C60, 0);
    result = FIELD_U32(a1, 3736);
  }
  if ( result == 1 )
  {
    FIELD_U32(a1, 3740) = 2;
    if ( !FIELD_U32(a1, 3732) )
    {
      v3 = (_DWORD *)(a1 + 40);
LABEL_10:
      sub_604741D8(v3, 4u, &dword_60CA7C60, 0);
    }
  }
  else
  {
    FIELD_U32(a1, 3740) = 1;
    if ( FIELD_U32(a1, 3732) == 2 )
    {
      v3 = (_DWORD *)(a1 + 40);
      goto LABEL_10;
    }
  }
  v4 = FIELD_U32(a1, 3740);
  if ( v4 >= 0xE )
    v4 = 0;
  result = sub_6047467C((_DWORD *)(a1 + 40), 3u, &dword_60CA7C40[2 * v4], (int)&dword_60CA7CB0[2 * v4], 1.0, 0);
  FIELD_U32(a1, 3736) = 0;
  return result;
}
