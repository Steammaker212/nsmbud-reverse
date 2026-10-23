/* sub_60440288
 * address: 0x60440288   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60440288(int a1, int a2, unsigned int a3, int a4)
{
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r0
  _BYTE v11[95]; // [sp+0h] [bp-78h] BYREF
  char v12; // [sp+5Fh] [bp-19h]
  char v13; // [sp+60h] [bp-18h]
  bool v14; // [sp+61h] [bp-17h]
  bool v15; // [sp+62h] [bp-16h]
  bool v16; // [sp+63h] [bp-15h]

  if ( a4 == 1 )
  {
    v6 = a1 + 584 * a3;
    if ( (FIELD_U8(v6, 44) & 1) != 0 )
      return dword_60CC77F0(FIELD_U32(a2, 192), 1, v6 + 56);
  }
  sub_6090B350(v11);
  v7 = a3 & 3;
  v14 = (a3 & 4) != 0;
  v15 = v14;
  v16 = v14;
  v8 = a3 & 8;
  switch ( v7 )
  {
    case 1:
      v9 = 2 - (v8 >> 3);
      break;
    case 2:
      LOBYTE(v9) = 0;
      break;
    case 3:
      LOBYTE(v9) = 3;
      break;
    default:
      v9 = (v8 >> 3) + 1;
      break;
  }
  v11[89] = v9;
  v12 = 0x1020200u >> ((a3 >> 1) & 0x18 ^ 0x10);
  v13 = v12;
  return sub_6090BC48(v11, a2);
}
