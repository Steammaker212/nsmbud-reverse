/* sub_6042E09C
 * address: 0x6042E09C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042E09C(_DWORD *a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r6
  int v6; // r9
  int result; // r0
  int v8; // r7
  unsigned int v9; // r0
  _BYTE v10[40]; // [sp+8h] [bp-88h] BYREF
  int v11; // [sp+30h] [bp-60h]
  char v12; // [sp+34h] [bp-5Ch]
  char v13; // [sp+35h] [bp-5Bh]
  char v14; // [sp+61h] [bp-2Fh]

  dword_60CC7970(FIELD_U32(a2, 192), 50);
  sub_6091DD8C(*a1, a2, 1);
  sub_6090B350(v10);
  v12 = 1;
  v13 = 5;
  v11 = 33948165;
  sub_6090B4B0(v10, a2);
  v4 = (_DWORD *)a1[1];
  v5 = 0;
  v6 = v4[288] + 140;
  while ( 1 )
  {
    result = sub_6083DC18(v6, v5, v4[256], v4[257], 0);
    v8 = result;
    if ( result )
    {
      v9 = sub_6083DD44(result);
      if ( v9 >= 3 )
        LOBYTE(v9) = 3;
      v14 = v9;
      sub_6090BC48(v10, a2);
      sub_6042D60C((int)a1, a2, v5);
      result = sub_6042E1A4(a1, a2, v8, v5);
    }
    if ( v5 == 5 )
      break;
    v4 = (_DWORD *)a1[1];
    ++v5;
  }
  return result;
}
