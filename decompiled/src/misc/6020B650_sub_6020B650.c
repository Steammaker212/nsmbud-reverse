/* sub_6020B650
 * address: 0x6020B650   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020B650(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int result; // r0
  signed int v7; // r1

  FIELD_U32(a1, 200) = 0;
  if ( FIELD_U8(a1, 540) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v2 = *(_DWORD **)(a1 + 408);
  v3 = (int *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  result = *v3;
  *(_DWORD *)(*v3 + 24) = 1065353216;
  v7 = FIELD_U32(a1, 364);
  if ( v7 >= 0 )
  {
    sub_601E4F60(dword_60C8B13C, v7);
    FIELD_U32(a1, 364) = -1;
    return -1;
  }
  return result;
}
