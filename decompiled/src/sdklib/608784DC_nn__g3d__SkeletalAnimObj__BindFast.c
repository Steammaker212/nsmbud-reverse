/* nn__g3d__SkeletalAnimObj__BindFast
 * address: 0x608784DC   size: 168   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__g3d__SkeletalAnimObj__BindFast(int a1, int a2)
{
  int v3; // r4
  int v4; // r6
  int v5; // r0
  int v6; // r0
  int v7; // r2

  v3 = FIELD_U32(a2, 32);
  v4 = a1 + 56;
  FIELD_U32(a1, 80) &= ~0x20u;
  sub_6086A2A4(a1 + 56, FIELD_U16(v3, 76));
  sub_6086A340(v4, *(unsigned __int16 **)(FIELD_U32(a1, 68) + 40));
  FIELD_U16(a1, 60) |= 1u;
  FIELD_U32(a1, 44) = 2139095040;
  v5 = FIELD_U32(a1, 40);
  if ( v5 >= 1 && v5 <= FIELD_U32(a1, 36) )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v7;
      *(_DWORD *)(FIELD_U32(a1, 32) + v6) = 2139095040;
      v6 += 12;
    }
    while ( v7 < FIELD_U32(a1, 40) );
  }
  return sub_608782F4(a1, v3);
}
