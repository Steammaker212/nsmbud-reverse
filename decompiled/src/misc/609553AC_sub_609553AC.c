/* sub_609553AC
 * address: 0x609553AC   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609553AC(int a1, int a2)
{
  int v4; // r8
  char v5; // r0
  char v6; // r1
  char v7; // r7
  unsigned int v8; // r6
  int v9; // r5
  int v10; // r0
  char v11; // r0
  char v12; // r1
  int result; // r0

  v4 = FIELD_U32(a1, 120);
  if ( !v4 )
    return 0;
  v5 = sub_6095862C(FIELD_U32(a1, 124), a2);
  v6 = a2;
  if ( a2 )
    v6 = 1;
  v7 = v6 & v5;
  if ( v4 != 1 )
  {
    v8 = 1;
    v9 = 1044;
    do
    {
      v10 = FIELD_U32(a1, 124);
      if ( FIELD_U32(a1, 120) > v8 )
        v10 += v9;
      v11 = sub_6095862C(v10, a2);
      v12 = a2;
      ++v8;
      v9 += 1044;
      if ( a2 )
        v12 = 1;
      v7 |= v12 & v11;
    }
    while ( v4 != v8 );
  }
  result = v7 & 1;
  if ( (v7 & 1) != 0 )
    return a2;
  return result;
}
