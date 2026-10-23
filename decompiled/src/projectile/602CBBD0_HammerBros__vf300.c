/* HammerBros__vf300
 * address: 0x602CBBD0   size: 324   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x602631B4
// 
// Overridden by: None
bool __fastcall HammerBros__vf300(_DWORD *a1)
{
  int *v1; // r4
  int v2; // r5
  int v3; // r12
  int v4; // lr
  int v5; // r8
  int v6; // r9
  int v7; // r6
  int v8; // r7
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r5

  v1 = a1 + 3117;
  v2 = a1[3117];
  if ( v2 < 1 )
  {
    v11 = a1[3117];
  }
  else
  {
    v3 = a1[800];
    a1[800] = v3 | 0x40000000;
    v4 = a1[798];
    a1[798] = v4 | 0x40000000;
    v5 = a1[794];
    a1[794] = v5 | 0x40000000;
    v6 = a1[796];
    a1[796] = v6 | 0x40000000;
    v7 = a1[801];
    a1[801] = v7 | 0x200;
    v8 = a1[799];
    a1[799] = v8 | 0x200;
    v9 = a1[795];
    a1[795] = v9 | 0x200;
    v10 = a1[797];
    a1[797] = v10 | 0x200;
    v11 = v2 - 1;
    *v1 = v2 - 1;
    if ( v2 == 1 )
    {
      v12 = a1[718];
      if ( (v12 & 1) != 0
        || (v12 & 0x10400) == 0x400
        || (v12 & 0x440000) != 0 && (v12 & 0x10000000) == 0
        || (v12 & 0x880000) != 0 && (v12 & 0x20000000) == 0 )
      {
        a1[800] = v3 | 0x40000800;
        a1[798] = v4 | 0x40000800;
        a1[794] = v5 | 0x40000800;
        a1[796] = v6 | 0x40000800;
        v11 = 1;
        *v1 = 1;
      }
      else if ( !v11 )
      {
        sub_60264790();
        v11 = *v1;
      }
    }
    else if ( v2 == 2 )
    {
      a1[801] = v7 & 0xFFFFFDFF;
      a1[799] = v8 & 0xFFFFFDFF;
      a1[795] = v9 & 0xFFFFFDFF;
      a1[797] = v10 & 0xFFFFFDFF;
    }
  }
  return v11 != 0;
}
