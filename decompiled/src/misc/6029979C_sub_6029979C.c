/* sub_6029979C
 * address: 0x6029979C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029979C(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  _DWORD *v8; // r0
  int v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r0

  v3 = (_DWORD *)(a1 + 6748);
  result = FIELD_U32(a1, 6748);
  if ( result == 2 )
  {
    v8 = *(_DWORD **)(a1 + 6300);
    v9 = v8[3];
    v10 = v8[2];
    v11 = v8[17];
    if ( v10 > v11 )
      v9 += 4 * v11;
    result = *(unsigned __int8 *)(*(_DWORD *)v9 + 28);
    if ( (result & 0x20) != 0 )
      return (int)StageActor__delete((StateActor *)a1, 1);
  }
  else if ( result == 1 )
  {
    v4 = *(_DWORD **)(a1 + 6300);
    v5 = v4[3];
    v6 = v4[2];
    v7 = v4[17];
    if ( v6 > v7 )
      v5 += 4 * v7;
    result = *(unsigned __int8 *)(*(_DWORD *)v5 + 28);
    if ( (result & 0x20) != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 756))(a1);
      FIELD_U32(a1, 160) = 0;
      result = 2;
      *v3 = 2;
    }
  }
  return result;
}
