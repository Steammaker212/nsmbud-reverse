/* registerProfile_bosubig_koBowser_airship_boarding_for_0C0698
 * address: 0x600C0698   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_bosubig_koBowser_airship_boarding_for_0C0698())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C83930 = (int)(float)((float)(2147500000.0 * -180.0) / 180.0);
  dword_60C83934 = -1128920223;
  dword_60C8394C = 1068149419;
  dword_60C83938 = (int)(float)((float)(2147500000.0 * -30.0) / 180.0);
  dword_60C8393C = (int)(float)((float)(2147500000.0 * 20.0) / 180.0);
  dword_60C83940 = abs32(
                     ((int)(float)((float)(2147500000.0 * -30.0) / 180.0)
                    - (int)(float)((float)(2147500000.0 * -180.0) / 180.0))
                   / 60);
  dword_60C83944 = (int)(float)(2147500000.0 / 180.0);
  dword_60C83948 = -1085858702;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABCDF4;
  Profile__ctor(&stru_60C8382C, Actor_bosubig_koBowser_airship_boarding_for_build, 0x106u, &v2, &stru_60AF5984, 2);
  *v0 = &off_60BCA20C;
  dword_60C83848 = CurrentStateID + 1;
  dword_60C83844 = (int)&off_60BCA2E0;
  dword_60C8384C = (int)nullsub_2689;
  dword_60C83850 = 0;
  dword_60C83854 = (int)sub_600BE5E0;
  dword_60C83858 = 0;
  dword_60C8385C = (int)nullsub_2690;
  dword_60C83860 = 0;
  stru_60C83864.vtable = &off_60BCA2E0;
  stru_60C83864.id = CurrentStateID + 2;
  dword_60C8386C = (int)sub_600BE630;
  dword_60C83870 = 0;
  dword_60C83874 = (int)sub_600BE640;
  dword_60C83878 = 0;
  dword_60C8387C = (int)nullsub_2691;
  dword_60C83880 = 0;
  stru_60C83884.vtable = &off_60BCA2E0;
  stru_60C83884.id = CurrentStateID + 3;
  dword_60C8388C = (int)SE_OBJ_BOSS_WARP_CANNON_APP_ref;
  dword_60C83890 = 0;
  dword_60C83894 = (int)sub_600BE858;
  dword_60C83898 = 0;
  dword_60C8389C = (int)nullsub_2692;
  dword_60C838A0 = 0;
  stru_60C838A4.vtable = &off_60BCA2E0;
  stru_60C838A4.id = CurrentStateID + 4;
  dword_60C838AC = (int)sub_600BE9A8;
  dword_60C838B0 = 0;
  dword_60C838B4 = (int)sub_600BE9B8;
  dword_60C838B8 = 0;
  dword_60C838BC = (int)nullsub_2693;
  dword_60C838C0 = 0;
  stru_60C838C4.vtable = &off_60BCA2E0;
  stru_60C838C4.id = CurrentStateID + 5;
  dword_60C838CC = (int)ef_boss_cannon_ref;
  dword_60C838D0 = 0;
  dword_60C838D4 = (int)sub_600BEB0C;
  dword_60C838D8 = 0;
  dword_60C838DC = (int)nullsub_2694;
  dword_60C838E0 = 0;
  stru_60C838E4.vtable = &off_60BCA2E0;
  stru_60C838E4.id = CurrentStateID + 6;
  dword_60C838EC = (int)nullsub_2695;
  dword_60C838F0 = 0;
  dword_60C838F4 = (int)sub_600BEC64;
  dword_60C838F8 = 0;
  dword_60C838FC = (int)nullsub_2696;
  dword_60C83900 = 0;
  CurrentStateID += 7;
  dword_60C83908 = CurrentStateID;
  dword_60C83904 = (int)&off_60BCA2E0;
  dword_60C8390C = (int)sub_600BECD0;
  dword_60C83910 = 0;
  dword_60C83914 = (int)sub_600BEE20;
  dword_60C83918 = 0;
  dword_60C8391C = (int)nullsub_2697;
  dword_60C83920 = 0;
  return nullsub_2697;
}
