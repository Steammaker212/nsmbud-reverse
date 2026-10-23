/* SE_SYS_BACK_ref_4A9008
 * address: 0x604A9008   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BACK_ref_4A9008(int a1)
{
  int v2; // r1
  _BYTE *v3; // r0
  int v4; // r1
  _BYTE *v5; // r0
  int v6; // r8
  int v7; // r7
  int v8; // r0
  int v9; // r1
  int i; // r3

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
  v6 = 1;
  sub_60502A24(a1 + 85956, &unk_60B02DB0, 13, 1);
  v7 = dword_60CA17A4;
  v8 = sub_6047482C(a1 + 64, 6u);
  if ( !v8 )
    goto LABEL_22;
  v9 = FIELD_U32(v8, 56);
  if ( v7 != v9 )
  {
    for ( i = 1; *(unsigned __int8 *)(v7 + i - 1) == *(unsigned __int8 *)(v9 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v7 + i - 1) )
        goto LABEL_20;
      if ( i > 0x80000 || *(unsigned __int8 *)(v7 + i) != *(unsigned __int8 *)(v9 + i) )
        break;
      if ( !*(_BYTE *)(v7 + i) )
        goto LABEL_20;
    }
    goto LABEL_22;
  }
LABEL_20:
  if ( !(int)FIELD_F32(v8, 16) )
  {
LABEL_22:
    sub_60502C04(a1 + 85956, &unk_60B02DEC, 2);
    goto LABEL_23;
  }
  sub_60502C04(a1 + 85956, &unk_60B02DE4, 2);
  v6 = 3;
LABEL_23:
  FIELD_U32(a1, 86984) = v6;
  sub_605029FC(a1 + 85956, &unk_60B02D48, "SE_SYS_BACK");
  sub_605029FC(a1 + 85956, &unk_60B02D54, "SE_SYS_BACK");
  FIELD_U8(a1, 86999) = 0;
  FIELD_U8(a1, 86996) = 1;
  return 86996;
}
