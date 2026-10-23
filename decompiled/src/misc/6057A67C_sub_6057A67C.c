/* sub_6057A67C
 * address: 0x6057A67C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057A67C(int a1)
{
  int *v2; // r0
  _BYTE *v3; // r4
  int v4; // t1
  int result; // r0
  int target; // [sp+4h] [bp-Ch] BYREF

  v2 = (int *)(a1 + 164);
  target = dword_60CAED40;
  v4 = FIELD_U8(a1, 7480);
  v3 = (_BYTE *)(a1 + 7480);
  if ( v4 )
    target = -dword_60CAED40;
  result = moveValueTo(v2, &target, &dword_60CAED44);
  if ( result == 1 )
  {
    result = (unsigned __int8)*v3 ^ 1;
    *v3 = result;
  }
  return result;
}
