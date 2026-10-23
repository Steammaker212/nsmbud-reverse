/* sub_607EB998
 * address: 0x607EB998   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607EB998(_DWORD *a1, int a2, int a3)
{
  _QWORD v7[11]; // [sp+0h] [bp-98h] BYREF
  int v8; // [sp+58h] [bp-40h]
  int v9; // [sp+5Ch] [bp-3Ch]

  memset(a1, 0, 37);
  sub_608EEFA8(v7);
  *((_BYTE *)&v7[3] + 20 * v8) = 1;
  v9 = a2;
  v7[0] = *(_QWORD *)&dword_60CC5B08;
  *a1 = sub_608F01B0(a3, v7);
  return a1;
}
