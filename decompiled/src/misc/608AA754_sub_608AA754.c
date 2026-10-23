/* sub_608AA754
 * address: 0x608AA754   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AA754(int a1)
{
  int result; // r0
  int v3; // r5
  unsigned int v4; // r6
  void *v5; // r5
  int v6; // r0

  result = FIELD_U8(a1, 405);
  if ( result )
  {
    if ( FIELD_U32(a1, 32) )
    {
      v3 = 0;
      v4 = 0;
      do
      {
        sub_608AC690(FIELD_U32(a1, 36) + v3, 0);
        ++v4;
        v3 += 92;
      }
      while ( v4 < FIELD_U32(a1, 32) );
    }
    v5 = sub_608C3B10();
    v6 = sub_608C2A9C(v5, 1, 1);
    sub_608C2B80(v5, v6);
    FIELD_U32(a1, 368) = 0;
    FIELD_U32(a1, 372) = 0;
    FIELD_U32(a1, 32) = 0;
    FIELD_U32(a1, 36) = 0;
    sub_608B4458(a1 + 4);
    sub_608B9D20(a1 + 40);
    if ( FIELD_U8(a1, 406) )
      sub_608AE7C8(a1 + 232);
    else
      sub_608CCFF0(a1 + 160);
    sub_608C17AC(a1 + 264);
    if ( FIELD_U8(a1, 388) )
    {
      sub_608AE228(a1 + 384);
      FIELD_U8(a1, 388) = 0;
    }
    if ( FIELD_U8(a1, 396) )
    {
      sub_608AE228(a1 + 392);
      FIELD_U8(a1, 396) = 0;
    }
    FIELD_U32(a1, 408) = 0;
    FIELD_U8(a1, 405) = 0;
    return 0;
  }
  return result;
}
