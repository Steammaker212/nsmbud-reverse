/* sub_600238B8
 * address: 0x600238B8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *sub_600238B8()
{
  int v0; // r0
  _DWORD *v1; // r0
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r0
  _DWORD *result; // r0

  v0 = operator_new(0x90u);
  v1 = (_DWORD *)sub_6081220C(v0, 1, 1);
  *v1 = off_60BC1540;
  dword_60C7F53C = (int)v1;
  v2 = operator_new(0x90u);
  v3 = (_DWORD *)sub_6081220C(v2, 1, 1);
  *v3 = off_60BC1540;
  dword_60C7F540 = (int)v3;
  v4 = operator_new(0x90u);
  v5 = (_DWORD *)sub_6081220C(v4, 1, 1);
  *v5 = off_60BC1540;
  dword_60C7F544 = (int)v5;
  v6 = operator_new(0x90u);
  result = (_DWORD *)sub_6081220C(v6, 1, 1);
  *result = off_60BC1540;
  dword_60C7F548 = (int)result;
  return result;
}
