/* sub_606169D8
 * address: 0x606169D8   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_606169D8(int a1)
{
  __int64 v1; // r0
  unsigned int v2; // r2
  unsigned int result; // r0
  __int64 v4; // r4
  unsigned __int64 v5; // r2
  int v6; // r1
  int v7; // r3
  unsigned int v8; // r1
  int v9; // r2
  int v10; // r5
  int v11; // r7

  FIELD_U16(a1, 7090) = 8;
  v1 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  v2 = v1;
  result = EventMgr__instance;
  v4 = FIELD_U64(EventMgr__instance, 16);
  v5 = v4 & __PAIR64__(HIDWORD(v1), v2);
  v6 = v5 | HIDWORD(v4) & HIDWORD(v1);
  if ( v6 )
  {
    result = sub_6072A66C(EventMgr__instance, v6, v5);
    if ( result != 255 )
    {
      v7 = result - 32;
      v8 = 1u >> (32 - result);
      if ( (int)(result - 32) >= 0 )
        v8 = 1 << v7;
      v9 = 1 << result;
      if ( v7 >= 0 )
        v9 = 0;
      v10 = EventMgr__instance;
      v11 = FIELD_U32(EventMgr__instance, 20);
      FIELD_U32(EventMgr__instance, 16) &= ~v9;
      FIELD_U32(v10, 20) = v11 & ~v8;
      if ( result >= 0x40 )
        result = 0;
      result = v10 + 12 * result;
      FIELD_U32(result, 24) = 0;
    }
  }
  return result;
}
