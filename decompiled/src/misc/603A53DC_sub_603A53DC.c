/* sub_603A53DC
 * address: 0x603A53DC   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_603A53DC()
{
  dword_60C977EC = 0;
  dword_60C977F0 = 0;
  dword_60C977F4 = 0;
  ShellEnemy_StateID_Sleep._._.id = CurrentStateID + 1;
  ShellEnemy_StateID_Sleep._.beginFunc = 0x1000002A0LL;
  ShellEnemy_StateID_Sleep._.executeFunc = 0x1000002A4LL;
  ShellEnemy_StateID_Sleep._.endFunc = 0x1000002A8LL;
  ShellEnemy_StateID_Sleep._._.vtable = &off_60BF474C;
  ShellEnemy_StateID_Sleep.baseState = (StateBase *)&dword_60C8EA94;
  dword_60C97708 = 1;
  dword_60C9770C = 664;
  dword_60C97710 = 1;
  dword_60C97714 = 668;
  dword_60C97718 = 1;
  dword_60C976FC = (int)&off_60BF474C;
  unk_60C97700 = CurrentStateID + 2;
  unk_60C97704 = 660;
  dword_60C9771C = (int)&stru_60C8EA70;
  ShellEnemy_StateID_slide._._.id = CurrentStateID + 3;
  ShellEnemy_StateID_slide._.beginFunc = 0x100000310LL;
  ShellEnemy_StateID_slide._.executeFunc = 0x100000314LL;
  ShellEnemy_StateID_slide._.endFunc = 0x100000318LL;
  ShellEnemy_StateID_slide._._.vtable = &off_60BF474C;
  ShellEnemy_StateID_slide.baseState = &NullState;
  dword_60C97750 = 1;
  dword_60C97754 = 800;
  dword_60C97758 = 1;
  dword_60C9775C = 804;
  dword_60C97760 = 1;
  unk_60C97744 = &off_60BF474C;
  unk_60C97748 = CurrentStateID + 4;
  unk_60C9774C = 796;
  dword_60C97764 = (int)&NullState;
  dword_60C97774 = 1;
  dword_60C97778 = 812;
  dword_60C9777C = 1;
  dword_60C97780 = 816;
  dword_60C97784 = 1;
  dword_60C97768 = (int)&off_60BF474C;
  unk_60C9776C = CurrentStateID + 5;
  unk_60C97770 = 808;
  dword_60C97788 = (int)&NullState;
  dword_60C97798 = 1;
  dword_60C9779C = 824;
  dword_60C977A0 = 1;
  dword_60C977A4 = 828;
  dword_60C977A8 = 1;
  dword_60C9778C = (int)&off_60BF474C;
  unk_60C97790 = CurrentStateID + 6;
  unk_60C97794 = 820;
  dword_60C977AC = (int)&NullState;
  CurrentStateID += 7;
  unk_60C977B4 = CurrentStateID;
  unk_60C977B8 = 456;
  dword_60C977BC = 1;
  dword_60C977C0 = 460;
  dword_60C977C4 = 1;
  dword_60C977C8 = 464;
  dword_60C977CC = 1;
  dword_60C977B0 = (int)&off_60BF474C;
  dword_60C977D0 = (int)&stru_60C90710;
  dword_60C977E0[0] = 0x8000000;
  dword_60C977E4 = 486539264;
  return 486539264;
}
