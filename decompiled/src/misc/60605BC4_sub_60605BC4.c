/* sub_60605BC4
 * address: 0x60605BC4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60605BC4(int a1)
{
  unsigned int v1; // r12
  __int64 v2; // r2
  unsigned int v3; // lr
  __int64 v4; // r2
  int v5; // r1

  v1 = FIELD_U32(a1, 6108);
  v2 = FIELD_U64(EventMgr__instance, 16);
  v3 = FIELD_U32(a1, 6104);
  HIDWORD(v4) = v1 & HIDWORD(v2);
  LODWORD(v4) = v3 & v2;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v5 = v4 | HIDWORD(v4);
    if ( v4 )
      v5 = 1;
  }
  else
  {
    v5 = v4 == __PAIR64__(v1, v3);
  }
  return sub_6060426C(a1, v5, v4);
}
