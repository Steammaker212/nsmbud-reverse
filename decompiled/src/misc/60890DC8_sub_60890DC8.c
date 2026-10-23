/* sub_60890DC8
 * address: 0x60890DC8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60890DC8(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v8; // r6
  int v9; // r1
  int v10; // r0
  void (__fastcall *v11)(int *); // r1
  int v12; // r1
  int v14[4]; // [sp+0h] [bp-30h] BYREF
  bool v15; // [sp+10h] [bp-20h]
  _DWORD *v16; // [sp+14h] [bp-1Ch]

  v8 = 0;
  v14[0] = a2;
  v14[1] = a3;
  v9 = 0;
  v14[3] = a5;
  v14[2] = a4;
  v15 = a4 == 3;
  v16 = a6;
  v10 = *a6;
  if ( a4 != 3 )
    v9 = *(_DWORD *)(FIELD_U32(a3, 348) + 4 * a4 + 584);
  *(_DWORD *)(FIELD_U32(a1, 8) + 2416 * v10 + 2392) = v9;
  *(_DWORD *)(FIELD_U32(a1, 8) + 2416 * v10 + 2396) = 6;
  if ( sub_6087EDD0(v14) == 1 )
  {
    v11 = *(void (__fastcall **)(int *))(a3 + 716);
    if ( v11 )
      v11(v14);
    v12 = *a6;
    v8 = 1;
    *(_DWORD *)(FIELD_U32(a1, 8) + 2416 * *a6 + 2392) = 0;
    *(_DWORD *)(FIELD_U32(a1, 8) + 2416 * v12 + 2396) = 6;
  }
  return v8;
}
