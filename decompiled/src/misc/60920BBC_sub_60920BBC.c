/* sub_60920BBC
 * address: 0x60920BBC   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60920BBC(int *a1)
{
  unsigned int v2; // r1
  int result; // r0
  int v4; // r6
  int v5; // r7
  _DWORD v6[48]; // [sp+8h] [bp-160h] BYREF
  _BYTE v7[160]; // [sp+C8h] [bp-A0h] BYREF

  sub_60972344(v6, *((unsigned __int16 *)a1 + 30));
  v2 = v6[0];
  *((_BYTE *)a1 + 56) = v6[0];
  *((_BYTE *)a1 + 59) = HIBYTE(v2);
  *((_BYTE *)a1 + 58) = BYTE2(v2);
  result = v2 >> 8;
  *((_BYTE *)a1 + 57) = BYTE1(v2);
  v4 = *a1;
  if ( *a1 )
  {
    v5 = a1[1];
    memset(v6, 0, sizeof(v6));
    sub_60972534(a1 + 6, v7);
    dword_60CC74CC(v7, v4, v5);
    dword_60CC7560(v6, v7);
    result = sub_60917844((int)(a1 + 16), v6, 0, a1[66], 1);
    if ( !result )
      return dword_60CC7568(v6);
  }
  return result;
}
