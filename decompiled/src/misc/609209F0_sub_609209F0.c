/* sub_609209F0
 * address: 0x609209F0   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609209F0(_DWORD *result)
{
  _DWORD *v1; // r4
  int v2; // r6
  int v3; // r7
  _BYTE v4[192]; // [sp+8h] [bp-160h] BYREF
  _BYTE v5[160]; // [sp+C8h] [bp-A0h] BYREF

  v1 = result;
  v2 = *result;
  if ( *result )
  {
    v3 = result[1];
    memset(v4, 0, sizeof(v4));
    sub_60972534(v1 + 6, v5);
    dword_60CC74CC(v5, v2, v3);
    dword_60CC7560(v4, v5);
    result = (_DWORD *)sub_60917844((int)(v1 + 16), v4, 0, v1[66], 1);
    if ( !result )
      return (_DWORD *)dword_60CC7568(v4);
  }
  return result;
}
