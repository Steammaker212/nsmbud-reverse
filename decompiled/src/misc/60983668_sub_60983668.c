/* sub_60983668
 * address: 0x60983668   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60983668(int result, int (__fastcall *a2)(int, int, int), int a3)
{
  int v3; // r4
  int v4; // r7
  int v7; // r6
  int v8; // r6
  int v9; // t1
  int v10; // r0

  v3 = FIELD_U32(result, 32);
  v4 = result + 28;
  if ( v3 != result + 28 )
  {
    v7 = FIELD_U32(result, 32);
    do
    {
      v9 = FIELD_U32(v7, 8);
      v8 = v7 + 8;
      v10 = (*(int (__fastcall **)(int))(v9 + 32))(v8);
      result = a2(v8 + 8, v10, a3);
      FIELD_U32(v8, 8) = -1;
      FIELD_U32(v8, 12) = -1;
      v3 = FIELD_U32(v3, 4);
      v7 = v3;
    }
    while ( v3 != v4 );
  }
  return result;
}
