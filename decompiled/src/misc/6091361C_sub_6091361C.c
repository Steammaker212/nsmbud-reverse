/* sub_6091361C
 * address: 0x6091361C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091361C(int a1)
{
  char v2; // r0
  int result; // r0

  sub_60918FC4(FIELD_U32(a1, 240));
  if ( (*(_BYTE *)(FIELD_U32(a1, 240) + 20) & 1) != 0 )
    sub_609194C8();
  v2 = FIELD_U8(a1, 248);
  if ( (v2 & 1) != 0 )
  {
    sead__CriticalSection__unlock(dword_60CCFC8C + 152);
    v2 = FIELD_U8(a1, 248);
  }
  result = v2 & 0xFE;
  FIELD_U8(a1, 248) = result;
  return result;
}
