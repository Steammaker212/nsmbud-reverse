/* sub_607F96E0
 * address: 0x607F96E0   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F96E0(int a1)
{
  int v2; // r0
  int v3; // r0

  if ( !dword_60C99E68 )
  {
    sub_60401BB8(0);
    sub_60401ED4(dword_60C99E68);
  }
  sub_6040C76C(0);
  nullsub_2208();
  sub_60023F4C();
  sub_60406888(dword_60C9A1E0);
  sub_604075A4(dword_60C9A1E0);
  sub_604BF24C(a1 + 1304);
  sub_60544F4C(a1 + 51544);
  v2 = operator_new(0x2BE8u);
  v3 = sub_604EDCD8(v2);
  FIELD_U32(a1, 85056) = v3;
  T_Text_01_ref(v3);
  sub_603F7FF8(0);
  sub_603F807C(dword_60C99DD0);
  system_ref_426530(dword_60C9BBD4);
  sub_604973E4(0);
  sub_60498FAC((_DWORD *)dword_60CA059C, 6, 5);
  sub_603FEEB4(0);
  sub_603FEF70(dword_60C99E24);
  sub_603FE46C(0);
  sub_603FE52C(dword_60C99E1C);
  sub_6045BF58(a1 + 896, 0);
  sub_608EF6A8(a1);
  return sub_600240A4();
}
