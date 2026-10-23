/* sub_601C29D8
 * address: 0x601C29D8   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C29D8(_DWORD *a1)
{
  int v2; // r1
  int result; // r0
  _DWORD *v4; // r0

  v2 = sub_601860F8((int)a1);
  result = 0;
  if ( v2 == 1 )
  {
    sub_601C6044(a1, a1 + 271);
    sub_60169018(a1);
    a1[274] = 6;
    if ( sub_601916F4(dword_60C8996C) == 11 )
      sub_601BA0F8((int)a1, 9, 0.0, 0.0);
    else
      sub_601B69E0((int)a1);
    v4 = (_DWORD *)sub_601E0040(a1 + 271);
    a1[246] = *v4;
    a1[247] = v4[1];
    a1[248] = v4[2];
    a1[255] = *(_DWORD *)(sub_601CF9C0(dword_60C8AEF0) + 180);
    return 1;
  }
  return result;
}
