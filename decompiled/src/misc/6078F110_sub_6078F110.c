/* sub_6078F110
 * address: 0x6078F110   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078F110(_DWORD *a1)
{
  unsigned int v2; // r1
  int result; // r0
  int v4; // r0
  unsigned int v5; // r1
  int *v6; // r0
  int v7; // r5
  unsigned int v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  unsigned int v11; // r1
  int v12; // r0
  int v13; // r0
  unsigned int v14; // r1
  int v15; // r0

  v2 = a1[118] - 7;
  result = 1;
  if ( v2 <= 1 )
  {
    v4 = a1[6];
    v5 = FIELD_U32(v4, 24);
    v6 = *(int **)(v4 + 28);
    if ( v5 > 2 )
      v6 += 2;
    v7 = *v6;
    if ( sub_60418548(*v6 + 4, 30.0) == 1 )
    {
      a1[118] = 7;
      (*(void (__fastcall **)(_DWORD *, int))(*a1 + 212))(a1, 4);
      v8 = a1[75];
      if ( v8 >= 6 )
        v8 = 0;
      v9 = &a1[v8];
      a1[6] = v9[60];
      a1[73] = v9[66];
      (*(void (__fastcall **)(_DWORD *))(*a1 + 260))(a1);
      a1[120] = 0;
      (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 176))(a1, 1, 1);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 228))(a1);
    }
    result = 0;
    if ( (FIELD_U8(v7, 28) & 0x20) != 0 )
    {
      v10 = a1[73];
      if ( v10 )
      {
        v11 = FIELD_U32(v10, 24);
        v12 = FIELD_U32(v10, 28);
        if ( v11 > 2 )
          v12 += 8;
        *(_DWORD *)(*(_DWORD *)v12 + 136) = 0;
      }
      v13 = a1[6];
      v14 = FIELD_U32(v13, 24);
      v15 = FIELD_U32(v13, 28);
      if ( v14 > 2 )
        v15 += 8;
      *(_DWORD *)(*(_DWORD *)v15 + 136) = 0;
      return 1;
    }
  }
  return result;
}
