/* sub_60502C84
 * address: 0x60502C84   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60502C84(int a1, unsigned int *a2, int a3)
{
  int v4; // r5
  unsigned int v6; // r1
  int result; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r1

  v4 = a1;
  v6 = *a2;
  if ( v6 < 0x100 )
    a1 += v6;
  result = FIELD_U8(a1, 500);
  if ( !result )
  {
    v8 = sub_608DE61C(v4 + 52, v6);
    if ( v8 )
      v9 = v8 - FIELD_U32(v4, 64);
    else
      v9 = 0;
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v9 + 40))(v9, 1);
    v10 = v4;
    if ( *a2 < 0x100 )
      v10 = v4 + *a2;
    FIELD_U8(v10, 500) = 1;
    if ( *a2 < 0x100 )
      v4 += *a2;
    FIELD_U8(v4, 756) = a3 ^ 1;
    return a3 ^ 1;
  }
  return result;
}
