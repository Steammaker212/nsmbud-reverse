/* sub_606768FC
 * address: 0x606768FC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606768FC(unsigned __int8 *a1)
{
  int v2; // r5
  __int64 v3; // r0
  int v4; // r2
  __int64 v5; // r0
  _BYTE *v6; // r3

  v2 = a1[6130];
  v3 = sub_6072A6DC(EventMgr__instance, a1[539], a1[540]);
  v4 = EventMgr__instance;
  v5 = FIELD_U64(EventMgr__instance, 16) & v3;
  if ( v2 == 2 )
  {
    v6 = a1 + 6104;
    if ( v5 )
    {
      *v6 = 1;
      LODWORD(v5) = FIELD_U8(v4, 2328);
    }
    else
    {
      *v6 = 0;
      LODWORD(v5) = 255;
    }
    goto LABEL_8;
  }
  if ( v2 == 1 )
  {
    LODWORD(v5) = v5 | HIDWORD(v5);
    if ( (_DWORD)v5 )
    {
      a1[6104] = 1;
      LODWORD(v5) = FIELD_U8(v4, 2328);
LABEL_8:
      a1[6132] = v5;
    }
  }
  return v5;
}
