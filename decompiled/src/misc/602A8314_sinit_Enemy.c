/* sinit_Enemy
 * address: 0x602A8314   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __cdecl sinit_Enemy()
{
  dword_60C906DC = 0;
  dword_60C906E0 = 0;
  dword_60C906E4 = 0;
  unk_60C906E8 = -0.1875 * 1.3;
  stru_60C906EC._.id = CurrentStateID + 1;
  stru_60C906EC.beginFunc = 0x1000001BCLL;
  stru_60C906EC.executeFunc = 0x1000001C0LL;
  stru_60C906EC.endFunc = 0x1000001C4LL;
  stru_60C906EC._.vtable = &StateVirtual_Enemy_vtable;
  dword_60C9070C = (int)&NullState;
  stru_60C90710._.executeFunc = 0x1000001CCLL;
  stru_60C90710._.endFunc = 0x1000001D0LL;
  stru_60C90710._._.vtable = &StateVirtual_Enemy_vtable;
  stru_60C90710._._.id = CurrentStateID + 2;
  stru_60C90710._.beginFunc = 0x1000001C8LL;
  stru_60C90710.baseState = &NullState;
  unk_60C90740 = 1;
  unk_60C90744 = 472;
  unk_60C90748 = 1;
  unk_60C9074C = 476;
  unk_60C90750 = 1;
  dword_60C90734 = &StateVirtual_Enemy_vtable;
  unk_60C90738 = CurrentStateID + 3;
  unk_60C9073C = 468;
  dword_60C90754 = (int)&NullState;
  stru_60C90758._.executeFunc = 0x1000001E4LL;
  stru_60C90758._.endFunc = 0x1000001E8LL;
  stru_60C90758._._.vtable = &StateVirtual_Enemy_vtable;
  stru_60C90758._._.id = CurrentStateID + 4;
  stru_60C90758._.beginFunc = 0x1000001E0LL;
  stru_60C90758.baseState = &NullState;
  stru_60C9077C._.executeFunc = 0x1000001F0LL;
  stru_60C9077C._.endFunc = 0x1000001F4LL;
  stru_60C9077C._._.vtable = &StateVirtual_Enemy_vtable;
  stru_60C9077C._._.id = CurrentStateID + 5;
  stru_60C9077C._.beginFunc = 0x1000001ECLL;
  stru_60C9077C.baseState = &NullState;
  stru_60C907A0._.executeFunc = 0x1000001FCLL;
  stru_60C907A0._.endFunc = 0x100000200LL;
  stru_60C907A0._._.vtable = &StateVirtual_Enemy_vtable;
  stru_60C907A0._._.id = CurrentStateID + 6;
  stru_60C907A0._.beginFunc = 0x1000001F8LL;
  stru_60C907A0.baseState = &NullState;
  CurrentStateID += 7;
  stru_60C907C4._._.id = CurrentStateID;
  stru_60C907C4._.beginFunc = 0x100000204LL;
  stru_60C907C4._.executeFunc = 0x100000208LL;
  stru_60C907C4._.endFunc = 0x10000020CLL;
  stru_60C907C4._._.vtable = &StateVirtual_Enemy_vtable;
  stru_60C907C4.baseState = &NullState;
}
