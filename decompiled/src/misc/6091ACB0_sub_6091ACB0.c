/* sub_6091ACB0
 * address: 0x6091ACB0   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091ACB0(_DWORD *a1)
{
  int result; // r0
  _BYTE v3[132]; // [sp+0h] [bp-98h] BYREF
  int v4; // [sp+84h] [bp-14h] BYREF

  dword_60CC72BC(FIELD_U32(dword_60CCFC8C, 28), 54, &v4);
  a1[71] = v4;
  if ( *a1 )
  {
    result = ((int (__fastcall *)(_DWORD *))dword_60CC7564)(a1 + 16);
  }
  else
  {
    sub_60920CD4(a1, v3);
    result = ((int (__fastcall *)(_BYTE *))dword_60CC751C)(v3);
  }
  a1[70] = result;
  return result;
}
