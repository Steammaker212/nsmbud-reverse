/* sub_6021F6E0
 * address: 0x6021F6E0   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021F6E0(int a1, int *a2, int *a3, int a4)
{
  int v7; // r4
  int v8; // r6
  int v9; // r4
  unsigned int v10; // r7
  int v12; // r1

  v7 = *a3;
  v8 = sub_601A443C(dword_60C89E18, *a3, a3[1]);
  if ( FIELD_S32(v8, 28) < 1 )
    return 0;
  v9 = dword_60AFD488[5 * v7 + a4];
  v10 = 0;
  while ( !sub_60183038(v8, v10, v9) )
  {
    if ( (signed int)++v10 >= FIELD_U32(v8, 28) )
      return 0;
  }
  v12 = a3[1];
  *a2 = *a3;
  a2[1] = v12;
  a2[2] = v10;
  return 1;
}
