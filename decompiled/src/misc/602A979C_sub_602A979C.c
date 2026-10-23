/* sub_602A979C
 * address: 0x602A979C   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int sub_602A979C()
{
  dword_60C908B4 = 0;
  dword_60C908B8 = 0;
  dword_60C908BC = 0;
  Enemy_StateId_Frozen._._.id = CurrentStateID + 1;
  Enemy_StateId_Frozen._.beginFunc = 0x100000264LL;
  Enemy_StateId_Frozen._.executeFunc = 0x100000268LL;
  Enemy_StateId_Frozen._.endFunc = 0x10000026CLL;
  Enemy_StateId_Frozen._._.vtable = &StateVirtual_Enemy_vtable;
  Enemy_StateId_Frozen.baseState = &NullState;
  stru_60C908E4._.executeFunc = 0x100000214LL;
  stru_60C908E4._.endFunc = 0x100000218LL;
  stru_60C908E4._._.vtable = &StateVirtual_Enemy_vtable;
  stru_60C908E4._._.id = CurrentStateID + 2;
  stru_60C908E4._.beginFunc = 0x100000210LL;
  stru_60C908E4.baseState = &NullState;
  stru_60C90908._.executeFunc = 0x100000220LL;
  stru_60C90908._.endFunc = 0x100000224LL;
  stru_60C90908._._.vtable = &StateVirtual_Enemy_vtable;
  stru_60C90908._._.id = CurrentStateID + 3;
  stru_60C90908._.beginFunc = 0x10000021CLL;
  stru_60C90908.baseState = &NullState;
  stru_60C9092C._.executeFunc = 0x10000022CLL;
  stru_60C9092C._.endFunc = 0x100000230LL;
  stru_60C9092C._._.vtable = &StateVirtual_Enemy_vtable;
  stru_60C9092C._._.id = CurrentStateID + 4;
  stru_60C9092C._.beginFunc = 4294967848LL;
  stru_60C9092C.baseState = &NullState;
  stru_60C90950._.executeFunc = 0x100000238LL;
  stru_60C90950._.endFunc = 0x10000023CLL;
  stru_60C90950._._.vtable = &StateVirtual_Enemy_vtable;
  stru_60C90950._._.id = CurrentStateID + 5;
  stru_60C90950._.beginFunc = 0x100000234LL;
  stru_60C90950.baseState = &NullState;
  stru_60C90974._.executeFunc = 0x100000244LL;
  stru_60C90974._.endFunc = 0x100000248LL;
  stru_60C90974._._.vtable = &StateVirtual_Enemy_vtable;
  stru_60C90974._._.id = CurrentStateID + 6;
  stru_60C90974._.beginFunc = 0x100000240LL;
  stru_60C90974.baseState = &NullState;
  stru_60C90998._.executeFunc = 0x100000250LL;
  stru_60C90998._.endFunc = 0x100000254LL;
  stru_60C90998._._.vtable = &StateVirtual_Enemy_vtable;
  stru_60C90998._._.id = CurrentStateID + 7;
  stru_60C90998._.beginFunc = 0x10000024CLL;
  stru_60C90998.baseState = &NullState;
  CurrentStateID += 8;
  stru_60C909BC._._.id = CurrentStateID;
  stru_60C909BC._.beginFunc = 0x100000258LL;
  stru_60C909BC._.executeFunc = 0x10000025CLL;
  stru_60C909BC._.endFunc = 0x100000260LL;
  stru_60C909BC._._.vtable = &StateVirtual_Enemy_vtable;
  stru_60C909BC.baseState = &NullState;
  return 1;
}
