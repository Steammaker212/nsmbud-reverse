/* sub_60958724
 * address: 0x60958724   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60958724(int a1)
{
  _DWORD v3[12]; // [sp+0h] [bp-3D0h] BYREF
  _DWORD v4[64]; // [sp+30h] [bp-3A0h] BYREF
  _BYTE v5[672]; // [sp+130h] [bp-2A0h] BYREF

  FIELD_U16(a1, 2) = 0;
  sub_6083C9C8((_DWORD *)(a1 + 200));
  memset(v5, 0, 640);
  memset(v4, 0, sizeof(v4));
  sub_6083D774((int)v5);
  sub_6083D798(v4);
  sub_6083D774((int)&v5[40]);
  sub_6083D798(&v4[4]);
  sub_6083D774((int)&v5[80]);
  sub_6083D798(&v4[8]);
  sub_6083D774((int)&v5[120]);
  sub_6083D798(&v4[12]);
  sub_6083D774((int)&v5[160]);
  sub_6083D798(&v4[16]);
  sub_6083D774((int)&v5[200]);
  sub_6083D798(&v4[20]);
  sub_6083D774((int)&v5[240]);
  sub_6083D798(&v4[24]);
  sub_6083D774((int)&v5[280]);
  sub_6083D798(&v4[28]);
  sub_6083D774((int)&v5[320]);
  sub_6083D798(&v4[32]);
  sub_6083D774((int)&v5[360]);
  sub_6083D798(&v4[36]);
  sub_6083D774((int)&v5[400]);
  sub_6083D798(&v4[40]);
  sub_6083D774((int)&v5[440]);
  sub_6083D798(&v4[44]);
  sub_6083D774((int)&v5[480]);
  sub_6083D798(&v4[48]);
  sub_6083D774((int)&v5[520]);
  sub_6083D798(&v4[52]);
  sub_6083D774((int)&v5[560]);
  sub_6083D798(&v4[56]);
  sub_6083D774((int)&v5[600]);
  sub_6083D798(&v4[60]);
  memset(v3, 0, sizeof(v3));
  v3[2] = v5;
  v3[0] = 1048592;
  v3[4] = v4;
  FIELD_U16(a1, 362) = sub_6083C978((unsigned __int16 *)v3);
  *(_BYTE *)a1 = 0;
  memset((void *)(a1 + 4), 0, 192);
  FIELD_U16(a1, 360) = 0;
  return a1;
}
