/* sub_601A1B44
 * address: 0x601A1B44   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A1B44(int a1)
{
  _BYTE *v1; // r0
  int v2; // t1
  int result; // r0

  v2 = FIELD_U8(a1, 299218);
  v1 = (_BYTE *)(a1 + 299218);
  if ( v2 )
  {
    *v1 = 0;
    sub_608169AC(dword_60CC6B68);
  }
  result = dword_60C99DD0;
  FIELD_U32(dword_60C99DD0, 3780) |= 1u;
  return result;
}
