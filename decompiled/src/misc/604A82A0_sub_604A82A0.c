/* sub_604A82A0
 * address: 0x604A82A0   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A82A0(int a1)
{
  int v2; // r5

  v2 = a1 + 85956;
  sub_60502548(a1 + 85956);
  FIELD_U16(a1, 87008) = 0;
  sub_6047EABC((_DWORD *)(a1 + 85996));
  sub_60502A24(v2, &unk_60B02D7C, 12, 1);
  sub_60502C04(v2, &unk_60B02DAC, 1);
  FIELD_U32(a1, 86984) = 12;
  FIELD_U8(a1, 86999) = 0;
  FIELD_U8(a1, 86996) = 1;
  return 86996;
}
