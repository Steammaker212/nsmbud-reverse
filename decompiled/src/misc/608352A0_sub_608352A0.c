/* sub_608352A0
 * address: 0x608352A0   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608352A0(_DWORD *a1, int a2)
{
  int v2; // r6
  int v4; // r7
  int v5; // r5
  int v6; // r1
  int result; // r0
  int v8; // [sp+4h] [bp-24h] BYREF
  int v9; // [sp+8h] [bp-20h] BYREF
  int v10; // [sp+Ch] [bp-1Ch] BYREF

  v2 = FIELD_U32(a2, 4);
  v4 = 8;
  if ( (v2 & 0x10) != 0 )
  {
    dword_60CC72BC(*a1, 4, &v10);
    v4 = v10;
    if ( v10 <= 8 )
      v4 = 8;
  }
  if ( (v2 & 0x200) != 0 )
  {
    dword_60CC72BC(*a1, 13, &v9);
    v5 = v9;
    dword_60CC72BC(*a1, 53, &v9);
    if ( v4 < v5 )
      v4 = v5;
    if ( v4 < v9 )
      v4 = v9;
  }
  if ( (v2 & 0x800) != 0 )
  {
    dword_60CC72BC(*a1, 10, &v8);
    if ( v4 < v8 )
      v4 = v8;
  }
  v6 = v4;
  if ( v4 <= 32 )
    v6 = 32;
  if ( (v2 & 0x40) == 0 )
    v6 = v4;
  result = v6;
  if ( v6 <= 512 )
    result = 512;
  if ( (v2 & 0x1A0) == 0 )
    return v6;
  return result;
}
