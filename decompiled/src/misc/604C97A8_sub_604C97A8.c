/* sub_604C97A8
 * address: 0x604C97A8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C97A8(int a1)
{
  int v1; // r6
  unsigned int v2; // r0
  int *v3; // r4
  int *v4; // r5
  int *v5; // r0
  int v6; // r2
  int v7; // r1

  v1 = 0;
  v3 = (int *)(a1 + 615700);
  v2 = FIELD_U32(a1, 615700);
  v4 = v3 - 131613;
  if ( v2 >= 0xA )
    v2 = 0;
  v5 = &v4[13161 * v2];
  v6 = v5[13155];
  if ( v6 == 12 )
    v6 = 0;
  v7 = (unsigned __int8)sub_6040135C(dword_60C99E44, v5[10], v6);
  if ( (unsigned int)*v3 < 0xA )
    v1 = *v3;
  return sub_604D4268(v3 - 148458, v7, v4[13161 * v1 + 13155]);
}
