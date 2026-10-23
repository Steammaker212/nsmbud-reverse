/* sub_603DA468
 * address: 0x603DA468   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603DA468(int a1)
{
  char v1; // r12
  int v3; // r5

  v3 = FIELD_U32(a1, 1040);
  if ( ((unsigned int)&dword_60C9911C & ~(1614652548 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9911C) )
  {
    dword_60C99118 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C9911C);
  }
  if ( v3
    && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C99118) == 1
    && sqrtf(
         (float)((float)(FIELD_F32(v3, 11780) * FIELD_F32(v3, 11780))
               + (float)(FIELD_F32(v3, 11776) * FIELD_F32(v3, 11776)))
       + (float)(FIELD_F32(v3, 11784) * FIELD_F32(v3, 11784))) > 0.0 )
  {
    ((void (__fastcall *)(int))loc_603DA84C)(a1);
    StateMgr__changeState((StateMgr *)(a1 + 1068), (StateBase *)&dword_60C99198);
  }
}
