/* sub_604D7C0C
 * address: 0x604D7C0C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D7C0C(int a1)
{
  int v2; // r2
  int v3; // r0
  int v4; // r6
  _DWORD v6[8]; // [sp+0h] [bp-20h] BYREF

  FIELD_U8(a1, 36) = 1;
  FIELD_U8(a1, 37) = 1;
  FIELD_U32(a1, 40) = 0;
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = InOut_ScrollToR_ScrollToL_LoopArrow_ref(0);
  sub_60473DE4((_DWORD *)(a1 + 44), 0, v6, 0);
  v6[0] = 257;
  v2 = FIELD_U32(a1, 13276);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 != 2 )
    {
      v4 = a1 + 3692;
      goto LABEL_7;
    }
    v3 = 1;
  }
  *(_BYTE *)((unsigned int)v6 | v3) = 0;
  v4 = a1 + 3692;
  if ( !LOBYTE(v6[0]) )
  {
    sub_60502B90(a1 + 3692, 4);
    goto LABEL_8;
  }
LABEL_7:
  sub_60502D0C(v4, 4);
LABEL_8:
  if ( BYTE1(v6[0]) )
    sub_60502D0C(v4, 3);
  else
    sub_60502B90(v4, 3);
  FIELD_U32(a1, 4720) = 2;
  return 2;
}
