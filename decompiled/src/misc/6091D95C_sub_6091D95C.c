/* sub_6091D95C
 * address: 0x6091D95C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091D95C(int a1)
{
  int v2; // r5

  if ( (FIELD_U8(a1, 8) & 2) != 0 )
  {
    v2 = dword_60CCFC8C + 44;
    sead__CriticalSection__lock(dword_60CCFC8C + 44);
    if ( (FIELD_U8(a1, 8) & 2) != 0 )
      sub_6091D9B0(a1, 0);
    sead__CriticalSection__unlock(v2);
  }
  return 0;
}
