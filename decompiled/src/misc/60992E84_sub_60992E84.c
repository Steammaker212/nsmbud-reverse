/* sub_60992E84
 * address: 0x60992E84   size: 880   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60992E84(_DWORD *a1, const char **a2, int a3)
{
  const char *v6; // r7
  int v7; // r0
  int v8; // r7
  int v9; // r0
  int v10; // r7
  char *v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v16; // r0
  int v17; // r2
  int v18; // r1

  v6 = *a2;
  if ( !strcmp("NormalButton", *a2) )
  {
    v10 = sub_60855BC8(60);
    if ( !v10 )
      goto LABEL_30;
    sub_60990E0C();
    v11 = (char *)&unk_60C604DC;
LABEL_19:
    *(_DWORD *)v10 = v11 + 8;
    goto LABEL_31;
  }
  if ( !strcmp("DecisionButton", v6) )
  {
    v10 = sub_60855BC8(60);
    if ( v10 )
    {
      sub_60990E0C();
      *(_DWORD *)v10 = off_60C602C4;
      FIELD_U16(v10, 30) |= 0x20u;
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  if ( !strcmp("SelectButton", v6) )
  {
    v10 = sub_60855BC8(60);
    if ( !v10 )
      goto LABEL_30;
    sub_60990E0C();
    v11 = (char *)&unk_60C60588;
    goto LABEL_19;
  }
  if ( !strcmp("CheckButton", v6) )
  {
    v10 = sub_60855BC8(68);
    if ( v10 )
    {
      sub_60990E0C();
      *(_DWORD *)v10 = off_60C608B4;
      FIELD_U8(v10, 60) = 0;
      FIELD_U8(v10, 61) = 1;
      FIELD_U32(v10, 64) = 0;
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  if ( !strcmp("DragButton", v6) )
  {
    v12 = sub_60855BC8(84);
    v10 = v12;
    if ( v12 )
    {
      sub_6099356C(v12);
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  if ( !strcmp("CheckKeepButton", v6) )
  {
    v10 = sub_60855BC8(68);
    if ( !v10 )
      goto LABEL_30;
    sub_60990E0C();
    FIELD_U8(v10, 60) = 0;
    FIELD_U8(v10, 61) = 1;
    FIELD_U32(v10, 64) = 0;
    v11 = (char *)&unk_60C60958;
    goto LABEL_19;
  }
  if ( !strcmp("TwoTouchCheckKeepButton", v6) )
  {
    v13 = sub_60855BC8(80);
    v10 = v13;
    if ( v13 )
    {
      sub_60995718(v13);
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  if ( !strcmp("UniteButton", v6) )
  {
    v14 = sub_60855BC8(88);
    v10 = v14;
    if ( v14 )
    {
      sub_60995CB4(v14);
      goto LABEL_31;
    }
LABEL_30:
    v10 = 0;
LABEL_31:
    (*(void (__fastcall **)(int, const char **, int))(*(_DWORD *)v10 + 124))(v10, a2, a3);
    if ( v10 )
    {
      (*(void (__fastcall **)(_DWORD *, int))(*a1 + 16))(a1, v10);
      return v10;
    }
    return 0;
  }
  if ( !strcmp("BoxCursor", v6) )
  {
    v16 = sub_60855BC8(52);
    v8 = v16;
    if ( v16 )
      sub_609968C8(v16);
    else
      v8 = 0;
    sub_609969BC(v8, a2, a3);
    if ( v8 )
      goto LABEL_40;
  }
  else
  {
    v7 = strcmp("TraceGauge", v6);
    v8 = 0;
    if ( v7 )
      return v8;
    v9 = sub_60855BC8(76);
    v8 = v9;
    if ( v9 )
      sub_6099501C(v9);
    else
      v8 = 0;
    sub_60995090(v8, a2, a3);
    if ( v8 )
    {
LABEL_40:
      v17 = a1[2];
      v18 = FIELD_U32(v8, 4);
      FIELD_U32(v8, 4) = *(_DWORD *)v17;
      FIELD_U32(v18, 4) = v17;
      *(_DWORD *)(*(_DWORD *)v17 + 4) = v8 + 4;
      *(_DWORD *)v17 = v18;
      return v8;
    }
  }
  return 0;
}
