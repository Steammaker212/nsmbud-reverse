/* sub_608E2B80
 * address: 0x608E2B80   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E2B80(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *v8; // r0
  int v9; // r5
  int v10; // r1
  int v11; // r3
  int v12; // r2
  _QWORD *v13; // r4
  int v14; // r0
  int v15; // r0
  int v17; // [sp+10h] [bp-20h] BYREF
  _DWORD v18[7]; // [sp+14h] [bp-1Ch] BYREF

  v8 = (_DWORD *)sub_608E78F8(a1, a3);
  v9 = 0;
  v18[0] = 0;
  v10 = *v8;
  v11 = v8[3];
  v13 = v8 + 2;
  v12 = v8[2];
  v17 = 0;
  v14 = nn__fs__ReadFile_9AE6CC(v18, v10, v12, v11, a4, a5, &v17);
  FIELD_U32(a1, 80) = v14;
  if ( !v14 )
  {
    v15 = v18[0];
    v9 = 1;
    *v13 += v18[0];
    if ( a2 )
      *a2 = v15;
  }
  return v9;
}
