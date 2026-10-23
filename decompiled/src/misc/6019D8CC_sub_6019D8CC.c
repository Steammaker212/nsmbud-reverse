/* sub_6019D8CC
 * address: 0x6019D8CC   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019D8CC(int a1)
{
  unsigned __int8 v2; // r0
  unsigned __int8 *v3; // r6
  int v4; // r5
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r7
  int v8; // r0
  Vec3 v10; // [sp+0h] [bp-30h] BYREF

  sub_6019D04C(a1);
  v3 = (unsigned __int8 *)(a1 + 12891);
  v2 = FIELD_U8(a1, 12891);
  if ( v2 )
  {
    v4 = 0;
    do
    {
      if ( v4 )
      {
        v5 = 0;
        if ( (unsigned int)v4 < 6 )
          v5 = v4;
        *(_DWORD *)(a1 + 40 * v5 + 12660) = sub_608332B0(a1 + 40 * v5 + 12632, a1 + 40 * v5 + 12644) - 0x40000000;
        v2 = *v3;
      }
      else
      {
        if ( FIELD_U32(a1, 240) == 3 )
          v6 = -1073741824;
        else
          v6 = 0x80000000;
        FIELD_U32(a1, 12660) = v6;
      }
      ++v4;
    }
    while ( v4 < v2 );
  }
  sub_6019DE18(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 84))(a1);
  if ( *v3 )
  {
    v7 = 0;
    do
    {
      v8 = 0;
      if ( (unsigned int)v7 < 6 )
        v8 = v7;
      v10 = *(Vec3 *)(a1 + 40 * v8 + 12644);
      EffectData_create(1134, &v10, 0, 0);
      ++v7;
    }
    while ( v7 < *v3 );
  }
  FIELD_U8(a1, 12893) = 0;
  return 12893;
}
