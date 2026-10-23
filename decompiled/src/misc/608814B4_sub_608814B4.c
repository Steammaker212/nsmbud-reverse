/* sub_608814B4
 * address: 0x608814B4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608814B4(int a1)
{
  _DWORD *v2; // r1
  void (__fastcall *v3)(_DWORD *); // r1
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  v2 = *(_DWORD **)(a1 + 328);
  if ( v2 )
  {
    sub_608813D8((int *)a1, v2);
    FIELD_U32(a1, 328) = 0;
    FIELD_U32(a1, 332) = 0;
  }
  sub_608813D8((int *)a1, *(_DWORD **)(a1 + 320));
  v3 = *(void (__fastcall **)(_DWORD *))(a1 + 524);
  if ( v3 )
  {
    v5[0] = FIELD_U32(a1, 24);
    v5[1] = a1;
    v3(v5);
    FIELD_U32(a1, 524) = 0;
  }
  FIELD_U8(a1, 8) = 0;
  FIELD_U32(a1, 32) = -1;
  return 1;
}
