/* sub_603A7218
 * address: 0x603A7218   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603A7218(int a1)
{
  int *v2; // r6
  int v3; // r4
  int v4; // r5
  _BYTE *result; // r0

  v2 = (int *)(a1 + 23576);
  sub_603A5D00(a1 + 6304, FIELD_U32(a1, 23576));
  sub_603A5D00(a1 + 7096, *v2);
  if ( FIELD_S32(a1, 23568) >= 1 )
  {
    v3 = 0;
    v4 = a1 + 7888;
    do
    {
      sub_603A5D00(v4, *v2);
      ++v3;
      v4 += 784;
    }
    while ( v3 < FIELD_U32(a1, 23568) );
  }
  result = (_BYTE *)(a1 + 7776);
  if ( FIELD_F32(a1, 7776) < (float)((float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108))
                                     - FIELD_F32(a1, 23572)) )
    return StageActor__delete((StateActor *)a1, 1);
  return result;
}
