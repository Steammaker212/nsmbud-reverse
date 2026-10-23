/* sub_6059EF1C
 * address: 0x6059EF1C   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6059EF1C(int a1)
{
  int v2; // r0
  int *result; // r0
  char v4; // r12
  int v5; // r5
  float v6; // s0
  int (**v7)(); // [sp+0h] [bp-18h] BYREF
  char v8; // [sp+4h] [bp-14h]

  v2 = FIELD_U32(a1, 7140);
  v7 = &off_60C07CE8;
  v8 = v2;
  result = (int *)sub_60008D1C(
                    ActorMgr__instance + 27168,
                    (int (__fastcall ***)(_DWORD))&v7,
                    *(_DWORD *)(ActorMgr__instance + 27172));
  v5 = *result;
  if ( *result )
  {
    if ( ((unsigned int)&dword_60CAFCF4 & ~(1616506756 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CAFCF4) )
    {
      dword_60CAFCF0 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60CAFCF4);
    }
    result = (int *)(**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60CAFCF0);
    if ( result == (int *)1 )
    {
      v6 = (float)FIELD_U32(v5, 652) * 16.0;
      FIELD_F32(a1, 7148) = v6 / 48.0;
      FIELD_U32(a1, 7152) = 1065353216;
      FIELD_F32(a1, 7156) = (float)(v6 / 48.0) * 0.1;
      FIELD_U32(a1, 7160) = 1036831949;
      FIELD_F32(a1, 6428) = (float)(v6 * 0.9) / 16.0;
      result = *(int **)(v5 + 8);
      FIELD_U32(a1, 7172) = result;
    }
  }
  return result;
}
