/* sub_604C0308
 * address: 0x604C0308   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C0308(int a1)
{
  unsigned int v2; // r6
  unsigned int v3; // r0
  int v4; // r0

  sub_60508C34(a1 + 9916);
  sub_60508C34(a1 + 13672);
  sub_60508C34(a1 + 17428);
  if ( FIELD_S32(a1, 35552) >= 1 )
  {
    v2 = 0;
    do
    {
      v3 = 0;
      if ( v2 < 4 )
        v3 = v2;
      sub_60509CB8(a1 + 3580 * v3 + 21232);
      ++v2;
    }
    while ( (signed int)v2 < FIELD_U32(a1, 35552) );
  }
  StateMgr__execute((StateMgr *)(a1 + 520));
  sub_60507028(a1 + 35580);
  sub_60507028(a1 + 39200);
  sub_60507028(a1 + 42820);
  sub_60507028(a1 + 46440);
  v4 = FIELD_U32(a1, 536);
  FIELD_U32(v4, 32) = -979615744;
  FIELD_U8(v4, 64) |= 0x10u;
  sub_6050229C(a1 + 564);
  sub_6050A8A4(a1 + 2688);
  sub_60473B58(*(_DWORD **)(a1 + 4), 6u, 0);
  return sub_604C03FC(a1);
}
