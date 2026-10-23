/* sub_60911460
 * address: 0x60911460   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60911460()
{
  int v0; // r4
  int result; // r0
  int v2; // r3
  int v3; // r5

  memset(dword_60CCFBD8, 0, sizeof(dword_60CCFBD8));
  v0 = 0;
  dword_60C5D314 = 3;
  dword_60CCFB58[0] = 0;
  unk_60CCFB5C = 1;
  unk_60CCFB60 = 2;
  nn__os__AllocateTlsSlot(&dword_60CCFC58, 0);
  result = dword_60C5D314;
  if ( dword_60C5D314 )
  {
    if ( (dword_60C5D314 & 1) != 0 )
    {
      v0 = 1;
      dword_60CCFBD8[dword_60CCFB58[0]] = 0;
    }
    if ( result != 1 )
    {
      do
      {
        v2 = dword_60CCFB58[v0 + 1];
        dword_60CCFBD8[dword_60CCFB58[v0]] = v0;
        v3 = v0 + 1;
        v0 += 2;
        dword_60CCFBD8[v2] = v3;
      }
      while ( v0 != result );
    }
  }
  return result;
}
