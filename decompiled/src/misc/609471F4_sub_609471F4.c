/* sub_609471F4
 * address: 0x609471F4   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609471F4(__int64 a1, int a2)
{
  int v2; // r2
  int (*v3)(void); // r3
  int v4; // r1
  int result; // r0

  HIDWORD(a1) = FIELD_U32(a2, 12);
  v2 = FIELD_U32(a2, 8);
  if ( a1 == v2 )
  {
    v3 = *(int (**)(void))(*(_DWORD *)a1 + 36);
    goto LABEL_5;
  }
  if ( !(v2 ^ ((_DWORD)a1 + 1) | HIDWORD(a1) ^ ((_DWORD)a1 == -1)) )
  {
    v3 = *(int (**)(void))(*(_DWORD *)a1 + 36);
LABEL_5:
    v4 = v3();
    result = 1;
    if ( v4 )
      return result;
    return 0;
  }
  if ( v2 ^ ((_DWORD)a1 + 2) | HIDWORD(a1) ^ __CFADD__((_DWORD)a1, 2) )
    return 0;
  sub_60946F84((_DWORD *)a1, (int)&off_60C5CB30, (FIELD_U32(a1, 392) >> 1) & 1);
  return 2;
}
