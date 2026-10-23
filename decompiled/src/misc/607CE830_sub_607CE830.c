/* sub_607CE830
 * address: 0x607CE830   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CE830(int a1, float *a2, int a3, float a4)
{
  int v8; // r0
  int v9; // r7
  char v10; // r12

  sub_603FFDA0(dword_60C99DD4 + 852, 1);
  FIELD_U32(a1, 76) |= 4u;
  v8 = sub_607D6C28(a1);
  if ( v8 )
    FIELD_U32(v8, 76) |= 4u;
  sub_6076CE90(a1, a2, a3, a4);
  v9 = sub_607CFB50(a1);
  if ( sub_607D001C(a1, 1) == 1 )
  {
    if ( ((unsigned int)&dword_60C7B374 & ~(1618798792 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C7B370) == 1 )
      (*(void (__fastcall **)(int, float *, int, float))(*(_DWORD *)v9 + 660))(v9, a2, a3, a4);
  }
  sub_607CFC14(a1);
  sub_607CFB38(a1, &dword_60CC5398);
  return Player_changeState(a1, (StateBase *)&dword_60CBF7F8, 0);
}
