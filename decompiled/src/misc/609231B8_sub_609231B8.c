/* sub_609231B8
 * address: 0x609231B8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609231B8(_DWORD *a1, _DWORD *a2)
{
  void *v4; // r5
  const void *v5; // r8
  int v6; // r0
  signed int v7; // r7
  bool v8; // cc
  signed int v9; // r0
  int result; // r0

  v4 = (void *)a1[17];
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v5 = (const void *)a2[1];
  if ( v4 != v5 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v6 = a2[1];
    v7 = 0;
    while ( *(_BYTE *)(v6 + v7) )
    {
      if ( !*(_BYTE *)(v6 + v7 + 1) )
      {
        ++v7;
        break;
      }
      if ( !*(_BYTE *)(v6 + v7 + 2) )
      {
        v7 += 2;
        break;
      }
      v8 = v7 + 2 < 0x80000;
      v7 += 3;
      if ( !v8 )
      {
        v7 = 0;
        break;
      }
    }
    v9 = a1[18];
    if ( v7 >= v9 )
      v7 = v9 - 1;
    qmemcpy(v4, v5, v7);
    *((_BYTE *)v4 + v7) = 0;
  }
  result = a1[8];
  FIELD_U32(result, 484) |= 1u;
  return result;
}
