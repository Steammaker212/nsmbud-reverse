/* sub_605A7150
 * address: 0x605A7150   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605A7150(int a1, int a2, float *a3)
{
  char v3; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r6
  int v6; // r5
  float v7; // s16
  float WrappedXPos; // s0
  float v9; // s2
  float v10; // s0

  v4 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 144);
  if ( ((unsigned int)&dword_60CB0078 & ~(1616540016 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0078) )
  {
    dword_60CB0074 = (int)&off_60BC8348;
    _cxa_guard_release(&dword_60CB0078);
  }
  if ( v4 )
  {
    v6 = (**v4)(v4, &dword_60CB0074);
    if ( v6 )
      v6 = (int)v4;
  }
  else
  {
    v6 = 0;
  }
  v7 = a3[1];
  WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, *a3);
  if ( v6
    && FIELD_U32(v6, 89736) == 19
    && (v9 = FIELD_F32(v6, 89776), WrappedXPos > v9)
    && WrappedXPos < (float)(v9 + FIELD_F32(v6, 6852))
    && (v10 = FIELD_F32(v6, 112), v7 > (float)(v10 + -8.0)) )
  {
    return v7 < (float)(v10 + 8.0);
  }
  else
  {
    return 0;
  }
}
