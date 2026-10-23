/* sub_603F67B8
 * address: 0x603F67B8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F67B8(int a1)
{
  sub_604973E4(0);
  sub_60498FAC(dword_60CA059C, 14, 14);
  sub_603FEEB4(0);
  sub_603FEF70(dword_60C99E24);
  sub_603FE46C(0);
  sub_603FE52C(dword_60C99E1C);
  FIELD_U8(dword_60CC6D78, 98529) = 0;
  sub_6081F524();
  sub_60542110(0);
  N_Fade_00_ref(dword_60CABDE4);
  return ChallengeSelectTmpHeap2_ref(a1 + 24);
}
