/* sub_60913CF0
 * address: 0x60913CF0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913CF0(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r0
  _BYTE *v5; // r6

  v3 = a1 + 4;
  result = FIELD_U32(a1, 4);
  if ( result )
  {
    v4 = FIELD_U32(a1, 16);
    if ( v4 )
    {
      sub_60914D38(v4, a1);
      v5 = (_BYTE *)(a1 + 20);
    }
    else
    {
      sub_60914B2C(FIELD_U32(a1, 12));
      v5 = (_BYTE *)(a1 + 20);
      if ( (FIELD_U8(a1, 20) & 3) == 0 )
      {
        if ( *(_DWORD *)v3 )
          operator_delete(*(void **)v3);
      }
    }
    FIELD_U32(a1, 24) = 0;
    *(_DWORD *)v3 = 0;
    FIELD_U32(v3, 4) = 0;
    FIELD_U32(v3, 8) = 0;
    FIELD_U32(v3, 12) = 0;
    *v5 &= ~1u;
    FIELD_U16(a1, 22) = 0;
    return 0;
  }
  return result;
}
