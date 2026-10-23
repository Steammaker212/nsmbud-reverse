/* sub_6090BE54
 * address: 0x6090BE54   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090BE54(int a1)
{
  int v2; // r7

  if ( FIELD_U8(a1, 4) )
  {
    v2 = a1 + 8;
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 44))(a1, a1 + 8);
    FIELD_U16(a1, 4) = 256;
LABEL_5:
    (*(void (__fastcall **)(int, int, int, _DWORD))(*(_DWORD *)a1 + 48))(a1, a1 + 72, v2, FIELD_U32(a1, 136));
    FIELD_U8(a1, 5) = 0;
    return a1 + 72;
  }
  if ( FIELD_U8(a1, 5) )
  {
    v2 = a1 + 8;
    goto LABEL_5;
  }
  return a1 + 72;
}
