/* sub_60830C08
 * address: 0x60830C08   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60830C08(int a1)
{
  int v2; // r0
  _BYTE *v3; // r4
  __int64 v4; // r0

  v2 = FIELD_U32(dword_60C99DD4, 260);
  if ( v2 )
    FIELD_U8(v2, 4036) = 1;
  FIELD_U8(a1, 6160) = 0;
  v3 = (_BYTE *)(a1 + 6160);
  LODWORD(v4) = FIELD_U32(dword_60C9A230, 2072);
  if ( (_DWORD)v4 )
  {
    v4 = 10LL * sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    if ( HIDWORD(v4) <= 2 )
    {
      *v3 = 1;
      LODWORD(v4) = 1;
    }
  }
  return v4;
}
