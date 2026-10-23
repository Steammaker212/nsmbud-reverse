/* sub_60867638
 * address: 0x60867638   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60867638(int a1)
{
  int v2; // r0
  int v3; // r5
  unsigned int v4; // r6
  int v5; // r0
  int result; // r0

  sub_60867200((_DWORD *)a1);
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 36) = 0;
  v2 = FIELD_U32(a1, 40);
  if ( v2 )
  {
    sub_60855BF0(v2);
    FIELD_U32(a1, 40) = 0;
  }
  if ( (FIELD_U8(a1, 12) & 3) != 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      nullsub_1449();
      nullsub_1448();
      ++v4;
      v3 += 8;
    }
    while ( v4 < (FIELD_U32(a1, 12) & 3u) );
  }
  v5 = FIELD_U32(a1, 20);
  if ( v5 )
  {
    sub_60855BF0(v5);
    FIELD_U32(a1, 20) = 0;
  }
  result = FIELD_U8(a1, 50);
  if ( (result & 0x20) != 0 )
  {
    sub_60855BF0(FIELD_U32(a1, 4));
    FIELD_U32(a1, 4) = 0;
    return 0;
  }
  return result;
}
