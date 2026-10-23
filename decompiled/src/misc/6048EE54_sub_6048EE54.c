/* sub_6048EE54
 * address: 0x6048EE54   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048EE54(_DWORD *a1, int a2)
{
  char v2; // r12
  unsigned int v5; // r1
  int *v6; // r4
  unsigned int v7; // t1
  char v8; // r5
  char v9; // r6
  int v10; // r6
  int v11; // r5
  char v12; // r3
  char v13; // r1
  int v14; // r3
  int v15; // r6
  char v16; // r5
  char v17; // r1
  int v18; // r3
  int v19; // r2
  int result; // r0
  char v21; // r3
  char v22; // r7
  _DWORD *v23; // r1

  if ( ((unsigned int)&dword_60C9FD50[9] & ~(1615392376 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD50[9]) )
  {
    dword_60C9FDFC[0] = 0;
    dword_60C9FDFC[1] = 1;
    dword_60C9FDFC[2] = 2;
    dword_60C9FDFC[3] = 3;
    _cxa_guard_release(&dword_60C9FD50[9]);
  }
  if ( a2 )
  {
    v7 = a1[3557];
    v6 = a1 + 3557;
    v5 = v7;
    if ( v7 >= 4 )
      v5 = 0;
    v8 = *(_BYTE *)(*(v6 - 1885) + 64);
    v9 = v8 & 0xFE;
    if ( !dword_60C9FDFC[v5] )
      v9 = v8 | 1;
    *(_BYTE *)(*(v6 - 1885) + 64) = v9;
    v10 = *v6;
    if ( (unsigned int)*v6 >= 4 )
      v10 = 0;
    v11 = *(v6 - 1884);
    v12 = FIELD_U8(v11, 64);
    v13 = v12 & 0xFE;
    if ( dword_60C9FDFC[v10] == 1 )
      v13 = v12 | 1;
    FIELD_U8(v11, 64) = v13;
    v14 = *v6;
    if ( (unsigned int)*v6 >= 4 )
      v14 = 0;
    v15 = *(v6 - 1883);
    v16 = FIELD_U8(v15, 64);
    v17 = v16 & 0xFE;
    if ( dword_60C9FDFC[v14] == 2 )
      v17 = v16 | 1;
    FIELD_U8(v15, 64) = v17;
    v18 = *v6;
    if ( (unsigned int)*v6 >= 4 )
      v18 = 0;
    v19 = dword_60C9FDFC[v18];
    result = *(v6 - 1882);
    v21 = FIELD_U8(result, 64);
    v22 = v21 & 0xFE;
    if ( v19 == 3 )
      v22 = v21 | 1;
    FIELD_U8(result, 64) = v22;
  }
  else
  {
    v23 = a1 + 1672;
    *(_BYTE *)(*v23 + 64) &= ~1u;
    *(_BYTE *)(v23[1] + 64) &= ~1u;
    *(_BYTE *)(v23[2] + 64) &= ~1u;
    result = a1[1675];
    FIELD_U8(result, 64) &= ~1u;
  }
  return result;
}
