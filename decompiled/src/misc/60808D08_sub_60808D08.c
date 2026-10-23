/* sub_60808D08
 * address: 0x60808D08   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60808D08(int a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r0
  unsigned __int8 v5; // r5
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  int v11; // r0
  int v13; // [sp+4h] [bp-1Ch] BYREF
  int v14; // [sp+8h] [bp-18h] BYREF
  _WORD v15[9]; // [sp+Eh] [bp-12h] BYREF

  v2 = FIELD_U32(a1, 64);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U8(a1, 44) == 0;
  if ( !v3 && sub_608AF468(v2) != 1 )
    goto LABEL_9;
  v4 = FIELD_U32(a1, 68);
  v5 = 0;
  v6 = v4 == 0;
  if ( v4 )
    v6 = FIELD_U8(a1, 46) == 0;
  if ( !v6 && !sub_608AF468(v4) )
  {
LABEL_9:
    v15[0] = 0;
    sub_608A8604(&v14, a1 + 64);
    sub_608A8604(&v13, a1 + 68);
    v7 = FIELD_U32(a1, 64);
    v8 = v7 == 0;
    if ( v7 )
      v8 = FIELD_U8(a1, 44) == 0;
    if ( v8 || sub_608AF468(v7) )
    {
      v9 = FIELD_U32(a1, 68);
      v10 = v9 == 0;
      if ( v9 )
        v10 = FIELD_U8(a1, 46) == 0;
      if ( v10 || sub_608AF468(v9) )
        goto LABEL_27;
      if ( v13 )
        sub_608B72E8(v13, 1, v15);
      if ( !v15[0] )
        goto LABEL_27;
      v11 = v13;
      if ( !v13 )
        goto LABEL_27;
    }
    else
    {
      if ( v14 )
        sub_608B72E8(v14, 1, v15);
      if ( !v15[0] )
        goto LABEL_27;
      v11 = v14;
      if ( !v14 )
        goto LABEL_27;
    }
    sub_608B7318(v11, 1, 0);
LABEL_27:
    v5 = 0;
    if ( !FIELD_U8(a1, 144) )
    {
      v5 = v15[0];
      if ( v15[0] >= 4u )
        v5 = 0;
    }
    sub_608A86F0(&v13);
    sub_608A86F0(&v14);
  }
  return v5;
}
