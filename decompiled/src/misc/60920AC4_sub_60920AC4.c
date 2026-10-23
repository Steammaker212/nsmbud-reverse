/* sub_60920AC4
 * address: 0x60920AC4   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60920AC4(int *a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v6; // r0
  unsigned int v13; // r0
  int v14; // r1
  int result; // r0
  int v16; // r6
  int v17; // r7
  _BYTE v18[192]; // [sp+8h] [bp-160h] BYREF
  _BYTE v19[160]; // [sp+C8h] [bp-A0h] BYREF

  v6 = a2 | (a3 << 8);
  *((_BYTE *)a1 + 57) = a3;
  _R1 = a4 << 16;
  __asm { UXTB16          R1, R1 }
  v13 = v6 | _R1;
  v14 = v13 | (a5 << 24);
  result = HIWORD(v13);
  *((_BYTE *)a1 + 56) = v14;
  *((_BYTE *)a1 + 59) = HIBYTE(v14);
  *((_BYTE *)a1 + 58) = result;
  v16 = *a1;
  if ( *a1 )
  {
    v17 = a1[1];
    memset(v18, 0, sizeof(v18));
    sub_60972534(a1 + 6, v19);
    dword_60CC74CC(v19, v16, v17);
    dword_60CC7560(v18, v19);
    result = sub_60917844((int)(a1 + 16), v18, 0, a1[66], 1);
    if ( !result )
      return dword_60CC7568(v18);
  }
  return result;
}
