/* sub_605A53E4
 * address: 0x605A53E4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A53E4(int a1)
{
  int v2; // r0
  int v3; // r1
  __int64 v4; // r0

  v2 = FIELD_U32(a1, 20);
  v3 = dword_60B04EA4[((unsigned int)v2 >> 28) & 7];
  FIELD_U32(a1, 6868) = v3;
  if ( v2 < 0 )
    FIELD_U32(a1, 6868) = v3 ^ 0x80000000;
  FIELD_F32(a1, 72308) = (float)(unsigned __int8)((unsigned int)v2 >> 12) * 16.0;
  v4 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  FIELD_U64(a1, 72280) = v4;
  FIELD_U64(a1, 72296) = v4;
  return v4;
}
