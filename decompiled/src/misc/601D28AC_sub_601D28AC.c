/* sub_601D28AC
 * address: 0x601D28AC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D28AC(__int64 a1)
{
  _DWORD *v1; // r4
  int result; // r0

  v1 = (_DWORD *)a1;
  FIELD_U8(a1, 280) = 1;
  HIDWORD(a1) = FIELD_U32(a1, 1112);
  sub_601C6A74(a1);
  if ( (v1[280] & 1) != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, int, int, float))(*v1 + 336))(v1, 3, -1, 0.0);
    v1[280] &= ~1u;
  }
  result = v1[273];
  FIELD_U32(dword_60CC6D78, 496) = result;
  return result;
}
