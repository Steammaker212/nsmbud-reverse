/* sub_60820E5C
 * address: 0x60820E5C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60820E5C(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0
  int v4; // r3
  int v5; // r1
  _DWORD *v6; // r4

  result = (_DWORD *)ArchiveManagerMaybe_instance;
  if ( !ArchiveManagerMaybe_instance )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x442Cu, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    v4 = 255;
    *result = off_60C2A5B0;
    dword_60CC6D90 = (int)result;
    v5 = 0;
    result[4] = 0;
    result[5] = 0;
    result[6] = 0;
    result[7] = 0;
    result[8] = 0;
    result[9] = 256;
    result[6] = result + 10;
    do
    {
      v6 = &result[v5];
      v5 += 51;
      v4 -= 3;
      v6[10] = v6 + 27;
      v6[27] = v6 + 44;
      v6[44] = v6 + 61;
    }
    while ( v4 );
    result[4345] = 0;
    result[7] = result + 10;
    ArchiveManagerMaybe_instance = (int)result;
  }
  return result;
}
