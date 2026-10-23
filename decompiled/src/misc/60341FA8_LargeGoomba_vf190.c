/* LargeGoomba_vf190
 * address: 0x60341FA8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf190(int a1)
{
  unsigned int v2; // r0
  int v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int result; // r0
  _DWORD v9[5]; // [sp+4h] [bp-14h] BYREF

  if ( FIELD_U8(a1, 535) )
  {
    v2 = FIELD_U32(a1, 6388);
    if ( v2 >= 4 )
      v2 = 0;
    v3 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32);
    v9[0] = FIELD_U32(a1, 6320);
    v9[1] = FIELD_U32(a1, 6352);
    v9[2] = FIELD_U32(a1, 6356);
    (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 1000))(v3, v9);
  }
  v4 = *(_DWORD **)(a1 + 6304);
  v5 = (_DWORD *)v4[3];
  v6 = v4[2];
  v7 = v4[17];
  if ( v6 > v7 )
    v5 += v7;
  result = sub_60418548(*v5 + 4);
  if ( result == 1 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 652))(a1);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94590);
  }
  return result;
}
