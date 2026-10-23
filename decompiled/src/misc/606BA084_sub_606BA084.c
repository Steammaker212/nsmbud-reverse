/* sub_606BA084
 * address: 0x606BA084   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BA084(int a1)
{
  int v2; // r5
  _DWORD *v3; // r4
  int v4; // r7
  int v5; // r6
  unsigned int v6; // r0
  _DWORD v8[8]; // [sp+0h] [bp-20h] BYREF

  if ( !FIELD_U32(a1, 6128) )
  {
    if ( !FIELD_U8(a1, 6140) )
      ((void (__fastcall *)(int))loc_606BA1C0)(a1);
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      sub_606BA3D4(a1);
    }
    else
    {
      v2 = 0;
      v3 = (_DWORD *)(a1 + 71864);
      do
      {
        sub_606BA5F4(a1, v8, v2++);
        *(v3 - 2) = v8[0];
        *(v3 - 1) = v8[1];
        *v3 = FIELD_U32(a1, 116);
        v3 += 3;
      }
      while ( v2 != 13 );
    }
    v4 = 13;
    FIELD_U32(EnemyCounterMaybe_instance, 924) = FIELD_U32(a1, 71860);
    FIELD_U32(a1, 6248) += FIELD_U32(a1, 6252);
    v5 = a1 + 71856;
    do
    {
      v6 = sub_6000F7B8(FIELD_F32(v5, 16) - FIELD_F32(v5, 4), -(float)(FIELD_F32(v5, 12) - *(float *)v5));
      --v4;
      FIELD_U32(v5, 168) = FIELD_U32(a1, 6248);
      FIELD_U32(v5, 172) = 0;
      FIELD_U32(v5, 176) = -v6;
      v5 += 12;
    }
    while ( v4 );
  }
  sub_606B9E9C(a1);
  return 1;
}
