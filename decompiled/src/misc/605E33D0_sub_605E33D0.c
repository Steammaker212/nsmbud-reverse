/* sub_605E33D0
 * address: 0x605E33D0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E33D0(int a1, int a2, int a3)
{
  _DWORD *v5; // r6
  int v6; // r0
  int v7; // r0
  bool v8; // zf
  int v9; // r7
  bool v10; // zf
  int v11; // r0
  bool v12; // zf

  if ( Actor__getProfileId((Actor *)a1) != 453
    && ((FIELD_U32(a1, 6260) & 0x820C02) != 0x400 || (FIELD_U8(a1, 6265) & 0x20) != 0) )
  {
    return 0;
  }
  v5 = *(_DWORD **)(a3 + 64);
  if ( !v5 )
    return 0;
  v6 = v5[2];
  if ( v6 )
  {
    if ( FIELD_U32(a1, 6664) == v6 )
      return 0;
  }
  v7 = v5[155];
  v8 = v7 == 0;
  if ( v7 )
    v8 = FIELD_U32(v7, 12) == 0;
  if ( !v8 )
    return 0;
  v9 = v5[156];
  v10 = v9 == 0;
  if ( v9 )
    v10 = FIELD_U32(v9, 28) == 0;
  if ( v10 || sub_605E3528(a1) )
    return 0;
  v11 = (**(int (__fastcall ***)(int, int))v9)(v9, a1);
  v12 = v11 == 1;
  if ( v11 == 1 )
    v12 = FIELD_U32(v9, 24) == 0;
  if ( v12 )
    return sub_605E35F8(a1, v5);
  else
    return 0;
}
