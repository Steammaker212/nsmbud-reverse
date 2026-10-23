/* sub_604D7E00
 * address: 0x604D7E00   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D7E00(int a1)
{
  int v1; // r3
  int v2; // r5
  int v3; // r5
  char v5; // [sp+4h] [bp-1Ch] BYREF
  char v6; // [sp+5h] [bp-1Bh]
  int v7; // [sp+8h] [bp-18h]
  int v8; // [sp+Ch] [bp-14h]

  v1 = 0;
  v8 = 4;
  v7 = 3;
  v5 = 1;
  v6 = 1;
  v2 = FIELD_U32(a1, 13276);
  if ( v2 )
  {
    if ( v2 != 2 )
    {
      v3 = a1 + 3692;
      goto LABEL_7;
    }
    v1 = 1;
  }
  *(_BYTE *)((unsigned int)&v5 | v1) = 0;
  v3 = a1 + 3692;
  if ( !v5 )
  {
    sub_60502B90(v3, 4);
    goto LABEL_8;
  }
LABEL_7:
  sub_60502D0C(v3, 4);
LABEL_8:
  if ( v6 )
    return sub_60502D0C(v3, 3);
  else
    return sub_60502B90(v3, 3);
}
