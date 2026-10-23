/* sub_60253E2C
 * address: 0x60253E2C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60253E2C(int a1)
{
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r5

  v2 = dword_60C8DFBC;
  if ( !dword_60C8DFBC )
  {
    v2 = operator_new_8DE2C8(0x210u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BDA838;
    dword_60C8DFB8 = v2;
    memset((void *)(v2 + 16), 0, 400);
    v3 = 0;
    do
    {
      v4 = v2 + 4 * v3;
      v5 = v2 + v3;
      v3 += 2;
      FIELD_U32(v4, 16) = 0;
      FIELD_U8(v5, 416) = -1;
      FIELD_U32(v4, 20) = 0;
      FIELD_U8(v5, 417) = -1;
    }
    while ( v3 != 100 );
    FIELD_U8(v2, 525) = 0;
    FIELD_U8(v2, 521) = 0;
    FIELD_U8(v2, 517) = 0;
    FIELD_U8(v2, 524) = 0;
    FIELD_U8(v2, 527) = 0;
    FIELD_U8(v2, 526) = 0;
    FIELD_U8(v2, 520) = 0;
    FIELD_U8(v2, 523) = 0;
    FIELD_U8(v2, 522) = 0;
    FIELD_U8(v2, 516) = 0;
    FIELD_U8(v2, 519) = 0;
    FIELD_U8(v2, 518) = 0;
    dword_60C8DFBC = v2;
  }
  return v2;
}
