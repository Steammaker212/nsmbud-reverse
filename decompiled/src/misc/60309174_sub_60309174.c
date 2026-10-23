/* sub_60309174
 * address: 0x60309174   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60309174(int a1, int a2, int a3)
{
  int v5; // r1
  int v6; // r7
  unsigned int v8; // r0
  StateBase *CurrentState; // r0
  int v10; // r5
  char v11; // r12
  char v12; // r5
  int v13; // r0

  v5 = 0;
  v6 = 0;
  v8 = FIELD_U8(a2, 84);
  if ( v8 < 4 )
    v5 = (char)v8;
  *(_WORD *)(a1 + 2 * v5 + 6140) = 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v10 == (*(int (**)(void))(dword_60C93008 + 8))() )
  {
    v12 = FIELD_U8(a2, 84);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613795828 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v13 = (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B378);
    if ( v13 )
      v13 = a2;
    v6 = 1;
    if ( sub_6077524C(v13, a1) == 1 )
    {
      FIELD_U8(a1, 6596) = v12;
      FIELD_U32(a1, 6564) = a3;
      EffectWrapper_update((EffectWrapper *)(a1 + 6412), 346, (Vec3 *)(a1 + 6516), 0, (Vec3 *)(a1 + 144));
      v6 = 1;
      FIELD_U8(a1, 6606) = 1;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93028);
    }
  }
  return v6;
}
