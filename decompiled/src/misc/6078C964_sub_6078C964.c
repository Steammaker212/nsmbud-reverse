/* sub_6078C964
 * address: 0x6078C964   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078C964(int result, int a2, int a3)
{
  _BYTE *v3; // lr
  int v4; // r12
  int v5; // r12
  int v6; // r12
  int v7; // r12
  int v8; // r12
  int v9; // r3

  v3 = (_BYTE *)(result + 304);
  if ( (FIELD_U8(result, 304) & 1) != 0 )
  {
    *(_DWORD *)(**(_DWORD **)(result + 240) + 32) = a2;
    *(_DWORD *)(**(_DWORD **)(result + 240) + 36) = a3;
    v4 = FIELD_U32(result, 264);
    if ( v4 )
    {
      *(_DWORD *)(*(_DWORD *)v4 + 32) = a2;
      *(_DWORD *)(**(_DWORD **)(result + 264) + 36) = a3;
    }
  }
  if ( (*v3 & 2) != 0 )
  {
    *(_DWORD *)(**(_DWORD **)(result + 244) + 32) = a2;
    *(_DWORD *)(**(_DWORD **)(result + 244) + 36) = a3;
    v5 = FIELD_U32(result, 268);
    if ( v5 )
    {
      *(_DWORD *)(*(_DWORD *)v5 + 32) = a2;
      *(_DWORD *)(**(_DWORD **)(result + 268) + 36) = a3;
    }
  }
  if ( (*v3 & 4) != 0 )
  {
    *(_DWORD *)(**(_DWORD **)(result + 248) + 32) = a2;
    *(_DWORD *)(**(_DWORD **)(result + 248) + 36) = a3;
    v6 = FIELD_U32(result, 272);
    if ( v6 )
    {
      *(_DWORD *)(*(_DWORD *)v6 + 32) = a2;
      *(_DWORD *)(**(_DWORD **)(result + 272) + 36) = a3;
    }
  }
  if ( (*v3 & 8) != 0 )
  {
    *(_DWORD *)(**(_DWORD **)(result + 252) + 32) = a2;
    *(_DWORD *)(**(_DWORD **)(result + 252) + 36) = a3;
    v7 = FIELD_U32(result, 276);
    if ( v7 )
    {
      *(_DWORD *)(*(_DWORD *)v7 + 32) = a2;
      *(_DWORD *)(**(_DWORD **)(result + 276) + 36) = a3;
    }
  }
  if ( (*v3 & 0x10) != 0 )
  {
    *(_DWORD *)(**(_DWORD **)(result + 256) + 32) = a2;
    *(_DWORD *)(**(_DWORD **)(result + 256) + 36) = a3;
    v8 = FIELD_U32(result, 280);
    if ( v8 )
    {
      *(_DWORD *)(*(_DWORD *)v8 + 32) = a2;
      *(_DWORD *)(**(_DWORD **)(result + 280) + 36) = a3;
    }
  }
  if ( (*v3 & 0x20) != 0 )
  {
    *(_DWORD *)(**(_DWORD **)(result + 260) + 32) = a2;
    *(_DWORD *)(**(_DWORD **)(result + 260) + 36) = a3;
    v9 = FIELD_U32(result, 284);
    if ( v9 )
    {
      *(_DWORD *)(*(_DWORD *)v9 + 32) = a2;
      result = **(_DWORD **)(result + 284);
      FIELD_U32(result, 36) = a3;
    }
  }
  return result;
}
