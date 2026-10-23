/* sub_60913678
 * address: 0x60913678   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60913678(int a1)
{
  char v2; // r0
  void *v3; // r0

  *(_DWORD *)a1 = off_60C5D4C0;
  if ( (FIELD_U8(a1, 248) & 1) != 0 )
  {
    sub_60918FC4(FIELD_U32(a1, 240));
    if ( (*(_BYTE *)(FIELD_U32(a1, 240) + 20) & 1) != 0 )
      sub_609194C8();
    v2 = FIELD_U8(a1, 248);
    if ( (v2 & 1) != 0 )
    {
      sead__CriticalSection__unlock(dword_60CCFC8C + 152);
      v2 = FIELD_U8(a1, 248);
    }
    FIELD_U8(a1, 248) = v2 & 0xFE;
  }
  v3 = (void *)sub_608F4AD4(a1);
  operator_delete(v3);
}
