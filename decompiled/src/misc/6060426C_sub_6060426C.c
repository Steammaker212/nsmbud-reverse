/* sub_6060426C
 * address: 0x6060426C   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060426C(int a1, int a2, __int64 a3)
{
  int v3; // r5
  unsigned int v4; // r6
  int result; // r0
  int v7; // r2
  unsigned int *v8; // r7

  v3 = HIDWORD(a3);
  v4 = a3;
  if ( a2 == 1 )
  {
    result = a1 + 6112;
    if ( FIELD_U64(a1, 6112) != a3 )
    {
      *(_DWORD *)result = a3;
      FIELD_U32(a1, 6116) = HIDWORD(a3);
      EventMgr_set(EventMgr__instance, FIELD_U8(a1, 6122), 0, (FIELD_U8(a1, 20) & 1) == 0, 0, 0, 0, 0);
      result = FIELD_U8(a1, 20);
      if ( (result & 0xF0) == 0 )
      {
        FIELD_U8(a1, 19) = 1;
        return 1;
      }
    }
  }
  else
  {
    v7 = FIELD_U32(a1, 20);
    v8 = (unsigned int *)(a1 + 6112);
    result = v7 & 0xF0;
    if ( result == 32 )
    {
      result = *v8 ^ v4 | FIELD_U32(a1, 6116) ^ HIDWORD(a3);
      if ( *(_QWORD *)v8 != __PAIR64__(HIDWORD(a3), v4) )
        result = EventMgr_set(EventMgr__instance, FIELD_U8(a1, 6122), 0, (v7 & 1) != 0, 0, 0, 0, 0);
    }
    *v8 = v4;
    FIELD_U32(a1, 6116) = v3;
  }
  return result;
}
