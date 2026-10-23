/* sub_608D4FC8
 * address: 0x608D4FC8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D4FC8(float a1, int a2, _WORD *a3)
{
  int v3; // s0
  int v4; // r2
  _WORD *v5; // r2
  int result; // r0

  v3 = (int)(float)((float)((float)(2.0 - a1) * a1) * 121.0);
  v4 = v3;
  if ( v3 <= 0 )
    v4 = 0;
  if ( v3 > 121 )
    v4 = 121;
  v5 = (_WORD *)((char *)&unk_60B39314 + 10 * v4);
  *a3 = *v5;
  a3[3] = v5[3];
  a3[2] = v5[2];
  a3[1] = v5[1];
  result = (unsigned __int16)v5[4];
  a3[4] = result;
  return result;
}
