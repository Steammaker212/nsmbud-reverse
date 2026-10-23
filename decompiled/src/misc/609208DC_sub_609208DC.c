/* sub_609208DC
 * address: 0x609208DC   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609208DC(int *a1, int *a2, char a3)
{
  int v4; // r6
  int v5; // r5
  int v6; // r1
  int v7; // r7
  int v8; // r3
  int result; // r0
  int v10; // r5
  int v11; // r1
  bool v12; // zf
  int v13; // r7
  _BYTE v14[192]; // [sp+8h] [bp-160h] BYREF
  _BYTE v15[160]; // [sp+C8h] [bp-A0h] BYREF

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = *a1;
  v8 = a1[1];
  result = a1[2];
  *a1 = v4;
  a1[1] = v5;
  a1[2] = v6;
  if ( (a3 & 1) != 0 )
    return sub_60917654((int)(a1 + 16));
  v10 = *a1;
  if ( v7 != *a1 )
    goto LABEL_6;
  v11 = a1[1];
  v12 = v8 == v11;
  if ( v8 == v11 )
    v12 = result == a1[2];
  if ( !v12 )
  {
LABEL_6:
    if ( v10 )
    {
      v13 = a1[1];
      memset(v14, 0, sizeof(v14));
      sub_60972534(a1 + 6, v15);
      dword_60CC74CC(v15, v10, v13);
      dword_60CC7560(v14, v15);
      result = sub_60917844((int)(a1 + 16), v14, 0, a1[66], 1);
      if ( !result )
        return dword_60CC7568(v14);
      return result;
    }
    return sub_60917654((int)(a1 + 16));
  }
  return result;
}
