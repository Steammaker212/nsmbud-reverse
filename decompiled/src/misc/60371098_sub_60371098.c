/* sub_60371098
 * address: 0x60371098   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60371098(int a1, _DWORD *a2)
{
  int v4; // r1
  _BOOL4 v5; // r1
  int v6; // r1
  _BOOL4 v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r0
  bool v11; // zf

  sub_603728E8();
  *(_DWORD *)a1 = off_60BF08AC;
  v4 = a2[3];
  if ( v4 )
    v5 = FIELD_U32(v4, 8) == 532
      || FIELD_U32(v4, 8) == 533
      || FIELD_U32(v4, 8) == 538
      || FIELD_U32(v4, 8) == 535
      || FIELD_U32(v4, 8) == 537;
  else
    v5 = 0;
  FIELD_U32(a1, 11956) = v5;
  v6 = a2[3];
  if ( v6 )
    v7 = FIELD_U32(v6, 8) == 538;
  else
    v7 = 0;
  FIELD_U32(a1, 11960) = v7;
  FIELD_U32(a1, 11964) = 0;
  FIELD_U32(a1, 11968) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 11972));
  FIELD_U32(a1, 11972) = off_60BC1450;
  v8 = a2[3];
  if ( !v8 )
    goto LABEL_23;
  v9 = FIELD_U32(v8, 8);
  v10 = *a2 & 0xF;
  if ( v9 != 530 )
  {
    v11 = v9 == 531;
    if ( v9 != 531 )
      v11 = v9 == 532;
    if ( !v11 && v9 != 533 )
    {
      if ( v9 == 538 )
        goto LABEL_24;
      v10 = 1;
      if ( v9 == 534 )
        goto LABEL_24;
      if ( v9 == 535 )
        goto LABEL_24;
      v10 = 8;
      if ( v9 == 536 || v9 == 537 )
        goto LABEL_24;
LABEL_23:
      v10 = 0;
      goto LABEL_24;
    }
  }
  if ( (*a2 & 0xFu) > 0xA )
    goto LABEL_23;
  if ( ((1 << (*a2 & 0xF)) & 0x609) == 0 )
    v10 = 0;
LABEL_24:
  FIELD_U32(a1, 11688) = v10;
  return a1;
}
