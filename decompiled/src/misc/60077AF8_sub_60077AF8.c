/* sub_60077AF8
 * address: 0x60077AF8   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60077AF8(int a1)
{
  int v2; // r5
  int v3; // r9
  int i; // r6
  _DWORD *result; // r0
  _DWORD v6[12]; // [sp+0h] [bp-80h] BYREF
  _BYTE v7[12]; // [sp+30h] [bp-50h] BYREF
  int v8; // [sp+3Ch] [bp-44h]
  int v9; // [sp+4Ch] [bp-34h]
  int v10; // [sp+5Ch] [bp-24h]

  memset(v6, 0, 44);
  v6[3] = Profile__get(0x2D5u);
  v2 = 0;
  v6[2] = FIELD_U32(a1, 8);
  LOBYTE(v6[8]) = 0;
  (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 7112) + 108))(
    **(_DWORD **)(a1 + 7112),
    FIELD_U32(a1, 7564),
    v7);
  FIELD_U32(a1, 7408) = v8;
  FIELD_U32(a1, 7412) = v9;
  FIELD_U32(a1, 7416) = v10;
  v6[6] = FIELD_U32(a1, 7416);
  v6[5] = FIELD_U32(a1, 7412);
  v6[4] = FIELD_U32(a1, 7408);
  v3 = 3;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1)
    && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1) )
  {
    v3 = 3;
    if ( FIELD_S32(a1, 25372) > 1 )
      v3 = 5;
  }
  for ( i = 0; i < v3; ++i )
  {
    v6[0] = v2 | FIELD_U32(a1, 25368) | 0x20;
    result = sub_600080BC((_DWORD *)ActorMgr__instance, v6);
    v2 += 0x1000000;
  }
  return result;
}
