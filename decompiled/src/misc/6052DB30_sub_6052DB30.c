/* sub_6052DB30
 * address: 0x6052DB30   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052DB30(int a1)
{
  _DWORD *v1; // r0
  int *v2; // r2

  switch ( FIELD_U32(dword_60C9A1E0, 692) )
  {
    case 1:
      v1 = (_DWORD *)(a1 + 72);
      goto LABEL_4;
    case 2:
      v1 = (_DWORD *)(a1 + 72);
      v2 = &dword_60CAA6B8;
      break;
    case 3:
      v1 = (_DWORD *)(a1 + 72);
      v2 = &dword_60CAA6C0;
      break;
    case 4:
      v1 = (_DWORD *)(a1 + 72);
      v2 = &dword_60CAA6C8;
      break;
    default:
      v1 = (_DWORD *)(a1 + 72);
LABEL_4:
      v2 = &dword_60CAA6B0;
      break;
  }
  return sub_60473DE4(v1, 0, v2, 0);
}
