/* Actor_CourseSelectkaunira_build
 * address: 0x60185218   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_CourseSelectkaunira_build(int a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  int v4; // r2

  v2 = (_DWORD *)operator_new(0x12Cu);
  sub_601A75F0(v2, a1);
  *v2 = off_60BD519C;
  v2[70] = 0;
  v2[69] = 0;
  v2[68] = 0;
  v2[67] = 0;
  v3 = v2[21];
  v4 = v2[22];
  v2[71] = v2[20];
  v2[72] = v3;
  v2[73] = v4;
  v2[74] = sead__Random__getU32((void *)sead__GlobalRandom__sInstance) & 0x7FFFFFFF;
  return v2;
}
