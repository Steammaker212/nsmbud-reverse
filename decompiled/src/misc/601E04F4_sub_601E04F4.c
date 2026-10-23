/* sub_601E04F4
 * address: 0x601E04F4   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E04F4(int a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r5
  int v6; // r7
  _DWORD *v7; // r6
  int result; // r0
  int v9; // r0
  int v10; // r2

  v4 = sub_601A4454(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  v5 = sub_60178780(v4, FIELD_U32(a1, 8));
  v6 = 0;
  if ( sub_60178694(v5, 0) )
  {
    v7 = (_DWORD *)sub_60178694(v5, 0);
    v6 = 1;
  }
  else
  {
    v7 = 0;
  }
  if ( sub_60178694(v5, 1u) )
  {
    v7 = (_DWORD *)sub_60178694(v5, 1u);
    ++v6;
  }
  if ( sub_60178694(v5, 2u) )
  {
    v7 = (_DWORD *)sub_60178694(v5, 2u);
    ++v6;
  }
  if ( sub_60178694(v5, 3u) )
  {
    v7 = (_DWORD *)sub_60178694(v5, 3u);
    ++v6;
  }
  if ( sub_60178694(v5, 4u) )
  {
    v7 = (_DWORD *)sub_60178694(v5, 4u);
    ++v6;
  }
  if ( sub_60178694(v5, 5u) )
  {
    v7 = (_DWORD *)sub_60178694(v5, 5u);
    ++v6;
  }
  result = 0;
  if ( v6 == 1 )
  {
    v9 = v7[22];
    v10 = v7[24];
    *a2 = v7[21];
    a2[1] = v9;
    a2[2] = v10;
    return 1;
  }
  return result;
}
