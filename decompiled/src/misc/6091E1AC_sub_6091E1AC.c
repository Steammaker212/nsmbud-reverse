/* sub_6091E1AC
 * address: 0x6091E1AC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6091E1AC(int a1, int a2)
{
  int v4; // r6

  if ( (FIELD_U8(a1, 8) & 2) != 0 )
  {
    v4 = dword_60CCFC8C + 44;
    sead__CriticalSection__lock(dword_60CCFC8C + 44);
    if ( (FIELD_U8(a1, 8) & 2) != 0 )
      sub_6091D9B0(a1);
    sead__CriticalSection__unlock(v4);
  }
  return (FIELD_U16(a1, 928) & dword_60AF2CE4[a2]) != 0;
}
