/* sub_608B1E38
 * address: 0x608B1E38   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1E38(int a1, _DWORD *a2, int a3)
{
  int v3; // r0
  int v4; // r12
  int v5; // t1
  unsigned int v6; // r4
  int v7; // lr
  unsigned int v8; // r2
  unsigned __int8 v9; // r3
  int v10; // r2

  v5 = FIELD_U32(a1, 20);
  v3 = a1 + 20;
  v4 = v5;
  v6 = 0;
  v7 = 0;
  v8 = dword_60AF2CA4[a3];
  v9 = 0;
  do
  {
    if ( (v4 & (1 << v6)) != 0 )
    {
      ++v7;
      v9 |= v8 == v6;
    }
    ++v6;
  }
  while ( v6 <= v8 );
  v10 = 0;
  if ( v7 && ((v9 ^ 1) & 1) == 0 )
  {
    v10 = 1;
    *a2 = *(_DWORD *)(v3 + 4 * v7);
  }
  return v10;
}
