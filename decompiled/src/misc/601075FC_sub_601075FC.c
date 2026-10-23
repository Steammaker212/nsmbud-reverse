/* sub_601075FC
 * address: 0x601075FC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601075FC(int a1)
{
  _BYTE *v1; // r4
  char v2; // t1
  _BOOL4 v3; // r5
  int result; // r0
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  v2 = FIELD_U8(a1, 6608);
  v1 = (_BYTE *)(a1 + 6608);
  v5[0] = v2 & 1;
  v3 = !(v2 & 1);
  v5[1] = FIELD_U32(a1, 6600);
  v5[2] = *(_DWORD *)(a1 + 6584 + 4 * v5[0]);
  v5[3] = *(_DWORD *)(a1 + 6584 + 4 * v3);
  result = ((int (__fastcall *)(int, _DWORD *, int))loc_6063B9B8)(a1 + 6552, v5, a1 + 112);
  if ( result == 1 )
    *v1 = v3;
  return result;
}
