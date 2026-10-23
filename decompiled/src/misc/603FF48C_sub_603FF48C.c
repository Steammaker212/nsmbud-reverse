/* sub_603FF48C
 * address: 0x603FF48C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FF48C(int a1)
{
  int v2; // r4

  v2 = dword_60C99E34;
  if ( !dword_60C99E34 )
  {
    v2 = operator_new_8DE2C8(0x1E64u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BF9814;
    dword_60C99E30 = v2;
    sub_60500670(v2 + 16);
    FIELD_U32(v2, 7772) = 0;
    FIELD_U8(v2, 7776) = 0;
    dword_60C99E34 = v2;
  }
  return v2;
}
