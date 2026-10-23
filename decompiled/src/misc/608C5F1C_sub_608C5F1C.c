/* sub_608C5F1C
 * address: 0x608C5F1C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C5F1C(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v10; // r0
  _DWORD *v11; // r2
  int v12; // t1

  v10 = (_DWORD *)sub_608CF170(*a1, (a2 + 127) & 0xFFFFFFC0, 64);
  if ( !v10 )
    return 0;
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10 + 16;
  v10[3] = a2;
  v10[4] = a3;
  v10[5] = a4;
  v10[6] = a5;
  v10[7] = a6;
  v11 = (_DWORD *)a1[1];
  v12 = v11[2];
  v11 += 2;
  *v10 = v12;
  v10[1] = v11;
  *(_DWORD *)(*v11 + 4) = v10;
  *v11 = v10;
  return v10 + 16;
}
