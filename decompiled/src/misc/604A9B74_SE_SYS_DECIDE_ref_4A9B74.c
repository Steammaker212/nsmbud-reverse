/* SE_SYS_DECIDE_ref_4A9B74
 * address: 0x604A9B74   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DECIDE_ref_4A9B74(int a1)
{
  int v2; // r1
  _BYTE *v3; // r0
  int v4; // r1
  _BYTE *v5; // r0

  v2 = 61;
  v3 = (_BYTE *)(a1 + 97951);
  do
  {
    if ( *(v3 - 6) )
      *v3 = 0;
    v3 += 2988;
    --v2;
  }
  while ( v2 );
  v4 = 0;
  v5 = (_BYTE *)(a1 + 97950);
  while ( !*(v5 - 5) || *(_DWORD *)(v5 - 154) )
  {
    ++v4;
    v5 += 2988;
    if ( v4 >= 61 )
      goto LABEL_11;
  }
  *v5 = 1;
LABEL_11:
  sub_60502548(a1 + 85956);
  FIELD_U16(a1, 87008) = 0;
  sub_6047EABC((_DWORD *)(a1 + 85996));
  sub_60502A24(a1 + 85956, &unk_60B02DF4, 13, 1);
  sub_60502C04(a1 + 85956, &unk_60B02E28, 2);
  FIELD_U32(a1, 86984) = 1;
  sub_605029FC(a1 + 85956, &unk_60B02D48, "SE_SYS_DECIDE");
  sub_605029FC(a1 + 85956, &unk_60B02D54, "SE_SYS_DECIDE");
  FIELD_U8(a1, 86999) = 0;
  FIELD_U8(a1, 86996) = 1;
  return 86996;
}
